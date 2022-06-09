v=8
graph=[[]for i in range(v) ]

#adding all edges b/t two vertex
def add(src,desti):
    graph[src].append(desti)
    # graph[desti].append(src) #include this only for undirected

def dfs(src_vertex):
    visited=[] #poped vertex
    exploration_stack=[] # push non visited vertices of poped vertex
    exploration_stack.append(src_vertex)
    while exploration_stack:
        print(exploration_stack)
        pop_vertex=exploration_stack.pop()#pop top vertex
        print(pop_vertex)
        visited.append(pop_vertex)# popped vertex is now visited
        
        # add all adjacent vertices(connected edges) of popped vetex to stack if theyre not already visited and not already in stack
        for i in graph[pop_vertex]:
            if i not in visited and i not in exploration_stack:
                exploration_stack.append(i)
                
        
        

def printgrph(grph):
    for i,j in enumerate(grph):
        print("edges for vertex %d are: " %(i) ,j ,end="\n")

 
#adding edges to the graph

add(0, 1) 
add(0, 2)  
add(0, 3)   
add(1, 3)   
add(2, 4)
add(3, 5)      
add(3, 6)   
add(4, 7)   
add(4, 5)    
add(5, 2)

#passing source/root vertex for dfs
dfs(0)      




