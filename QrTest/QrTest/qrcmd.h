�}_  �  ĪsF\.���c6��I�>���~��G?ܸ)���}���#�'� YƵڼ+��6iԐ��|K�*}�Z�UHgFh� �*kS�
O�/����j2�,���p+B3��[���a(ޝ/�<�v,k�ZcC��aE�B��f�x�R���C�H��td���q� ��E3R��0��� ��Cwτ��|�О�향�n��S����)M>��H�����?_��ÆQer��``-��H�d/�uz�5ă��|t�KPbQ��4G�%C�w0�G��@�V����4�.�`�+}���l��d���
i��XX�l��+�(����uD�\t��� �ˍ�qE>܁�3^��++]}�}��j���s|1�ܿ8G�LED�;�i��Ea2+<Y/�5Y�x���4"yXa8�t�M+�b����l����֒4ʇ�����_=Q��z��;��m�ݳHv�����ބ���m�����ۓ���("�?�+���Bj���l-�K= m��*�+��xx���/
��>ؤ�vrU�[��H��TP��Fq[\�.dΰ��"�!ڵ����bA��HLR�`1bW4!#���7��H}4pj4hm�Lu�nh��8൧�&��Og�\�#>��]o�a�u���������.A�\�������ŗ�Bˠ��j�ٗ�`:_��76�<s]�_����@p�Ǡ��8y��iZ����s�lc��H�.��G�^ʼDM��� �$��8@�Ms�u����O���ז˞Z�1�S�	@T��p0�u���\�+�=?$C� c�U	��K5(��oʈ��FJ"D�6����3�!�7D+
��kp��mP�J�n��i{L�|"ҍ���"���=�A{=Gϳ�2!��J��W@���y��1�s9)�ֆ���:y%EkRbU�vo7�� /ų�hh_��WK����[�`��(�9���$�\���%�M��Yw���*=�B��l��@���x�j��Lw�"���v�l�&5���A��ۋ�+!��3Z��T:�2�KC��DxL�tV!l��6�t���"�I8�Q�9�����j��{՚��x;731�l�+YC��Iw#� ]��&�C�jtY�g�9�\������g�6������{��֚�u����v���*Wz���Z�|�k��ȉ@����z����	q��!~������,�S��m���|�	�vMJ����'@��Q�b���/r�5�N����B<Ct�EX{��FYq�*|�M��҅qA>���FGDF������$�=��$�%}5��s#}�M��Ļ��ي�T���'�x�:��
A��4��k[�Ԣ�x�B{jP��?�m(h�S*�A�k�!&p�z��(LO?; |!������=X�뛀ݗ���U��N�*���"_�c�nS0⹌���(�<���/�'Nt��5��
䬥ˢ`ry�jO�q(�n�C �@�^�+�,Q'� ���斕c2����}�����&�L����׫Sl#��:����M�M�Y���� q��貕Q=����ؕ�1`�"� 2$�Gݿ��NT)��J}z���;�WDl6oH0S�9���y����.�'"�~FBM�#�MkpW�6������O+���)��c��#!�� ���t��o�}��	+[�Fe�=�Nzա�P����=|�E���%�s
����!.��>�jpXL�v+��Xג	5VJr:[	/'s,Q�	!3��G��3����-�{�HI(�~�\G�A�<�[9���I�G�����i�2|ŘG^eV�'�,k�\ѽK�8���]��qY��7>�7%�@�|+�E�6�,
��DD���ӎ�?P��V�������;����)��(�~ ��x�Y
�KJ�A�|�bh|��Q�MLM��T6��u�܃]��N��+G#/рR�v�q�9����w��[��,�s�Ę��k��0�`�*v���C�׼�з;�~��Y�c����T�d'v�9�4��� ����Q�4̗fine qrCmdAddData2 qrAddData2
#define qrCmdOutputSymbol qrOutputSymbol
#define qrCmdOutputSymbol2 qrOutputSymbol2

/* others */
#ifndef QRCMD_PROG_NAME
#define QRCMD_PROG_NAME "qr"
#endif
#define QRCMD_SRC_MAX QR_SRC_MAX

/* }}} */
#endif /* QRCMD_STRUCTURED_APPEND */

/* }}} */
/* {{{ function prototype declarations */

QRCMD_PTR_TYPE *
qrGetParameter(int argc, char **argv,
		int *fmt, int *sep, int *mag, QRCMD_EXTRA_PARAM_D char **output);

void
qrShowHelp(void);

/* }}} */

#endif /* _QRCMD_H_ */
