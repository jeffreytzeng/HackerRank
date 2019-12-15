class Solution:
	def __init__(self):
		self.q = list()
		self.s = list()

	def enqueueCharacter(self, c):
		self.q.append(c)

	def dequeueCharacter(self):
		return self.q.pop(0)

	def pushCharacter(self, c):
		self.s.append(c)

	def popCharacter(self):
		return self.s.pop()

str = input()
obj = Solution()

l = len(str)

for s in str:
	obj.pushCharacter(s)
	obj.enqueueCharacter(s)

isPalindrome = True

for i in range(l//2):
	if obj.popCharacter() != obj.dequeueCharacter():
		isPalindrome = False
		break

print("The word, " + str + ", is a palindrome." \
	  if isPalindrome \
	  else \
	  "The word, " + str + ", is not a palindrome.")