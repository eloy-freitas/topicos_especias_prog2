

if __name__ == '__main__':
    
    candidatos = []
    while(True):
        try:
            valores = input().split(' ')
            candidatos.append(
                {
                    'nome': valores[0],
                    'sobre_nome': valores[1],
                    'altura': abs(180 - int(valores[2])),
                    'peso': int(valores[3]),
                }
            )
            
        except:
            break

    size = len(candidatos)
    
    for i in range(size):
        min = i
        for j in range(i+1, size):
            if candidatos[j]['altura'] < candidatos[min]['altura']:
                if candidatos[j]['peso'] <= 75:
                    min = j
                elif candidatos[j]['peso'] < candidatos[min]['peso']:
                    min = j
                else:
                    if (candidatos[j]['peso'] == candidatos[min]['peso']
                        and candidatos[j]['sobre_nome'] < candidatos[min]['sobre_nome']):
                        min = j
            if candidatos[i] != candidatos[min]:
                aux = candidatos[i]
                candidatos[i] = candidatos[min]
                candidatos[min] = aux

    for c in candidatos:
        print(f"{c['sobre_nome']}, {c['nome']}, {c['altura'], c['peso']}")
    print(' ')
