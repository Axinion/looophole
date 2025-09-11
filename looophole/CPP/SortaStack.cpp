// Solution 1 -> Descending order

#include <bits/stdc++.h> 

void solve(stack<int> &stack, int x){
	if(stack.empty() || (!stack.empty() && stack.top()<x)){
		stack.push(x);
		return;
	}

	int num = stack.top();
	stack.pop();

	solve(stack, x);

	stack.push(num);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();
	sortStack(stack);

	solve(stack, num);
}

// Solution 2 -> Ascending order

#include <bits/stdc++.h> 

void solve(stack<int> &stack, int x){
	if(stack.empty() || (!stack.empty() && stack.top()>x)){
		stack.push(x);
		return;
	}

	int num = stack.top();
	stack.pop();

	solve(stack, x);

	stack.push(num);
}

void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();
	sortStack(stack);

	solve(stack, num);
}
