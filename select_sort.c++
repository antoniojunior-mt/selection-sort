#include <iostream>                                                                 // Biblioteca padrão de entrada e saída
using namespace std;


void selection_sort(int arr[], int numero_de_elementos) {                           // Função do algoritmo seleção direta, realiza a ordenação do array com os devidos paramentros 
    int indice_atual, indice_de_busca, indice_menor_elemento;                       // Variáveis de controle para o algoritmo de ordenação


    for (indice_atual = 0; indice_atual < numero_de_elementos; indice_atual++) {    // Loop externo:> a partir do indice atual, percorre cada elemento do array, repetindo o processo até o ultimo indice do arreio
        indice_menor_elemento = indice_atual;                                       // Inicialmente, o menor elemento é o valor do indice atual, o processo se repete até o ultimo indice do arreio

        
        for (indice_de_busca = indice_atual + 1; indice_de_busca < numero_de_elementos; indice_de_busca++) {      // Loop interno :> Indice de busca percorre o subarray não ordenado para encontrar o menor elemento a partir do valor do indice atual encontrado no for anterior
            if (arr[indice_de_busca] < arr[indice_menor_elemento])                                                // Se o indice de busca encontrar um elemento menor que o valor do indice atual, atualiza o valor do menor elemento com esse valor
                indice_menor_elemento = indice_de_busca;
        }

        
        swap(arr[indice_menor_elemento], arr[indice_atual]);                        // Troca o valor do indice menor elemento encontrado com valor do indice do atual
    }                                                                               // O loop for vai se repetir a partir do proximo indice, ficando o indice anterior com o valor ordenado
}                                                                                   // Conforme o loop continua, os valors dos indices vão sendo ordenados, até chegar no ultimo indice, com todos os valores ordenados 


void print_array(int arr[], int numero_de_elementos) {                              // Função para imprimir o array
    for (int i = 0; i < numero_de_elementos; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}


int main() {                                                                        // Função principal para testar o código
    int arr[] = {64, 25, 12, 22, 11};                                               // Declaração e inicialização do array
    int numero_de_elementos = sizeof(arr) / sizeof(arr[0]);                         // Calcular o número de elementos no array

    cout << "Array original: \n";                                                   // Exibir o array original
    print_array(arr, numero_de_elementos);

    selection_sort(arr, numero_de_elementos);                                       // Chama a função de ordenação
    
    cout << "\nArray ordenado: \n";                                                 // Exibir o array ordenado
    print_array(arr, numero_de_elementos);

    return 0;                                                                       // O algoritmo é finalizado
}
