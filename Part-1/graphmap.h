//This is the header file for part 1 which implements the Map Creation
/**
 * @author: Rani Rafid, Mansoureh Edalati, Seyedhossein Noorbakhsh
 */
#pragma once

#include <vector>


class graphmap { // This class is implemented for part 1, it creates a map
//Attributes:
    std::vector<char> *nodes;  // a vector of node pointers
    bool *visited; // an array of boolean to check whether or not a node has been already visited
    char size; // number of nodes in the map

   /**
    * This method will use DFS approach to evaluate the linkage between nodes
    * @param start the node where DFS starts evaluation
    */
    void DFS(int start); //
public:
/// Creates a map including size number of nodes
/// \param size the number of nodes
    explicit graphmap(char size);

    ~graphmap(); //graphmap destructor

    ///  linking two nodes
    /// \param n1 node1
    /// \param n2 node2
    void link(char n1, char n2);

    /// This method will check whether or not the map is a connected map
    /// \return true if the map is a connected map
    bool isGraphConnected();

    /// A method that shows the map
    void print();
};
