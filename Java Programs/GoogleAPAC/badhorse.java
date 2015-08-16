import java.util.*;
import java.util.stream.*;

class Node{
    string name;
    Vector<Node*> adj;
    bool visited;
    int groupId;

    Node(String str) {
      name = str;
      visited = false;
      groupId = -1;
    }

    int getNeighborCount() {
        return adj.size();
    }
}
