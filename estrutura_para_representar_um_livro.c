/******************************************************************************
TAMYRIS SILVA RODRIGUES DOS SANTOS GRR20242732

Crie uma estrutura para representar um livro, com os seguintes campos:

Título, pode conter 100 caracteres;
Autor, pode conter 50 caracteres;
Ano de publicação, inteiro;
Gênero (enum: Ficção, Não-ficção, Poesia);
Número de páginas, inteiro.
Observação: Criar um array de structs para armazenar uma biblioteca com 5 livros. 
Implemente também uma função para imprimir os dados de um livro específico passando
para a função a posição do array a ser buscado. Os dados dos livros podem ser 
inseridos diretamente pelo programador ao criar as estruturas.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 6

//gêneros/livro
enum Genero {
    FICCAO,
    NAO_FICCAO,
    POESIA
};

// Estrutura para representar um livro
struct livro {
    int codigo;           
    char titulo[100];
    char autor[50];
    int ano;
    enum Genero genero; 
    int paginas;
};

// Função para preencher e imprimir a biblioteca
void Biblioteca(struct livro livros[], int quantidade) {
    // Percorre os livros e imprime os dados de cada um
    
    printf("\n\nBiblioteca\n\n");
    
    for (int i = 0; i < quantidade; i++) {
        printf("Código: %d\n", livros[i].codigo); 
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano);
        
        // Verifica o gênero e atribui o valor correspondente
        if (livros[i].genero == FICCAO) {
            printf("Gênero: Ficção\n");
        } else if (livros[i].genero == NAO_FICCAO) {
            printf("Gênero: Não Ficção\n");
        } else {
            printf("Gênero: Poesia\n");
        }
        
        printf("Páginas: %d\n", livros[i].paginas);
        printf("\n"); // Adiciona uma linha em branco entre os livros
    }
}

// Função para imprimir os dados de um livro específico passando a posição do array a ser buscado.
void buscar_livro(struct livro livros[], int posicao) {
    // Verifica se a posição é válida >= 0 e < 6  : imprime o livro pela posição onde o usuário intende como o código do livro. 
    if (posicao >= 0 && posicao < MAX_LIVROS) {
        printf("Código: %d\n", livros[posicao].codigo); 
        printf("Título: %s\n", livros[posicao].titulo);
        printf("Autor: %s\n", livros[posicao].autor);
        printf("Ano: %d\n", livros[posicao].ano);
        
        // Verifica o gênero e atribui o valor correspondente
        if (livros[posicao].genero == FICCAO) {
            printf("Gênero: Ficção\n");
        } else if (livros[posicao].genero == NAO_FICCAO) {
            printf("Gênero: Não Ficção\n");
        } else {
            printf("Gênero: Poesia\n");
        }
        
        printf("Páginas: %d\n", livros[posicao].paginas);
        printf("\n");
    } else {
        printf("Posição inválida.\n");
    }
}

int main() {
    struct livro livros[MAX_LIVROS] = {
        {0, "O Grande Gatsby", "F. Scott Fitzgerald", 1925, FICCAO, 218},
        {1, "Moby Dick", "Herman Melville", 1851, FICCAO, 585},
        {2, "Sapiens: Uma Breve História da Humanidade", "Yuval Noah Harari", 2011, NAO_FICCAO, 412},
        {3, "O Poder do Hábito", "Charles Duhigg", 2012, NAO_FICCAO, 408},
        {4, "A Rosa do Povo", "Carlos Drummond de Andrade", 1945, POESIA, 176},
        {5, "Sonetos", "Vinícius de Moraes", 1989, POESIA, 144}
    };
    
    char continuar = ' ';
    int codigo_livro = 0;

    while (1) {
        printf("Deseja visualizar livros disponíveis na Biblioteca? (s ou n): "); 
        scanf(" %c", &continuar); 

        if (continuar == 's') {
            Biblioteca(livros, MAX_LIVROS); 
        }

        printf("Qual livro deseja escolher? Digite o código do livro disponível na biblioteca: "); 
        scanf("%d", &codigo_livro);
        buscar_livro(livros, codigo_livro);
        
        printf("Deseja continuar buscando livros? (s ou n): ");
        scanf(" %c", &continuar); 
        if (continuar == 's'){
            continue;
        } else {
            break;
        }
    }

    return 0;
}
