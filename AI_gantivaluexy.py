def gradient_descent(x,y):
m_curr = b_curr = 0
iterations = 10**6
n = len(x)
learning_rate = 0.0009
cost = 0
for i in range(iterations):
y_predicted = m_curr * x + b_curr
cost0 = cost
cost = (1/n) * sum([val**2 for val in (y-y_predicted)])
close = math.isclose(cost0, cost, rel_tol=1e-15, abs_tol=1e-15)
if close == True:
plot_graph(y_predicted,x,y)
break
md = -(2/n)*sum(x*(y-y_predicted))
bd = -(2/n)*sum(y-y_predicted)
m_curr = m_curr - learning_rate * md
b_curr = b_curr - learning_rate * bd
# Uncomment to print every iteration

print ("m {}, b {}, cost {} iteration {}".format(m_curr,b_curr,cost, i))
if close == True:
plot_graph(y_predicted, x, y)
break
# # Uncomment to print graph for first 30 iteration
# if(i == iterations-1 or i < 30):
# plot_graph(y_predicted,x,y)
# print ("m {}, b {}, cost {} iteration {}".format(m_curr,b_curr,cost, i))
def plot_graph(y_predict,x,y):
print("\nGraph: ")
plt.xlabel('x')
plt.ylabel('y')
plt.scatter(x,y,color='red',marker='+')
plt.plot(x, y_predict, color='blue')
plt.grid()
plt.show()
x = np.array([26, 30, 32, 36, 40])
y = np.array([55, 56.5, 61, 68, 72.5])
gradient_descent(x,y)
