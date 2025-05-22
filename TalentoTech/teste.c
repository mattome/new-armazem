void _pressionarBotao(String valor) {
    setState(() {
        else if (valor == '⌫') {
        _removerUltimoCaractere();
        }
    });
  }

void _removerUltimoCaractere() {
    if (_expressao.isNotEmpty) {
      _expressao = _expressao.substring(0, _expressao.length - 1);
    }
  }



  Row(
          children: [
            Expanded(child: _botao('⌫')), 
          ],
  ),



  double _avaliarExpressao(String expressao) {
    expressao = expressao.replaceAll('e', '2.7182818285');
    expressao = expressao.replaceAll('π', '3.141592653589793'); 
    expressao = expressao.replaceAll('%', '/100');

  }

  Expanded(
          flex: 3,
          child: GridView.count(
            crossAxisCount: 5,
            childAspectRatio: 2,
            children: [
              _botao('e'),
              _botao('π'),
              _botao('('),
              _botao(')'),
              _botao('%'),
            ],
          ),
        ),