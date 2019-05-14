

class Solution {
    
public:

    struct ListNode {

     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
    }; 

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*  currentNode = new ListNode(0);
        ListNode*  HeadNode    = currentNode;

        ListNode* currentNodel1 = l1;
        ListNode* currentNodel2 = l2;

        int carry = 0;
        int sum=0;
        sum += currentNodel1->val;
        sum += currentNodel2->val;

        carry = sum /10;
        sum %= 10;

        currentNode->val = sum;
        while(carry || currentNodel1->next != nullptr || currentNodel2->next != nullptr){

            sum =carry;
            currentNode->next = new ListNode(0);
            currentNode = currentNode->next;


            if (currentNodel1->next !=nullptr){
                currentNodel1= currentNodel1->next;
                sum+=currentNodel1->val;
            }

            if (currentNodel2->next !=nullptr){
                currentNodel2= currentNodel2->next;
                sum+=currentNodel2->val;
            }

            carry = sum /10;
            sum %= 10;

            currentNode->val +=sum;
            
        }
        return HeadNode;    
    }

    
};
