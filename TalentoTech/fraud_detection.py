# 1. Importação das Bibliotecas
import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import classification_report, confusion_matrix, roc_auc_score
from sklearn.preprocessing import StandardScaler
from imblearn.over_sampling import SMOTE  # Para balanceamento dos dados
import joblib  # Para salvar o modelo

# 2. Carregamento dos Dados
# Baixe o dataset do Kaggle: https://www.kaggle.com/mlg-ulb/creditcardfraud
# Substitua 'creditcard.csv' pelo caminho do arquivo no seu computador
df = pd.read_csv('creditcard.csv')

# Visualizar as primeiras linhas
print("Primeiras linhas do dataset:")
print(df.head())

# Verificar informações do dataset
print("\nInformações do dataset:")
print(df.info())

# Verificar distribuição das classes (fraude vs não fraude)
print("\nDistribuição das classes:")
print(df['Class'].value_counts())

# 3. Pré-processamento dos Dados
# Normalizar a coluna 'Amount'
scaler = StandardScaler()
df['Amount'] = scaler.fit_transform(df['Amount'].values.reshape(-1, 1))

# Remover a coluna 'Time'
df.drop('Time', axis=1, inplace=True)

# Separar features (X) e target (y)
X = df.drop('Class', axis=1)
y = df['Class']

# 4. Balanceamento dos Dados com SMOTE
# Aplicar SMOTE para balanceamento
smote = SMOTE(random_state=42)
X_res, y_res = smote.fit_resample(X, y)

# Verificar nova distribuição das classes
print("\nDistribuição das classes após balanceamento:")
print(y_res.value_counts())

# 5. Divisão dos Dados em Treino e Teste
X_train, X_test, y_train, y_test = train_test_split(X_res, y_res, test_size=0.2, random_state=42)

# 6. Treinamento do Modelo (Random Forest)
# Criar e treinar o modelo
model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_train, y_train)

# 7. Avaliação do Modelo
# Fazer previsões no conjunto de teste
y_pred = model.predict(X_test)

# Matriz de confusão
print("\nMatriz de Confusão:")
print(confusion_matrix(y_test, y_pred))

# Relatório de classificação
print("\nRelatório de Classificação:")
print(classification_report(y_test, y_pred))

# AUC-ROC Score
roc_auc = roc_auc_score(y_test, y_pred)
print(f"\nAUC-ROC Score: {roc_auc}")

# 8. Salvar o Modelo
# Salvar o modelo treinado para uso futuro
joblib.dump(model, 'fraud_detection_model.pkl')
print("\nModelo salvo como 'fraud_detection_model.pkl'.")