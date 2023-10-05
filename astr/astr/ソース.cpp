#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <iostream>
#include<vector>

#define DIRECTION_MAX 8
#define MAP_MAX 256

int direction[DIRECTION_MAX][2] = { {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1} };

using namespace std;

int map[256][256] = {
};

typedef struct NODE {
	int x, y;
	int scoreC;
	int scoreH;
	node* parent;
}node;

node* createNode(int x,int y,int c,int h, node* p) {
	node* nod = (NODE*)malloc(sizeof(NODE));
	nod->x = x;
	nod->y = y;
	nod->scoreC = c;
	nod->scoreH = h;
	nod->parent = p;
	return nod;
}

int getDistance(node* n1, node* n2) {
	if (abs(n1->x - n2->x) > abs(n1->y - n2->y))
		return abs(n1->x - n2->x);
	else
		return abs(n1->y - n2->y);
}

vector<node*> route;
vector<node*> serched;
vector<node*> openList;
vector<node*> closeList;
int a_str() {
	if (openList.size() == 0)
		return -1;
	int min = 9999;
	node* minNode;
	vector<node*> list;
	for (int i = 0; i < openList.size(); i++) {
		for(int j=0;j<DIRECTION_MAX;j++)
			if (map[openList[i]->x + direction[j][0]][openList[i]->y + direction[j][1]] != -1) {
				node* n 

			}
				
			
	}

	for (node* x : openList) {
		if (min > x->scoreC + x->scoreH) {
			min = x->scoreC + x->scoreH;
			minNode = x;
		}
	}
	
	

	return 1;
}

vector<int> serchPair(vector<node*> player ,vector<node*> castle ,int playerMax,int castleMax) {
	vector<int> pair;
	vector<int> castlepair;
	vector<int> distance;

	int max,anotherMax;

	if (playerMax > castleMax) {
		max = castleMax;
		anotherMax = playerMax;
	}
		
	else {
		max = playerMax;
		anotherMax = castleMax;
	}
		
	for (int l = 0; l < playerMax; l++) {
		for (int m = 0; m < castleMax; m++)
			distance.push_back(getDistance(player[l], player[m]));
	}

	for (int i = 0; i < max; i++) {
		pair.push_back(-1);
		castlepair.push_back(-1);
		if (i < playerMax) {
			pair[i] = i;
			castlepair[i];
		}
	}

	int start = 0;
	int min = 0;
	int index1=0;
	int index2=0;

	while (true) {
		for (int i = start; i < playerMax; i++) {
			if (i > start) {
				i = start;
			}
			int dis = distance[castleMax * i + pair[i]];
			for (int j = 0; j < castleMax; j++) {
				if (j == pair[i])
					continue;
				if (dis + distance[castleMax * castlepair[j] + j] - distance[castleMax * castlepair[j] + i] - distance[castleMax * castlepair[i] + j] < min) {
					min = dis + distance[castleMax * castlepair[j] + j] - distance[castleMax * castlepair[j] + i] - distance[castleMax * castlepair[i] + j];
					index1 = i;
					index2 = j;
				}
			}
		}
		if (min < 0) {
			int temp = pair[index1];
			pair[index1] = pair[index2];
			pair[index2] = temp;
		}
		else
			break;
		min = 0;
		for (int j = 0; j < castleMax; j++) {
			if(distance[castleMax * index1 + castlepair[index1]] - distance[castleMax * j + castlepair[j]] - distance[castleMax * j + castlepair[index1]] < min){
				min = distance[castleMax * index1 + castlepair[index1]] + distance[castleMax * castlepair[j] + j] - distance[castleMax * castlepair[j] + index1] - distance[castleMax * castlepair[index1] + j];
				index2 = j;
			}
		}
		for (int j = 0; j < castleMax; j++) {
			if (distance[castleMax * index2 + castlepair[index2]] - distance[castleMax * j + castlepair[j]] - distance[castleMax * j + castlepair[index2]] < min) {
				min = distance[castleMax * index2 + castlepair[index2]] + distance[castleMax * castlepair[j] + j] - distance[castleMax * castlepair[j] + index2] - distance[castleMax * castlepair[index2] + j];
				index1 = j;
			}
		}
	}
	return pair;
}


int main() {
	node* n;
	
	int map_x=0;
	int map_y=0;

	vector<node*> player;
	vector<node*> castle;
	return 0;

	
}

