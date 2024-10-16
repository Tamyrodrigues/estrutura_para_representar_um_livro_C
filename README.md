### Descrição do Programa
- Este programa em C implementa uma biblioteca simples que armazena informações sobre livros utilizando uma estrutura de dados. Cada livro é representado por uma struct contendo campos como título, autor, ano de publicação, gênero e número de páginas.

 ### Funcionalidades
Estrutura de Dados: Define uma estrutura livro com os seguintes campos:

- codigo: um identificador único para o livro.
- titulo: o título do livro, que pode ter até 100 caracteres.
- autor: o autor do livro, limitado a 50 caracteres.
- ano: o ano de publicação do livro.
- genero: um enum que categoriza o livro como Ficção, Não-ficção ou Poesia.
- paginas: o número de páginas do livro.
- Visualização de Livros: A função Biblioteca exibe todos os livros armazenados, listando seus detalhes de forma organizada.

- Busca de Livro: A função buscar_livro permite que o usuário procure um livro específico a partir de seu índice no array. Se a posição for válida, os detalhes do livro são exibidos; caso contrário, uma mensagem de erro é mostrada.

- Interação com o Usuário: O programa pergunta ao usuário se ele deseja visualizar os livros e permite que ele busque informações sobre livros selecionados. O usuário pode continuar buscando até decidir encerrar.

### Código
O código é bem estruturado, utilizando boas práticas como validação de entrada e modularização através de funções. Ele se inicia com a definição da estrutura e das funções e termina com um loop principal que controla a interação do usuário.

Instruções de Uso
Compile o código usando um compilador C.
Execute o programa.
Siga as instruções na tela para visualizar a lista de livros e buscar informações específicas.
