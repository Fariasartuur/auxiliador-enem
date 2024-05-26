/**************************
Trabalho de Construcao de Algoritmo e Programacao
Linguagem C

Alunos:

Artur
Victoria
Christian


Professor: Marnes
***************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// FUNCAO DE PRESSIONAR ENTER PARA CONTINUAR E LIMPAR BUFFER
void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void esperarEnter() {
    printf("\n|| Pressione Enter para continuar...\n");

    limparBuffer();
}

// FUNCAO DE LIMPAR A TELA
void limparTela(){
    system("cls");
}

// FUNCAO DE SAIDA
void sair(int saida){

    switch (saida){
    case 0:
        limparTela();
        break;
    default:
        printf("Opcao inserida invalida, digite novamente.\n");
    }
}

int biologia(){

    char c;

    printf("======================================== Biologia (1) ========================================\n\n");
    printf(" Os resultados de um ensaio clinico randomizado na Indonesia apontaram uma reducao\n de 77%% dos casos\n de dengue nas areas que receberam o mosquito Aedes aegypti infectado com a bacteria Wolbachia.\n");
    printf(" Trata-se da mesma tecnica utilizada no Brasil pelo Metodo Wolbachia, iniciativa conduzida pela\n Fundacao Oswaldo Cruz - Fiocruz.\n");
    printf(" Essa bacteria induz a reducao da carga viral no mosquito e, consequentemente, o numero de casos\n de dengue na area, sendo repassada\n por meio do cruzamento entre os insetos.\n");
    printf(" Como essa bacteria eh um organismo intracelular e o virus tambem precisa entrar nas celulas\n para se reproduzir, ambos necessitarao de recursos comuns.\n");
    printf(" Essa tecnologia utilizada no combate a dengue consiste na:\n\n ");
    printf(" SAIR (S)\n\n");
    printf("==============================================================================================\n\n");

    printf(" A) predacao do virus pela bacteria.\n B) esterilizacao de mosquitos infectados.\n C) esterilizaco de mosquitos infectados.\n D) reduzir a contaminacao ambiental por residuos de limpeza.\n\n ");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c)){
    case 'a':
    case 'b':
    case 'c':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        biologia(c);
        break;
    case 'd':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;  
    case 's':
        return 1;
        break;    
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        biologia(c);
    }
    return 0;
}

int quimica(){

    char c;

    printf("======================================== Quimica (2) ========================================\n\n");
    printf(" As populares pilhas zinco-carbono (alcalinas e de Leclanche) sao compostas por um involucro externo de aco (liga de ferro-carbono),\n um anodo (zinco metalico), um catodo (grafita) e um eletrolito (MnO2 mais NH4Cl ou KOH),\n");
    printf(" contido em uma massa umida com carbono chamada pasta eletrolitica.\n Os processos de reciclagem, geralmente propostos para essas pilhas usadas, tem como ponto de partida a moagem (trituracao).\n");
    printf(" Na sequencia, uma das etapas eh a separadqo do ado, presente no involucro externo, dos demais componentes.\n"); 
    printf(" Que processo aplicado a pilha moida permite obter essa separacao? \n\n");
    printf(" SAIR (S)\n\n");
    printf("=============================================================================================\n\n ");

    printf("A) Catacao manual\n B) Acao de um eletroima\n C) Calcinacao em um forno\n D) Fracionamento por densidade\n\n ");
    scanf(" %c", &c);

    limparBuffer();
    
    switch (tolower(c)){
    case 'a':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        quimica(c);
    case 'b':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 'c':
    case 'd':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        quimica(c);
    case 's':
        return 1;
        break;    
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        quimica(c);
    }
    return 0;
}

int fisica(){

    char c;

    printf("======================================== Fisica (3) ========================================\n\n");
    printf(" A utilizacao de placas de aquecimento solar como alternativa ao uso de energia eletrica representa\n");
    printf(" um importante mecanismo de economia de recursos naturais.\n Um sistema de aquecimento solar com capacidade\n");
    printf(" de geracao de energia de 1,0 MJ/dia por metro quadrado de placa foi instalado para aquecer a agua de um chuveiro\n");
    printf(" eletrico de potencia de 2 kW, utilizado durante meia hora por dia.\n A Area minima da placa solar deve ser de: \n\n");
    printf(" SAIR (S)\n\n");
    printf("============================================================================================\n\n ");

    printf("A) 1.0 m2\n B) 1.8 m2\n C) 2.0 m2\n D) 3.6 m2\n\n ");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c))
    {
    case 'a':
    case 'b':
    case 'c':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        fisica(c);
    case 'd':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 's':
        return 1;
        break;   
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        fisica(c);
    }
    return 0;
}

int historia(){

    char c;

    printf("======================================== Historia (4) ========================================\n\n");
    printf(" Ao mesmo tempo, gracas as amplas possibilidades que tive de observar a classe media, vossa adversaria,\n");
    printf(" rapidamente conclui que vos tendes razao, inteira razao, em nao esperar dela qualquer ajuda.\n");
    printf(" Seus interesses sao diametralmente opostos aos vossos, mesmo que ela procure incessantemente afirmar o contrario\n");
    printf(" e vos queira persuadir que sente a maior simpatia por vossa sorte.\n Mas seus atos desmentem suas palavras.\n");
    printf(" ENGELS, F. A situacao da classe trabalhadora na Inglaterra. Sao Paulo: Boitempo, 2010.\n");
    printf(" No texto, o autor apresenta delineamentos eticos que correspondem ao(s)\n\n");
    printf(" SAIR (S)\n\n");
    printf("==============================================================================================\n\n ");
    
    printf("A) Conceito da luta de classes.\n B) alicerce da ideia de mais-valia.\n C) fundamentos do metodo cientifico.\n D) paradigmas do processo indagativo.\n\n ");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c))
    {
    case 'a':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 'b':
    case 'c':
    case 'd':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        historia(c);
    case 's':
        return 1;
        break;      
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        historia(c);
    }
    return 0;
}

int geografia()
{

    char c;
    printf("======================================== Geografia (5) ========================================\n\n");
    printf(" A dublagem eh o novo campo a ser explorado pela inteligencia artificial, e ha empresas dedicadas a\n");
    printf(" fazer com que as vozes originais de atores sejam transpostas para outro idiomas. A novidade reforca\n");
    printf(" a tendencia da automacao de postos de trabalho nas mais diversas areas. Tem potencial para facilitar\n");
    printf(" a vida de estudios e produtoras e, ao mesmo tempo, tornar mais escassas as oportunidades para dubladores e\n atores que trabalham com isso.\n");
    printf(" A consequencia da mudanca tecnologica apresentada no texto eh a:\n\n");
    printf(" SAIR (S)\n\n");
    printf("===============================================================================================\n\n ");

    printf("A) protecao da economia nacional.\n B) ampliacao do desemprego estrutural.\n C) diminuicao da formacao academica.\n D) estagnacao da manifestacao artistica.\n\n ");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c))
    {
    case 'a':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        geografia(c);
    case 'b':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 'c':
    case 'd':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        geografia(c);
    case 's':
        return 1;
        break;      
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        geografia(c);
    }
    return 0;
}

int filosocio(){

    char c;

    printf("======================================== Filosofia e Sociologia (6) ========================================\n\n");
    printf(" E como se os problemas fossem criados pela pandemia quando, em verdade, isso so demonstra o quanto eles sofrem\n uma tentativa de serem naturalizados.\n");
    printf(" Eles estavam la, empurrados para debaixo de varios tapetes. Diversos levantamentos realizados indicam que uma\n");
    printf(" parcela significativa dos estudantes nao tem acesso a internet em suas casas, nao tem computadores; tem celulares,\n");
    printf(" mas com pacotes baratos que nao permitem assistir a todas as aulas. E, caso tenham celulares e dados, pergunta-se:\n");
    printf(" E possivel elaborar um texto no celular? E possivel interagir na aula remota pelo celular?\n");
    printf(" ASSIS, A. E. S. Q. Educacao e pandemia. Educacao em Revista, n. 37, 2021 (adaptado).\n\n");
    printf(" A critica contida no texto e na figura evidencia o seguinte aspecto da sociedade contemporanea:\n\n");
    printf(" SAIR (S)\n\n");
    printf("============================================================================================================\n\n ");

    printf("A) Exclusao social.\n B) Expansao digital.\n C) Manifestacao cultural.\n D) Organizacao espacial.\n\n");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c))
    {
    case 'a':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 'b':
    case 'c':
    case 'd':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        filosocio(c);
    case 's':
        return 1;
        break;      
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        filosocio(c);
    }
    return 0;
}

int matematica(){

    char c;

    printf("======================================== Matematica (7) ========================================\n\n");
    printf(" Um professor aplica, durante os cinco dias uteis de uma semana, testes com quatro questoes de\n multipla escolha a cinco alunos.\n");
    printf(" Os resultados foram representados na matriz.\n\n [3 2 0 1 2]\n [3 2 4 1 2]\n [2 2 2 3 2]\n [3 2 4 1 0]\n [0 2 0 4 4]\n\n");
    printf(" Nessa matriz os elementos das linhas de 1 a 5 representam as quantidades de questoes acertadas\n pelos alunos Ana, Bruno, Carlos, Denis e Erica,\n");
    printf(" respectivamente, enquanto que as colunas de 1 a 5 indicam os dias da semana, de segunda-feira\n a sexta-feira, respectivamente, em que os testes foram aplicados.\n");
    printf(" O teste que apresentou maior quantidade de foi o aplicado na:\n\n");
    printf(" SAIR (S)\n\n");
    printf("================================================================================================\n\n ");

    printf("A) Segunda-Feira\n B) Terca-Feira\n C) Quarta-Feira.\n D) Quinta-Feira.\n E) Sexta-Feira\n\n");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c))
    {
    case 'a':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'e':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        matematica(c);
    case 's':
        return 1;
        break;      
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        matematica(c);
    }
    return 0;
}

int portugues(){

    char c;

    printf("======================================== Portugues (8) ========================================\n\n");
    printf(" Criado ha cerca de 20 anos na California, o mountainboard e um esporte de aventura que utiliza\n");
    printf(" uma especie de skate off-road para realizar manobras similares as das modalidades de snowboard,\n");
    printf(" surf e do proprio skate. A atividade chegou ao Brasil em 1997 e hoje possui centenas de praticantes,\n");
    printf(" um circuito nacional respeitavel e mais de uma dezena de pistas espalhadas pelo pais.\n");
    printf(" Segundo consta na historia oficial, o mountainboard foi criado por praticantes de snowboard que sentiam\n");
    printf(" falta de praticar o esporte nos periodos sem neve. \n Para isso, eles desenvolveram um equipamento bem simples:\n");
    printf(" uma prancha semelhante ao modelo utilizado na neve (menor e um pouco menos flexivel), com dois eixos bem resistentes,\n");
    printf(" alcas para encaixar os pes e quatro pneus com camaras de ar para regular a velocidade que pode ser alcancada\n");
    printf(" em diferentes condicoes. Com essa configuracao, o esporte se mostrou possivel em diversos tipos de terrenos:\n");
    printf(" grama, terra, pedras, asfalto e areia. Alem desses pisos, tambem e possivel procurar pelas proprias trilhas\n para treinar as manobras.\n");
    printf(" Disponivel em: www.webventure.com.br. Acesso em: 19 jun. 2019.\n\n");
    printf(" A historia da pratica do moutainboard representa uma das principais marcas das atividades na aventura, caracterizada pela:\n\n");
    printf(" SAIR (S)\n\n");
    printf("================================================================================================\n\n ");

    printf("A) competitividade entre seus praticantes.\n B) atividades em padroes tecnicos administrativos.\n C) modalidade com regras predeterminadas.\n D) criatividade para adaptacoes a novos espacos.\n\n");

    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c)){
    case 'a':
    case 'b':
    case 'c':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        portugues(c);
    case 'd':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 's':
        return 1;
        break;      
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        portugues(c);
    }
    return 0;
}

int literatura(){

    char c;

    printf("======================================== Literatura (9) ========================================\n\n");
    printf(" Antiode\n Poesia, nao sera esse\n o sentido em que\n ainda te escrevo:\n flor! (Te escrevo:\n flor! Nao uma \n flor, nem aquela\n flor-virtude - em\n disfarcados urinois).\n Flor e a palavra \n flor; verso inscrito\n no verso, como as\n manhas no tempo.\n Flor e o salto \n da ave para o voo: \n o salto fora do sono \n quando seu tecido\n se rompe; e uma explosao\n posta a funcionar,\n como uma maquina,\n uma jarra de flores.\n\n");
    printf(" MELO NETO, J. C. Psicologia da composicao. Rio de Janeiro: Nova Fronteira, 1997 (fragmento)\n");
    printf(" A poesia e marcada pela recriacao do objeto por meio da linguagem, sem necessariamente explica-lo.\n");
    printf(" Nesse fragmento de Joao Cabral de Melo Neto, poeta da geracao de 1945, o sujeito lirico propoe a recriacao poetica de:\n\n");
    printf(" SAIR (S)\n\n");
    printf("================================================================================================\n\n ");
    
    printf("A) uma palavra, a partir de imagens com as quais ela pode ser comparada, a fim de assumir novos significados.\n B) um urinol, em referencia as artes visuais ligadas as vanguardas do inicio do seculo XX.\n C) uma ave, que compoe, com seus movimentos, uma imagem historicamente ligada a palavra poetica.\n D) uma maquina, levando em consideracao a relevancia do discurso tecnico-cientifico pos-Revolucao Industrial.\n\n");
    scanf(" %c", &c);

    limparBuffer();

    switch (tolower(c)){
    case 'a':
        printf("\nResposta correta, Parabens!\n");
        esperarEnter();
        return 0;
        break;
    case 'b':
    case 'c':
    case 'd':
        printf("\nResposta incorreta, tente novamente:\n");
        esperarEnter();
        limparTela();
        literatura(c);
    case 's':
        return 1;
        break;      
    default:
        printf("\nOpcao invalida, tente novamente:\n");
        esperarEnter();
        limparTela();
        literatura(c);
    }
    return 0;
}

int main()
{

    // VARIAVEIS PARA CONTROLAR OS SWITCH-CASE
    char op;
    int op2, op3, op4, q;

    // VARIAVEIS DE CONDIcoES DE SAIDA
    int saida;
    bool continuar = true;
    bool sairQuiz = true;

    // INICIO - AUXILIADOR DE ESTUDOS
    printf("======================================== AUXILIADOR DE ESTUDOS ========================================\n\n");
    printf(" Ola! Seja bem vindo ao 'Auxiliador de estudos' um projeto que tem o objetivo de auxiliar e garantir\n que seu usuario tenha um resultado desejado na prova.\n\n");
    printf(" Esse projeto trabalha com escolhas e opcoes de estudo e pode ser seu guia predileto nesse ano.\n\n");
    printf(" ATENCAO: Voce sera fornecido opcoes e tera que seleciona-las usando as letras designadas, caso voce\n digite algum caractere invalido voce sera levado de volta ao menu principal. \n\n Boa Sorte! \n\n");
    printf("=======================================================================================================\n\n");
    esperarEnter();
    limparTela();

    do
    {
        // MENU PRINCIPAL
        printf("================================================================================\n");
        printf("   /////////////////////////////////// MENU /////////////////////////////////\n");
        printf("================================================================================\n\n");
        printf(" OK, como voce ja deve saber as provas sao separadas por areas de conhecimento. \n\n Escolha inserindo o caractere da opcao desejada:\n\n");
        printf(" Ciencias da Natureza (N ou n)\n Ciencias Humanas (H ou h)\n Linguagens (L ou l)\n Redacao (R ou r)\n\n SAIR (S ou s)\n\n");
        printf("================================================================================\n");
        printf("   /////////////////////////////////// QUIZ /////////////////////////////////\n");
        printf("================================================================================\n\n\n");
        printf("   --------------------------- INCIAR QUIZ (Q ou q) -------------------------\n\n\n");
        printf("================================================================================\n");
        printf("\n Digite: ");

        do
        {
            scanf(" %c", &op);
            if (op != 'N' && op != 'n' && op != 'H' && op != 'h' && op != 'L' && op != 'l' && op != 'R' && op != 'r' && op != 'S' && op != 's' && op != 'Q' && op != 'q')
                printf("Opcao inserida invalida, digite novamente: ");
        } while (op != 'N' && op != 'n' && op != 'H' && op != 'h' && op != 'L' && op != 'l' && op != 'R' && op != 'r' && op != 'S' && op != 's' && op != 'Q' && op != 'q');
        switch (op)
        {
        case 'N':
        case 'n':{
            // CIENCIAS DA NATUREZA
            limparTela();
            printf("======================================== Ciencias da Natureza ========================================\n");
            printf("\n Nela temos: \n\n");
            printf(" Fisica (1); \n Quimica (2); \n Biologia (3); \n Matematica (4); \n VOLTAR (0); \n\n");
            printf("====================================================================================================== \n\n");
            printf(" Deseja ver oque primeiro?: ");
            do
            {
                scanf("%d", &op2);
                if (op2 != 1 && op2 != 2 && op2 != 3 && op2 != 4 && op2 != 0)
                    printf("Opcao inserida invalida, digite novamente.\n");
            } while (op2 != 1 && op2 != 2 && op2 != 3 && op2 != 4 && op2 != 0);
            switch (op2)
            {
            case 1:{
                // FISICA
                limparTela();
                printf("======================================== Fisica ======================================== \n\n");
                printf(" Ok, minha dica eh que voce de extrema importancia para esses assuntos: \n\n");
                printf(" Eletricidade; \n Hidrostatica; \n Ondas; \n Optica; \n Usinas / instalacoes residenciais; \n Calorimetria; \n Acustica; \n Mecanica. ");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse,\n os temas estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n======================================================================================== \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 2:{
                // QUIMICA
                limparTela();
                printf("======================================== Quimica ======================================== \n\n");
                printf(" Vamos la entao! minha dica como sempre eh que voce de extrema importancia para esses assuntos: \n\n");
                printf(" Unidades de concentracao; \n Estequiometria; \n pH e pOH; \n Cadeias Carbonicas; \n Radioatividade; \n Solucoes; \n Oxidacoes; \n Eletroquimica");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os temas\n estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo! ;)\n");
                printf("\n========================================================================================= \n\n");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 3:{
                // BIOLOGIA
                limparTela();
                printf("======================================== Biologia ======================================== \n\n");
                printf(" Bom, seria essencial que voce de muita importancia para esses assuntos: \n\n");
                printf(" Ecologia e Sustentabilidade, bem como problemas ambientais; \n Evolucao; \n Imunizacao; \n Genetica e mutacoes; \n Citologia; \n Ciclos de carbono, nitrogenio e agua.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os\n temas estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n========================================================================================== \n\n");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 4:{
                // MATEMATICA
                limparTela();
                printf("======================================== Matematica ======================================== \n\n");
                printf(" Matematica eh muito importante em geral entao, seria muito importante estudar esse temas: \n\n");
                printf(" Porcentagem; \n Razoes e proporcoes; \n Leitura e interpretacao de graficos; \n Medidas para dados simples; \n Prismas; \n Regra de tres.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os\n temas estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo! (Voce vai precisar)\n");
                printf("\n============================================================================================ \n\n");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 0:
                // SAIDA
                limparTela();
                break;
            default:
                limparTela();
                printf("ERRO: OPCAO ERRADA.\n");
                break;
            }
            break;
        }
        case 'H':
        case 'h':{
            // CIENCIAS HUMANAS
            limparTela();
            printf("======================================== Ciencias Humanas ======================================== \n\n");
            printf(" Historia (5); \n Geografia (6); \n Filosofia e Sociologia (7); \n VOLTAR (0); \n\n");
            printf("================================================================================================== \n\n ");
            printf(" Deseja ver oque primeiro?: ");
            do
            {
                scanf("%d", &op3);
                if (op3 != 5 && op3 != 6 && op3 != 7 && op3 != 0)
                    printf("Opcao inserida invalida, digite novamente.\n");
            } while (op3 != 5 && op3 != 6 && op3 != 7 && op3 != 0);
            switch (op3)
            {
            case 5:{
                // HISTORIA BRASILEIRA
                limparTela();
                printf("======================================== Historia brasileira ======================================== \n\n");
                printf(" Bom, minha dica eh voce pesquisar esses assuntos: \n\n");
                printf(" Periodo Colonial; \n Republica; \n Periodo de escravidao; \n Era Vargas; \n Ditadura Militar; \n Era populista; Periodo de Idade Media e Moderna; \n Revolucao industrial; \n Primeira e Segunda Guerra Mundial; \n Nazismo/Holocausto e Fascismo; \n Liberalismo; \n Guerra Fria.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os temas\n estao organizados da Historia do Brasil ate a Historia Geral do Mundo entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n===================================================================================================== \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 6:{
                // GEOGRAFIA
                limparTela();
                printf("======================================== Geografia ======================================== \n\n ");
                printf(" Bom, minha dica eh que voce pesquise estes assuntos para estar bem preparado: \n\n");
                printf(" Agricultura Brasileira; \n Impactos no meio ambiente; \n Planos e blocos economicos; \n Geopolitica mundial; \n Migracoes; \n Desenvolvimento humano e social");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os\n temas estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n=========================================================================================== \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 7:{
                // FILOSOFIA E SOCIOLOGIA
                limparTela();
                printf("======================================== Filosofia e Sociologia ======================================== \n\n");
                printf(" Ok nesse tema seria bom voce estudar esses assuntos: \n\n");
                printf(" Globalizacao e suas consequencias; \n Iluminismo; \n Existencialismo; \n Marxismo; \n Contratualismo; \n Relacoes de Trabalho; \n Cultura de massa; \n Movimentos sociais; \n Fe e Razao: Sao Tomas e Santo Agostinho; \n Pensadores da Grecia Antiga.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os temas estao\n organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n======================================================================================================== \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 0:
                // SAIDA
                limparTela();
                break;
            default:
                limparTela();
                printf("ERRO: OPCAO ERRADA.\n");
                break;
            }
            break;
        }
        case 'L':
        case 'l':{
            // LINGUAGENS
            limparTela();
            printf("======================================== Linguagens ======================================== \n\n");
            printf(" Literatura (8); \n Lingua Portuguesa (9); \n Educacao Fisica (10); \n VOLTAR (0);\n");
            printf("\n============================================================================================ \n\n ");
            printf(" Deseja ver oque primeiro?: ");
            do
            {
                scanf("%d", &op4);
                if (op4 != 8 && op4 != 9 && op4 != 10 && op3 != 0)
                    printf("Opcao inserida invalida, digite novamente.\n");
            } while (op4 != 8 && op4 != 9 && op4 != 10 && op3 != 0);
            switch (op4)
            {
            case 8:{
                // LITERATURA
                limparTela();
                printf("======================================== Literatura ======================================== \n\n");
                printf(" Bom seria otimo voce estudar esses temas: \n\n");
                printf(" Movimentos literarios: barroco, quinhentismo, modernismo, naturalismo e realismo; \n Obras literarias: principalmente classicos brasileiros; \n Figuras de linguagem; \n Poesias Concretas; \n Literatura Contemporanea.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os\n temas estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n============================================================================================ \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 9:{
                // LINGUA PORTUGUESA
                limparTela();
                printf("======================================== Lingua Portuguesa ======================================== \n\n");
                printf(" Vamos la... esses temas podem ser muito importante para voce: \n\n");
                printf(" Funcoes de linguagem e gramatica; \n Semantica; \n Compreensao e interpretacao de texto; \n Norma culta e coloquial; \n Morfologia; \n Linguistica; \n Sintaxe; \n Generos textuais.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, os temas\n estao organizados do mais dificil ate o mais facil entao espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n=================================================================================================== \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 10:{
                // EDUCACAO FISICA E ARTES
                limparTela();
                printf("======================================== Educacao Fisica e Artes ======================================== \n\n");
                printf(" Ok, seria muito bom voce dar uma olhada nesses temas por mais que eles nao parecam tao importante assim: \n\n");
                printf(" Esportes; \n Musica; \n Grafite; \n Cubismo; \n Obras artisticas; \n Renascimento; \n Movimentos artisticos e culturais.");
                printf("\n\n Voce pode procurar esses assuntos no Youtube ou alguma outra plataforma de interesse, diferente dos outros\n temas, esses nao sao tao dificeis entao estude na ordem que voce preferir. \n  Bom, espero que isso ajude! \n E boa sorte amigo!\n");
                printf("\n========================================================================================================= \n\n ");
                printf(" VOLTAR (0): ");
                do
                {
                    scanf("%d", &saida);
                    if (saida != 0)
                        printf("Opcao inserida invalida, digite novamente.\n");
                } while (saida != 0);
                sair(saida);
                break;
            }    
            case 0:
                // SAIDA
                limparTela();
                break;
            default:
                limparTela();
                printf("ERRO: OPCAO ERRADA.\n");
                break;
            }
            break;
        }    
        case 'R':
        case 'r':{
            // REDACAO
            limparTela();
            int saida;
            printf("======================================== Redacao ======================================== \n\n");
            printf(" Minha dica  seria voce pesquisar os temas de redacoes anteriores, e sempre acompanhar\n noticias para acompanhar possiveis temas relevantes!\n");
            printf("\n O texto exigido no Enem eh dissertativo-argumentativo, o candidato deve ter conhecimento\n suficiente sobre o assunto, nao so para apresentar dados e fatos, mas tambem expressar\n seu ponto de vista e se posicionar de maneira coerente. \n\n Alem de estar por dentro das atualidades, eh extremamente importante estudar as\n competencias exigidas na redacao e a estrutura de um texto dissertativo-argumentativo.");
            printf("\n\n Nao fuja do tema! \n E principalmente, alem de tudo, treine muito!\n");
            printf("\n========================================================================================= \n\n ");
            printf(" VOLTAR (0): ");
            do
            {
                scanf("%d", &saida);
                if (saida != 0)
                    printf("Opcao inserida invalida, digite novamente.\n");
            } while (saida != 0);
            sair(saida);
            break;
        }    
        case 'S':
        case 's':
            // SAIDA
            limparTela();
            continuar = false;
            break;
        case 'Q':
        case 'q':
            limparTela();
            printf("======================================== Quiz ======================================== \n\n");
            printf("1 - Iniciar Quiz\n");
            printf("0 - Voltar\n\n");
            printf("====================================================================================== \n\n");
            printf("Digite: ");
            do{
                scanf("%d", &q);

                switch(q){
                case 1:{
                    limparTela();
                    if (biologia() == 1){
                        sairQuiz = false;
                        break; // D
                    }    
                    limparTela();
                    if (quimica() == 1){
                        sairQuiz = false;
                        break; // B
                    }
                    limparTela();
                    if (fisica() == 1){
                        sairQuiz = false;
                        break; // D
                    }
                    limparTela();
                    if (historia() == 1){
                        sairQuiz = false;
                        break; // A
                    }
                    limparTela();
                    if (geografia() == 1){
                        sairQuiz = false;
                        break; // B
                    }
                    limparTela();
                    if (filosocio() == 1){
                        sairQuiz = false;
                        break; // A
                    }
                    limparTela();
                    if (matematica() == 1){
                        sairQuiz = false;
                        break; // A
                    }
                    limparTela();
                    if (portugues() == 1){
                        sairQuiz = false;
                        break; // D
                    }
                    limparTela();
                    if (literatura() == 1){
                        sairQuiz = false;
                        break; // A
                    }
                    limparTela();
                    printf("======================================== Conclusao do Quiz ======================================== \n\n");
                    printf(" Parabens por concluir o quiz!\n");
                    printf("\n Lembre-se de revisar os assuntos em que teve mais dificuldade e continue sua jornada de estudos.\n");
                    printf(" O sucesso nos seus estudos depende da sua dedicacao e esforco. Boa sorte!\n\n");
                    printf("\n================================================================================================= \n\n");
                    esperarEnter();
                    limparTela();
                    sairQuiz = false;
                    break;
                }
                case 0:
                    sairQuiz = false;  
                    limparTela();
                    break;
                default:
                    printf("Opcao errada, Insira novamente: ");
                    limparBuffer();      
                }
            } while (sairQuiz);
            limparTela();
            break;  
        default:
            limparTela();
            printf("ERRO: OPCAO ERRADA.\n");
            break;
        }
    } while (continuar);
}