�}�  }  �3Tk�������F6�����>����r���d6�:�q��'/�#Y.S���N�$���<`�'d�L�P��p&�l[��tu%{O��i)�^��{6(� `*� �
ԓƯa�Z�Rp�)xB\�%�cku�Wq����w��ˢ8�o��&G����ޡ�ë$������˕Ⱦ�d  Q���[=��$��݇u���i�/��-s�h� }�(�I��@���O8$+�kp-��R��S[���y�I4]����,�'�}8����y1Û�s3T�؇�?B,�A�vQR�����Z���zY�|4<sl�R�κ���ꭜh���{�^��w/�ׂ4�k5�'X�;ŻR��X	�zx�'m�<z�A��9�LED�;�i��Ea2+<Y/�5Y�x���4"yXa8�t�M+�b����l����֒4ʇ�����_=Q��z��;��m�ݳHv�����ބ���m�����ۓ���("�?�+���Bj���l�+�A!X�׼�՗�nD�+;�E�\��0�;M�L�6����r�|w8��T�98O���ċ ���Sk�� �$꒚���QkOb�OpX����F���]�aa
OF�"Ľ�(1�=�2X(��>�sp���'fIe|k������ܗj$�����_Ok�u��`h���S��� ��+k��YJ�3AY�a甖���@�� ���-��Z0�40K̴Ԙ��/y�ev8��]���y�� 0�`=X��;oX���ݧ�bF~�������n/����ĸ�ĭi�����Ski�S�e�me�+f)����c��ٸ�Hs7�D5r�o�!V@l���{����+��������tX�џNk�Rȷ��S��"�ve0v
�iSt�����H���x+ت.oѹd����M�������;����� �M�Elx_�@�aM�D�G����cm�2H�8��m�%<���՟���i�D��ė¼�y��貪	.>�� r-�Ɯnt len)
{
	crc_t c = crc;
	int n;

	if (!crc_table_computed) {
		make_crc_table();
	}
	for (n = 0; n < len; n++) {
		c = crc_table[(c ^ buf[n]) & 0xff] ^ (c >> 8);
	}
	return c;
}

/* Return the CRC of the bytes buf[0..len-1]. */
static crc_t crc(const unsigned char *buf, int len)
{
	return update_crc(0xffffffffL, buf, len) ^ 0xffffffffL;
}
