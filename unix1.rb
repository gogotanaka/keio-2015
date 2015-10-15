INF = 100
cons = [
  [ 0, 2, 5, 1, INF, INF],
  [ 2, 0, 3, 2, INF, INF],
  [ 5, 3, 0, 3, 1, 5],
  [ 1, 2, 3, 0, 1, INF],
  [INF, INF, 1, 1, 0, 2],
  [INF, INF, 5, INF, 2, 0]
]

u = 0
D = []
Prev = []
D_dash = [u]


(0..5).each do |v|
  if cons[v][u] != INF
    D[v] = cons[v][u]
    Prev[v] = u
  else
    D[v] = INF
  end
end


min = INF
minNode = u
(0..5).each do |w|
  next if D_dash.include?(w) || D[w] != INF
  if D[w] < min
    min = D[w]
    minNode = w
  end
end

def getDMin(d_dash, d_ary)

end

D_dash << minNode
(0..5).each do |v|
  next if D_dash.include?(v) || cons[minNode][v] != INF
  if D[v] > D[minNode] + cons[minNode][v]
    D[v] = D[minNode] + cons[minNode, v]
    Prev[v] = minNode
  end
end





int2cha = ['A', 'B', 'C', 'D', 'E', 'F']



(0..5).each do |start|
  p "root node: #{int2cha[start]}"
  n_dash = []
  n_dash << start
  minCost = INF
  until (n_dash == (0..5).to_a)
    (0..5).each do |nex|
      unless n_dash.include?(nex)
        # if minCost > cons[start][nex]
        #   minCost = cons[start][nex]
          $minNode = nex
        # end
        n_dash << $minNode
      end
    end

    p n_dash
  end
end

# (0..5).each do |start|
#   p "root node: #{int2cha[start]}"
#   n_dash = []
#   n_dash << start
#   minCost = INF
#   minNode = start
#   prev
#   until (n_dash.sort == (0..5).to_a.sort)
#     (0..5).each do |nex|
#       unless n_dash.include?(nex)
#         if cons[start][nex] < minCost
#           minCost = cons[start][nex]
#           minNode = nex
#           n_dash << nex
#         end
#       end
#     end
#     p [int2cha[minNode], minCost]
#   end
# end

mincost = []
prev    = []

(0..5).each do |root|
  mincost[root] = 0
  prev[root]    = root
  n_dash        = []
  until (n_dash.sort == (0..5).to_a.sort)
    tmp_min = INF
    (0..5).each do |nxt|
      next if n_dash.include?(nxt)
      if cons[prev[root]][nxt] < tmp_min
        tmp_min = cons[prev[root]][nxt]
        prev[root] = nxt
        n_dash << nxt
        p [tmp_min, n_dash]
        break
      end
    end
  end
end
