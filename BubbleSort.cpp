
void BubbleSort(SListNode*& head)
{
	//�սڵ��һ���ڵ�ֱ�ӷ���
	if (head == NULL || head->_next == NULL)
	{
		return;
	}

	SListNode* begin = head;
	SListNode* cur = head;

	while (begin->_next)
	{
		while (cur->_next)
		{
			if (cur->_data > cur->_next->_data)
			{
				swap(cur->_data, cur->_next->_data);
			}
			cur = cur->_next;
		}
		begin = begin->_next;
	}
}