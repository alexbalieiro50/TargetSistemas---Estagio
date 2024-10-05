# TargetSistemas---Estagio
 Desafio Target - Estágio em Desenvolvimento - Ribeirão Preto

# Técinica 5

Para resolver esse enigma com apenas **duas idas** a uma das salas das lâmpadas, podemos explorar o fato de que as lâmpadas não apenas podem estar ligadas ou desligadas, mas também podem estar **quentes** (se recém desligadas após terem sido ligadas por um tempo). Aqui está a estratégia:

### Passos:

1. **Primeira fase:**
   - **Ligue o primeiro interruptor** (Interruptor A) e deixe-o ligado por um período razoável, o suficiente para que a lâmpada aqueça.
   - **Depois de um tempo**, desligue o interruptor A.
   - **Ligue o segundo interruptor** (Interruptor B) e vá até a sala das lâmpadas.

2. **Na sala das lâmpadas, observe:**
   - **Lâmpada acesa:** Esta lâmpada está sendo controlada pelo **Interruptor B** (porque ele foi o último a ser ligado).
   - **Lâmpada apagada, mas quente:** Esta lâmpada estava ligada pelo **Interruptor A**, pois ficou quente durante o tempo que esteve ligada antes de ser desligada.
   - **Lâmpada apagada e fria:** Esta lâmpada é controlada pelo **Interruptor C**, que nunca foi ligado.

### Resultado:
Com isso, você consegue identificar qual interruptor controla qual lâmpada:
- O interruptor que estava ligado e ainda está ligado controla a lâmpada acesa.
- O interruptor que foi ligado e depois desligado controla a lâmpada que está apagada, mas quente.
- O interruptor que nunca foi ligado controla a lâmpada que está apagada e fria.

Essa estratégia usa uma única ida à sala das lâmpadas, mas envolve três estados diferentes (acesa, apagada e quente) para descobrir qual interruptor controla qual lâmpada
