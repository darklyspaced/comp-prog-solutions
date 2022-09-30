rules = []
for i in range(3): #adds all rules
    t = str(input())
    t = list(t.split(" ")) #not changing values so copy by reference is fine
    rules.append(t)

class Node(): #one node in a tree
    def __init__(self, data, rule, pos): 
        self.data = data
        self.rule = rule #rule used for conversion
        self.pos = pos #position of sub
        self.children = [] #children of node
        self.parent = None

    def addChild(self, child):
        child.parent = self
        self.children.append(child)

def countSub(t, s): #takes in t (target what we are searching for) and s (subject - what we are searching)
    pos = [] #where are finds are located (start location)
    for i in range((len(s)-len(t))+1): #iterates over combs based on ln of t and s
        sec = s[i:i+len(t)] #section being tested for match
        if sec == t:
            pos.append(i)
    return pos

def makeChildren(s): #s is the subject for the rules to be applied to (must be of type Node)
    for i in range(3): #loop over all sub rules
        swaps = countSub(rules[i][0], s.data) #pos of all swaps to do
        for j in range(len(swaps)): 
            new = rules[i][1].join([s.data[:swaps[j]], s.data[swaps[j]+len(rules[i][0]):]])
            new = ''.join(new)
            if new in alr: #if node alr exists
                continue #don't add
            else:
                s.addChild(Node(new, (i+1), swaps[j])) #adds a node to tree if same node not alr in there 
                alr.append(new) #add node to alr to remove repeats
            
    
             
SIF = str(input())
SIF = SIF.split(" ")
steps = SIF[0]
root = Node(SIF[1], None, None)
search = SIF[-1]
q=[] #queue with children to be operated on
g=[] #children to be added to queue
alr=[] #list of nodes already appeared. if alr appeared don't add again for optimisation
ans = [] #guess

def solve(): #TODO implement recursion
    for i in range(int(steps)+1):
        if i==0:
            makeChildren(root)
            q.extend(root.children) #add root's children to queue as sep elements
        else:
            for _ in range(len(q)):
                t = q.pop(0) #find next in queue
                if (i+1==int(steps)+1) and (t.data == search): #-1 as the child must have alr been created || steps = required and match
                    for i in range(int(steps)):
                        if i==0:
                            b = t
                            ans.append([str(b.rule), str(b.pos+1), str(b.data)]) #don't use computer numbering so +1
                        else:
                            b = (b).parent #goes one up each loop iteration, excluding root || going up is easier than down
                            ans.append([str(b.rule), str(b.pos+1), str(b.data)]) #don't use computer numbering so +1
                    for i in range(len(ans), 0, -1):
                        print(" ".join(ans[i-1]))
                    return 0
                makeChildren(t) #operate on next in queue
                q.extend(t.children) #add those children to back of queue
            
solve()


            


    