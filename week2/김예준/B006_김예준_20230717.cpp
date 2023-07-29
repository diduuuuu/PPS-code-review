/*DFS와 BFS - https://www.acmicpc.net/problem/1260
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N; //정점의 개수
int M; //간선의 개수
int V; //탐색을 시작할 정점의 번호
vector <int> dgraph[1010];//간선에 대한 정보를 저장하기 위해 선언
int visit_check[1010];//DFS에서 방문여부를 체크
queue <int> bfs_q;//BFS에서 인접한 노드들을 저장
int visit_Bcheck[1010];//BFS에서 방문여부를 체크

void dfs(int start){
    if(start!= V && dgraph[start].empty()) return;
    
    visit_check[start]=1;//방문을 체크
    cout << start << " ";
    
    //현재 노드의 인접한 부분에서 방문하지 않았으면 그곳으로 간다.
    //인접한 노드가 없으면 종료
    for(int i=0 ;i <dgraph[start].size();i++){
        int next = dgraph[start][i];
        if(visit_check[next]==0)
            dfs(next);
    }
}

void bfs(int start){
    bfs_q.push(start);//시작노드를 넣고 시작
    visit_Bcheck[start]=1;//방문처리

    while(!bfs_q.empty()){
        int c_node = bfs_q.front();
        for(int i =0 ;i<dgraph[c_node].size();i++){
            int n_node = dgraph[c_node][i];
            if(visit_Bcheck[n_node]==0){
                bfs_q.push(n_node);
                visit_Bcheck[n_node]=1;//방문처리
            }
        }//인접한 노드들 중 방문하지 않은 노드는 queue에 넣어줌 
        cout << c_node << " ";     
        bfs_q.pop();
    }
}

int main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    cin >> N >> M >> V; 

    for(int i =0 ,a , b; i<M ; i++){
        cin >> a >> b;
        //DFS를 위해
        dgraph[a].push_back(b) ;//연결 간선 정보를 저장
        dgraph[b].push_back(a) ;//연결 간선 정보를 저장

        //BFS를 위해

    }
    for(int i =1 ; i<=N ; i++)
        sort(dgraph[i].begin(),dgraph[i].end());
    
    dfs(V);
    cout << '\n';
    bfs(V);

    return 0;
}