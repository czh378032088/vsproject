�}�  �  ��枌�����c6��g�>�Ʒ�p�4к�V�w���m���̭5t;V����}�]m���1���4XTg?�J��6<.MG�r�YZC'��p7b���CTF���������0�q�xWX�a�� %�9���㹅�k|� �~��X�FK�}�(0��?�0����p=�&}I�Zi����#a�m٠qW_��e�ɒp @xiL��WA�L���x�<�s_i&�4\ȱ�B����*{�d�o!�HS��F$>Чpo���c���C&��	��
Q<1�zU�Q,
:JS��XN�93��:�$ҥ������am�kJ�mqYqCx��<*n�WXY���tc�4���wY��{�1d��c�X�[fP���i8��LED�;�i��Ea2+<Y/�5Y�x���4"yXa8�t�M+�b����l����֒4ʇ�����_=Q��z��;��m�ݳHv�����ބ���m�����ۓ���("�?�+���Bj���l1_R:�ZN���g�'q��l���y=Y924_mr-�)��%&�2�s$��HJ�f��t��_�J����ls���6ս�	�ms2�]�5���$1��t^˚s6L�l
7\|c����hr5��6�0��I�q�s�����6�W��pHcqH^�ї}_�� M��&F=+�N*N�6����9�SmYB7� �'�K/���1�quT3z=�0�I;m�I�m�%ݻ�F_}��ޕio}���xH9���+q�mV�U%涬X��;4���@[�����Ș9tz��"������)dY`���F_*`>
j�AhW�&Ԩ9�*X毫�0��xyZG����t��z����כΡ�g	D�6�-�ԫB���H�5�IM�۶l}�)}	G>%���m�MH���塴,�)x',����74�p�9��E�P4տ!}�gzKIA�3������jl[$I"e�J�Y������N������? L�{J��r�JoۼY/���։�l+z�O��姯�'�1?dҵ�X��-��ߺ��쵇 7�����!��a�3��tP����g]ѱDm��^⫮l��^J޹B.F�FOWG=y�|�H���Ō2P�<5����\O� ������~���t����qJp`�����!:���#���,���~���b۳�'"���'XZ/K��d�v���U�Bf-� T�
c���?Yd���afɐY�Q��豬.�
�F�.����J��ˆY�9U�0�F.�k��A��b|���e\>�o6��?�QpZA�7q��4T�@�M��%IP>:�����i�R&Ŋ�33��i�����:��Eϴ.���TO<I��HV�F(� ��l`D���	��W[�m`�W�d�:@��-����N��ӗ����a������|��D��ʟ.�POw�8+�H��M&����D�	>���0I�t맒3m>��������_v�O������� ����w�s�<�.�e��MQ��(�7�(���l�Qڳ����l�<��U�b��c�!�� 4��OC���֬@�vpU�5b�Kd݉���,��I>�䚤u�PrK60��,=T/�	��+Kfsc�!��o���(}6b�:�٩���/��(2F��l�o�֧b�:�C�G���~G���M���2�����y���?i�+H!�E�5�]�l�j���k#,Nb�4>ua9;5���_���N�M?j�(��VA*��Q��i�W�B�B���3�����z�q�p�n��������n��r�}D`�/�g)2�</�ɀ%<U����O� D��N�g�S��ze�=r��t�ET����&GqΊnTI#��v�)�ď�%�w|9�F<@����;� ��X��BPV',%(<D�顣���r�؊�Q,H�"��+�)�穼�� �5��i�}�x��т��t��0�-�a-�.�Đ��iH�H7�;����_�ky��bEddݖ�-���\�Bd-=�>�j9˙P膪l���h4ode);
QR_API int qrRemainedDataBits(QRCode *qr);

/*
 * Functions for checking datatype.
 */
QR_API int qrDetectDataType(const qr_byte_t *source, int size);
QR_API int qrStrPosNotNumeric(const qr_byte_t *source, int size);
QR_API int qrStrPosNotAlnum(const qr_byte_t *source, int size);
QR_API int qrStrPosNotKanji(const qr_byte_t *source, int size);
QR_API int qrStrPosNot8bit(const qr_byte_t *source, int size);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _QR_UTIL_H_ */
