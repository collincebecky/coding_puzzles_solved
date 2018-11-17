import random
#import asyncio

value=[]

#async for i in range(1,100):
for i in range(1,100):
	inte=random.randint(0,100)
	if inte not in value:value.append(inte)
print(value.__len__())

value=sorted(value,reverse=False)
print(value)
def _find_midssing_numbers(val):
	missing=[]
	for i in range(1,100):
			if i not in value:missing.append(i)
				
	return missing

missing=_find_midssing_numbers(value)
print("")
print("")

print ("missing numbers include")	
print(missing)