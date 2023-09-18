N = int(input())
#A-Z까지 저장하기 위한 딕셔너리 생성
alphabet = {}
arr = []
for i in range(65, 91):
    alphabet[chr(i)] = 0

for i in range(N):
    word = input()
    arr.append(word)
    po = pow(10,len(word))
    for j in word:
        alphabet[j] = alphabet[j] + po
        po /= 10
#내림차순 정렬
alphabet = sorted(alphabet.items(), key = lambda x: x[1], reverse = True)
#정렬을 하면 튜플로 반환이 됨
sorted = []
#튜플을 새로운 리스트에 저장함
for i in range(10):
    sorted.append(list(alphabet[i]))
#리스트로 변환했으니 수정이 가능함(9->0까지 차례대로 대입해줌)
for i in range(10):
    sorted[i][1] = 10-1-i

#입력이 str이었으니 int변환을 위한 새로운 배열을 만듬
new_word = []
#각 단어별로
for i in range(N):
    temp = ''
    #단어별 문자마다
    for j in arr[i]:
        #10가지의 [알파벳,숫자]테이블과 비교
        for k in sorted:
            if j == k[0]:
                temp += str(k[1])
                break            
    new_word.append(temp)

total = 0
#여전히 new_word리스트가 str이었으니 정수로 변환해서 더함
for i in new_word:
    total += int(i)

print(total)