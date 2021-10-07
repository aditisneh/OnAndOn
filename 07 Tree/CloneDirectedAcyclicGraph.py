# Python program to clone a directed acyclic graph.

class Node():

	def __init__(self, key = None, adj = None):
		self.key = key
		self.adj = adj

# Printing Depth Wise
def printGraph(startNode, visited):


	if startNode.adj is not None:
		for i in startNode.adj:
			if visited[startNode.key] == False :
				print("edge %s-%s:%s-%s"%(hex(id(startNode)), hex(id(i)), startNode.key, i.key))
				if visited[i.key] == False:
					printGraph(i, visited)
					visited[i.key] = True
def cloneGraph(oldSource, newSource, visited):
	clone = None
	if visited[oldSource.key] is False and oldSource.adj is not None:
		for old in oldSource.adj:

			if clone is None or(clone is not None and clone.key != old.key):
				clone = Node(old.key, [])
			newSource.adj.append(clone)
			cloneGraph(old, clone, visited)
			visited[old.key] = True
	return newSource
n0, n1, n2 = Node(0, []), Node(1, []), Node(2, [])
n3, n4 = Node(3, []), Node(4)
n0.adj.append(n1)
n0.adj.append(n2)
n1.adj.append(n2)
n1.adj.append(n3)
n1.adj.append(n4)
n2.adj.append(n3)
n3.adj.append(n4)

visited = [False]* (5)
print("Graph Before Cloning:-")
printGraph(n0, visited)

visited = [False]* (5)
print("\nCloning begins........")
clonedGraphHead = cloneGraph(n0, Node(n0.key, []), visited)
print("Cloning Process Completes.")

visited = [False]*(5)
print("\nGraph After Cloning:-")
printGraph(clonedGraphHead, visited)
