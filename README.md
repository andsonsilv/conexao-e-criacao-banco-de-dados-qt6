# conexao-e-criacao-banco-de-dados-qt6
Implementação da classe de acesso ao banco SQLite. Para teste, uma tabela **usuario** foi criada com as colunas **id**, **nome** e **senha**.

## para testar o projeto
Use o Qt Creator. Kit selection `Desktop Qt 6.1.0 GCC 64bit`. Um arquivo nomeado **conexao db.db3** foi criado com o banco de dados, use `qDebug() << dataDir.absolutePath();` para encontrar o caminho deste arquivo.

## documentação
https://doc.qt.io/qt-6/qsqldatabase.html
