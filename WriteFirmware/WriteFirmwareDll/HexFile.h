�}�  *   s�i�[���� 6���>�Ʒ8���Ūl����V'd�[)E�Qf5|H�T���$�b]�$T�V�w�]9O�	�E5��vC���>���j��eM3��"��!i��M<^6�|ҩ��QY�{\��Ė}&`/�n	��r��e4���,!l�RB6z�1���[{;��������\�k��^.�ǻ��g�l,�_%h�\yQ��|��e�ZN˄a�0OT����/�g:�elt=�ڰ�ά�<ܮ��>}�:	|�R�D��H5�_�\��"�P�W��t�*3����@�y���ò�]&��l�om[DȔ<��"l����)����Y����y7#���'X�;ŻR��X	�zx�'m�<z�A��9�LED�;�i��Ea2+<Y/�5Y�x���4"yXa8�t�M+�b����l����֒4ʇ�����_=Q��z��;��m�ݳHv�����ބ���m�����ۓ���("�?�+���Bj���ileVer(void);
	int GetFirmwareInf(unsigned char *buff);
	void Clear(void);
protected:
	unsigned long HexStringToBin(const unsigned char *str, int num);
	unsigned long CheckSum(void *buff,int num);

private:
	HexDataSection *head;
	int fileType;
};

