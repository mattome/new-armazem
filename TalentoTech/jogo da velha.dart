import 'package:flutter/material.dart';

class JogoDaVelha extends StatefulWidget {
    const JogoDaVelha({supeer.key});

    @ovverride
    State<JogoDaVelha> createState() => _JogoDaVelhaState();
}

class _JogoDaVelhaState extends State<JogoDaVelha> {
    List<String> _tabuleiro = List.filled(9, '');
    Sting _jogador = 'X';

    void _iniciarJogo() {
        setState(() {
            _tabuleiro = List.filled(9, '');
            _jogador = 'X';
        }
        );
    }

    void _trocaJogador(){
        setState(() {
            _jogador = _jogador == 'X'? 'O' : 'X';
        }
        );
    }

    void _mostreDialogoVencedor(String vencedor) {
        showDialog(
            context: context,
            builder: (BuilderContext context) {
                return AlertDialog(
                    title: Text(winner == 'Empate' ? 'Empate' : 'Vencedor: $vencedor'),
                    actions: [
                        ElevatedButton(
                            child: const Text('Reiniciar Jogo'),
                            onPressed: () {
                                Navigator.of(context).pop();
                                _iniciarJogo();
                            },
                        ),
                    ],
                );
            },
        );
    }

    bool _verificaVencedor(String jogador) {
        const posicoesVencedoras = [
            [0, 1, 2],
            [3, 4, 5],
            [6, 7, 8],
            [0, 3, 6],
            [1, 4, 7],
            [2, 5, 8],
            [0, 4, 8],
            [2, 4, 6],
        ];
        for (var posicoes in posicoesVencedoras) {
            if(_tabuleiro[posicoes[0]] == jogador &&
               _tabuleiro[posicoes[1]] == jogador &&
               _tabuleiro[posicoes[2]] == jogador &&) {
               _mostreDialogoVencedor(jogador);
               return true;
               }
        }
        if(!_tabuleiro.contains('')) {
            _mostreDialogoVencedor('Empate');
            return true;
        }
        return false;
    }

        void _jogada(int index) {
            if (_tabuleiro[index] == '') {
                setState(() {
                    _tabuleiro[index] = _jogador;
                    if (!_verificaVencedor(_jogador)) {
                        _trocaJogador();
                        if (_contraMaquina && _jogador == 'O') {
                            _jogadaComputador();
                        }
                    }
                }
                );
            }
        }

    @override
    Widget build(BuildContext context) {
        double altura = MediaQuery.of(context).size.height * 0.5;
        return GridView.builder(
            gridDelegate: const SliverGridDelegateWithFixedCrossAxisCount(
                crooAxisCount: 3,
                crossAxisSpacing: 5.0,
                mainAxisSpacing: 5.0,
            ),
            itemCount: 9,
            itemBuilder: (context, index) {
                return GestureDetector(
                    onTap: () => _jogada(index),
                    child: Container(
                        decoration: BoxDecoration(
                            color: Colors.blue[100],
                            borderRadius: BorderRadius.circular(5),
                        ),
                        child: Center(
                            child: Text(
                                _tabuleiro[index],
                                style: const TextStyle(fontSize: 40.0),
                            ),
                        ),
                    ),
                );
            },
        );
    }
}
