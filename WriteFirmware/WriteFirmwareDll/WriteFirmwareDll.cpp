�}D  y   ��2�Kl���6�_�q�� �{*B�!bN`���d�m�R:��p%�03�x�a�;T�/]Ϳ��D0gǞs�%1矔?^G �����f�V����,��,rMw�XVlW�ш(x�YF�������_4�M���@��� ����V��sE>�9Y����M�ApF&�=>��8
�bd:�򬯨�N���3�L5�ſ�Vk?PZh3���~�O�u�qU����opj��{P��3�o�ۣ���І�%��Ô�R�� ��!*)��-�x�HP
*33~c�@�y���ò�]&��l�om[DȔ<��"l����)����Y����y7#���'X�;ŻR��X	�zx�'m�<z�A��9�LED�;�i��Ea2+<Y/�5Y�x���4"yXa8�t�M+�b����l����֒4ʇ�����_=Q��z��;��m�ݳHv�����ބ���m�����ۓ���("�?�+���Bj���l�(O�Y�� 9��_�T�y�M���"L�w{��7��}��h��0n��g�m��9 �����i�r��mr؃��'�O���]���Y�]S?������i��8�)Wԯ;���o�ÿ�Ͱ��t iѓ�
+?���g���@����jW��#_��2�`)�O�XA�����>�)6l���μ���,�-�w=8/�u�Csʶ���&?쎿�~� "�ĭ�	�J8���i�k=��������5��aB^mӫ�"E���Ϳ�F�9�-vZ'�9f��-~�8$��}��0�����fyb��d�;�(UT{-�.*���ՠA��za����*zU26�DXt�2��� $�����bM�NaO3WKµHP/_j1-�+݃��
i$&���ڭhE!l1��A���d��#�j�j�V]VM�k�}��5�>�ߕ�_K���t~�Y���5��
k�'
x�ǐ��tL��P����~v8/ߩ��4r�:�K|���Tg�����B�l�$�6k|��b8�_x��JSݭ[ʱz�]���Gt0�"�\�k_�}��b��fB�o�Mze[�������νü��$|��tD{��(�/��D�R��î��[�9<�i���$M���"k�X���8�V�+�[���:N%��E�8�A�����E	U�>�������B��O3��小��b���
T�M�<wy}R�%~vA�����+�ߴ]�RRo�3B���]�4X�o}��a�[L�C�0}�T�u�����ˀ=� �ƫ�RS��z	&)�SUo��4�%^�*�bp�\��2MA��if�:�����^�1q ]��� \�i\R�3%���鐵�f���z���0eKv�^���G�>��Q&#��[�V�QJ��Ԛ3M%фi����-��A���{���9e�����%��J�ϱ{o5�m<MF���ς���d��S;�a��ʰ#lM�"���@Nw��-n&���P��e^#��`��l%?4�9lfq����0jmw��&��K��z�vk��(�%"��X)N%|�YcH��E��Q�Z�
��g�s�ɮ�2"��w]�!�g': ������'�~c���������r'�9�s�+w�k�[�Iɛ���:���Kz��KGsD��i2��:��^�̥�ܡ�[��.�*�2b�|��.e�w79�K��l*gg[&)c��h�@��o�Ĉ��J���W���-�R��F�-��R�\���^B\�\{>�a<����p��i�4�%1��u��3CТP&E�b�^$���G%��lM�AU�Y����F%ș��ew��;���R#�'R�ڤqwx���R'a��n�ɂ�G��э	�zx��p%G�hRO;ӳ���#��s4��?�OAj�\�L��A��b��&�$�B~P&޾*nfF�A�^[b���?����˘�`�w�{2��IЧL��x�3|�Uw-�����ݷ{H��^�X��C+H><U�Z��pil�(p>�8�����hJ�&��=;1��	?w+Y�_�"m">�NI꺉����uk�D/qƺk�>�����`��/V��Z��0�����[�N ������:�km������z6�
���3�^ 9�g)r"�G��)�������5�������Ȟ�m5����<^��C��o��7���]�6H{�!����{�t�=[�����m��CԊ0\F��uc:7Q���*��GG	��`#���ȕ�H���b����V$���Mݘ2ۚG�Q�JX��Oz�	�"�@hp�m�:���	��]����T�:I�M-����S�������l;�nf�i	��M%��3�P�`~xg���H �F�m��6�\����raJ������(�4�d�o���0�	���5����e�|��䡓i�b�IU�O�	��Ҕw��{�#����"$+4��I�2�)a}�g�!�:m`����.z�$B���v��P�������I���:�ar *outBuff, int *outLength, unsigned long timeMil)
{
	return writeFirmwareManage.Update(buff, size, outBuff, outLength, timeMil);
}

WRITEFIRMWAREDLL_API unsigned long WriteFirmwareGetDeviceSoftVer(void)
{
	return writeFirmwareManage.GetDeviceSoftVer();
}

WRITEFIRMWAREDLL_API int WriteFirmwareBeginWrite(void)
{
	//Debug_Printf("WriteFirmwareBeginWrite");
	return writeFirmwareManage.BeginWrite();
}

WRITEFIRMWAREDLL_API void WriteFirmwareInit(void)
{
	writeFirmwareManage.Init();
}
