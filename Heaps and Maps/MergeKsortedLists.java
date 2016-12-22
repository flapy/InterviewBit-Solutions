/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
class ListNodeComparator implements Comparator<ListNode>
{
    public int compare(ListNode l1,ListNode l2)
    {
        return l1.val<l2.val?-1:1;
    }
}
public class Solution {
    ListNode head=null;
    ListNode reverse(ListNode node) {
        ListNode prev = null;
        ListNode current = node;
        ListNode next = null;
        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        node = prev;
        return node;
    }
	public ListNode mergeKLists(ArrayList<ListNode> a) {
	    head=null;
	    int n=a.size();
	    Queue<ListNode> tm=new PriorityQueue<ListNode>(new ListNodeComparator());
	    Iterator itr=a.iterator();
	    for(ListNode temp: a)
	    {
	        if(temp!=null)
	        tm.add(temp);
	        //System.out.println(temp.val);
	    }
	    while(!tm.isEmpty())
	    {
	        ListNode node=tm.poll();
	        //System.out.println("Val is "+node.val);
	        ListNode temp=new ListNode(node.val);
            if(head==null)
            {
                head=temp;
            }
            else
            {
                temp.next=head;
                head=temp;
            }
	        if(node.next!=null)
	        {
	            tm.add(node.next);
	        }
	    }
	   // while(head!=null)
	   // {
	   //     System.out.println("Val" +head.val);
	   //     head=head.next;
	   // }
	    return reverse(head);
	}
}
