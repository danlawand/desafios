bool solution(vector<int> sequence) {
    int b = 0;
    int atual = sequence[0];
    int anterior = atual;
    int sequencia = 1;
    
    // Invariante: A sequencia anterior a ATUAL é bem formada
    for (int i = 1; i < sequence.size() && b < 2; i++) {
        if (sequence[i] > atual) {
            anterior = atual;
            atual = sequence[i];
            sequencia++;
        } 
        else if (sequence[i] > anterior) {
            atual = sequence[i];
            
            // naõ preciso dar sequence++ estou trocando o atual pelo sequence[i+1]
            
            //itens a remover: o anterior ATUAL
            b++;
                    
        } else {
            if (i+1 < sequence.size()) {
                // se o seguinte (Y) ao atual não faz parte da sequencia
                // eu irei ver o item depois do Y (X), para ver se é só remover o Y
                // e o atual terá como seguinte na sequecia o X
                // Ou eu tenho que descartar toda a sequencia e iniciar uma em que Y -> X, sejam a sequencia
                if (sequence[i+1] > atual) {
                    anterior = atual;
                    atual = sequence[i+1];
                    sequencia++;
                    
                    // preciso indicar que agora estou no i+1 e não no i, assim, preciso dar:
                    i++;
                    
                    //itens a remover: Y
                    b++;
                } else {
                    // Se Y e X não fazem parte da sequencia do atual
                    // então vamos ter que verificar se Y e X são uma nova sequencia.
                    if (sequence[i+1] > sequence[i]) {
                        // Y e X são sequencia
                        // o atual será o X (sequence[i+1])
                        anterior = sequence[i];
                        atual = sequence[i+1];
                        
                        // preciso indicar que agora estou no i+1 e não no i, assim, preciso dar:
                        i++;
                        
                        // como existe uma nova sequencia, preciso desfazer da antiga
                        b += sequencia;
                        
                        // a nova sequencia tem dois elementos
                        sequencia = 2;
                    }
                    else {
                        // se Y e X não são a mesma sequencia, e Y e X não são da sequencia do atual
                        // logo teria que remover os dois para a sequencia existir
                        b+=2;
                    }
                }
            } else {
                b++;
            }
        }
    }
    return b<2;
}
