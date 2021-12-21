# TP 01

Processos podem ser definidos como programas em execução. Em sistemas operacionais, cada
processo pode ser visto como um módulo separado e carregável, composto por recursos tais
como código de máquina executável, memória, descritores, atributos de segurança e contexto
de estado do processador, por exemplo.

Os sistemas operacionais são responsáveis por gerenciar a utilização dos recursos de uma
arquitetura computacional (processador, memória, dispositivos de entrada e saída, por
exemplo) pelos processos que se encontram ativos (em execução). Para tanto, eles utilizam o
conceito de lista linear. Os processos são colocados na lista a medida que fazem solicitação por
recursos computacionais. O sistema operacional gerencia a lista, adicionando processos
quando ocorrem novas solicitações e removendo-os quando o acesso é liberado.

Neste trabalho, você implementará um Tipo Abstrato de Dados (TAD) Lista Linear, para que um
sistema operacional faça gerência de processos ativos. Em seguida, você implementará um
programa de teste, que usa o TAD para criar uma lista de processos, realizando inserções e
remoções desta lista. Por fim, uma avaliação simples de desempenho deverá ser realizada de
forma que possamos observar a eficiência do TAD considerando diferentes tamanho de lista.