#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"



extern const RuntimeMethod* UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850_RuntimeMethod_var;
extern const RuntimeMethod* UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 System.String SR::GetString(System.String,System.Object[])
extern void SR_GetString_m9548BD6DD52DFDB46372F211078AE57FA2401E39 (void);
// 0x00000002 System.String SR::GetString(System.Globalization.CultureInfo,System.String,System.Object[])
extern void SR_GetString_m9D671CBA422B18D15B8FF59B22DCCEB32E3D16E2 (void);
// 0x00000003 System.String SR::GetString(System.String)
extern void SR_GetString_m3FC710B15474A9B651DA02B303241B6D8B87E2A7 (void);
// 0x00000004 System.Void Mono.Util.MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern void MonoPInvokeCallbackAttribute__ctor_mE8E2FC84195F0A97049CAF083F56A3C4254323FC (void);
// 0x00000005 System.Void Mono.Unity.CertHelper::AddCertificatesToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509CertificateCollection,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificatesToNativeChain_m1D22A9A50CA05E1F931B8B309E047092DDE01CFF (void);
// 0x00000006 System.Void Mono.Unity.CertHelper::AddCertificateToNativeChain(Mono.Unity.UnityTls/unitytls_x509list*,System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_AddCertificateToNativeChain_m223E545813937EC29B6EF428DAE3F45551728166 (void);
// 0x00000007 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Unity.CertHelper::NativeChainToManagedCollection(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void CertHelper_NativeChainToManagedCollection_m671B74DB858DFEC5DE82CB70687F76EE5212630C (void);
// 0x00000008 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_mF8B2344487801910DCF927F9394FD2F13A61F8E8 (void);
// 0x00000009 System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
extern void Debug_CheckAndThrow_m4B13EAF7CA50D7535BF7F663D23886279A4CDBF5 (void);
// 0x0000000A System.IntPtr Mono.Unity.UnityTls::GetUnityTlsInterface()
extern void UnityTls_GetUnityTlsInterface_mB672D3C985554FC0EDFAB68EB4A77BCB74FEE719 (void);
// 0x0000000B System.Boolean Mono.Unity.UnityTls::get_IsSupported()
extern void UnityTls_get_IsSupported_mA17DA466EA04B7B44B4C3C37EF24494F9CDE238C (void);
// 0x0000000C Mono.Unity.UnityTls/unitytls_interface_struct Mono.Unity.UnityTls::get_NativeInterface()
extern void UnityTls_get_NativeInterface_mB7B44E93A89C271D6C65B44DE2EE9C4A5786E88E (void);
// 0x0000000D System.Void Mono.Unity.UnityTls/unitytls_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_callback__ctor_m9D04862B333145C9F179B31F08C390E0DEA4D1B0 (void);
// 0x0000000E Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_callback_Invoke_m4DDE358F87398FA2F51CDD551E6F1D4CB5B48159 (void);
// 0x0000000F System.IAsyncResult Mono.Unity.UnityTls/unitytls_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_callback_BeginInvoke_m34DFF04B0DD733860B3BAE73885A90C6A936E26F (void);
// 0x00000010 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_callback_EndInvoke_m17AC8D1886D2624D4E3E041E6931DC942C117FAB (void);
// 0x00000011 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_callback__ctor_mC7F821EB4597E74CFC9DE7A1EA50F86CFAC2F411 (void);
// 0x00000012 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_callback_Invoke_m9E758A0D65A39C61209306CDAB781357D956F36E (void);
// 0x00000013 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_callback_BeginInvoke_m9FA442F88C3483A74C56938DD30BF36505666EDD (void);
// 0x00000014 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_write_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_callback_EndInvoke_m4615F5985BBDB75F9DBDE0398A854CE2315DF925 (void);
// 0x00000015 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_callback__ctor_m52F2060B467B61401384C7E3693C6C8CDC3E46B7 (void);
// 0x00000016 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::Invoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_callback_Invoke_m9C045DAC27E3496B2FA429755CFF48E11A751D29 (void);
// 0x00000017 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::BeginInvoke(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_callback_BeginInvoke_mFDE9382397C181E07D075AA3FDE12B10ABC2C602 (void);
// 0x00000018 System.IntPtr Mono.Unity.UnityTls/unitytls_tlsctx_read_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_callback_EndInvoke_m2D814DC4681EFC9E4B0D495E8E5BBB0DCD3B62D1 (void);
// 0x00000019 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_trace_callback__ctor_m4C0C53E1C112C8A363A1C1AC15B5F6B7E4CD2443 (void);
// 0x0000001A System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr)
extern void unitytls_tlsctx_trace_callback_Invoke_mC657E7F4F1C6F530662F48BE16D2621029846344 (void);
// 0x0000001B System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_trace_callback_BeginInvoke_mE23C8513E935C278BCC120731072893E86729CAA (void);
// 0x0000001C System.Void Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_trace_callback_EndInvoke_m33865B83D223342F078061A59F8DF41311D20C94 (void);
// 0x0000001D System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_certificate_callback__ctor_m14C613364636EF10ECCD413A6F49E975A4F4A6A2 (void);
// 0x0000001E System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_certificate_callback_Invoke_mA90DE4AD701A89C12AECBE415FBAB506DCF66C12 (void);
// 0x0000001F System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_certificate_callback_BeginInvoke_m1D0AF1A60BC715B76CD3866BF3D555E5A6BFDD3E (void);
// 0x00000020 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_certificate_callback_EndInvoke_m0485EC4825ED1374DA2C0925A2F48D7F7567E21B (void);
// 0x00000021 System.Void Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_x509verify_callback__ctor_m50C4160D42681A80BEAD13F18294437BD96C3D0B (void);
// 0x00000022 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_x509verify_callback_Invoke_m63FDAF56E6D0F50E1E21DB4E3515967596071CE6 (void);
// 0x00000023 System.IAsyncResult Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::BeginInvoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_x509verify_callback_BeginInvoke_m84DAB124121532AF9AECBA6E706A0914C4EA22F4 (void);
// 0x00000024 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_x509verify_callback_EndInvoke_mD0321EDEC2FCF98ACB6497F796021DC65DA0DEEC (void);
// 0x00000025 System.Void Mono.Unity.UnityTls/unitytls_interface_struct::.ctor()
extern void unitytls_interface_struct__ctor_m91CA935D822B8FA1057010680A22A0AC9D70E381 (void);
// 0x00000026 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_create_t__ctor_mDB5F7A125825A4EADEFE51E41161ECF671659474 (void);
// 0x00000027 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
extern void unitytls_errorstate_create_t_Invoke_m2A913757D4713362254BE457E8792AD299677D42 (void);
// 0x00000028 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::BeginInvoke(System.AsyncCallback,System.Object)
extern void unitytls_errorstate_create_t_BeginInvoke_m21B464EA6F62C9C4916A69F411D0261B058E3E06 (void);
// 0x00000029 Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_create_t_EndInvoke_m8DC3659FB8AACD5CD163A95D55D72E4337AC8F37 (void);
// 0x0000002A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_errorstate_raise_error_t__ctor_m5F148689FFD962A73C93824087B04547B3AEE99B (void);
// 0x0000002B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
extern void unitytls_errorstate_raise_error_t_Invoke_m319B51663970217C195467C18E5928B5C2B68441 (void);
// 0x0000002C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code,System.AsyncCallback,System.Object)
extern void unitytls_errorstate_raise_error_t_BeginInvoke_m430EC23CE6C0A221B234161D965EF48FDE1FE3D8 (void);
// 0x0000002D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::EndInvoke(System.IAsyncResult)
extern void unitytls_errorstate_raise_error_t_EndInvoke_m713725CCC70FA48D9A9BFE1770EB0406853DF1E7 (void);
// 0x0000002E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_get_ref_t__ctor_m8B6688D0222A54335156F76C42D335A999C620ED (void);
// 0x0000002F Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_get_ref_t_Invoke_mA8C5F2D239F4B74885F37C9671012F1136BF0BE2 (void);
// 0x00000030 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_get_ref_t_BeginInvoke_m93BE7A42624E9987FC901D883E06683C90046D89 (void);
// 0x00000031 Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_get_ref_t_EndInvoke_m3158742DC98834DFC0519765F4E88A8C581B54F2 (void);
// 0x00000032 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_der_t__ctor_m702A41D29AFA524EFDF148673041B507C9538C4F (void);
// 0x00000033 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_der_t_Invoke_m8CF4A1CFD7B385B3091215030E7EC2CB5B6823ED (void);
// 0x00000034 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_der_t_BeginInvoke_mDD3872296FB3905F2F22D5859F4521DF44C9F19B (void);
// 0x00000035 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_der_t_EndInvoke_m6ED100AAACFF6462B42B0D9804BBA5E34487808A (void);
// 0x00000036 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_parse_pem_t__ctor_mE18922EC14AD6EDA780D819DB1469A99242F5C82 (void);
// 0x00000037 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::Invoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_key_parse_pem_t_Invoke_m38F6D75BFC2A80778454B43E5C76B4704EFF75F1 (void);
// 0x00000038 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::BeginInvoke(System.Byte*,System.IntPtr,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_key_parse_pem_t_BeginInvoke_mE7922F635446EF1A040AEE37DD9CEA8694A7F771 (void);
// 0x00000039 Mono.Unity.UnityTls/unitytls_key* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_parse_pem_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_parse_pem_t_EndInvoke_mA547C0BB7666F5F1953F14BC46AAE90537850C77 (void);
// 0x0000003A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_key_free_t__ctor_m6FB9CB25BA5BE0723AE199CE1F502A955DD356E3 (void);
// 0x0000003B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::Invoke(Mono.Unity.UnityTls/unitytls_key*)
extern void unitytls_key_free_t_Invoke_m80E23E79440054744237B5BAA88AAAAB0D4E2F4B (void);
// 0x0000003C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_key*,System.AsyncCallback,System.Object)
extern void unitytls_key_free_t_BeginInvoke_m9187223C9B5085D282144EC1175FA24D76AEBEE3 (void);
// 0x0000003D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_key_free_t_EndInvoke_m152FC113C7C311F262DC6B29F0E44ED27D4A4FBB (void);
// 0x0000003E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509_export_der_t__ctor_m2FA861176B1706988B234296EC1E5C2C2385C5A5 (void);
// 0x0000003F System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509_export_der_t_Invoke_m90FDB333B2076F06444B096E1E1D1A42C8EEF8A0 (void);
// 0x00000040 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509_export_der_t_BeginInvoke_m33E6F88E2448002C8B74EC67E172034CCD11E4D5 (void);
// 0x00000041 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509_export_der_t_EndInvoke_m18AAF57D64EC364FF2312620E964F4D615E594CD (void);
// 0x00000042 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_ref_t__ctor_m2E1FC1BBC79EB53428998A9DC5299F1DCDF6BBE8 (void);
// 0x00000043 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_ref_t_Invoke_mDCA9357333DA8B614E6C0F68922B3E5306A6534C (void);
// 0x00000044 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_ref_t_BeginInvoke_mCF97569A8246EA8445ADA1DE245B36DFAFB91446 (void);
// 0x00000045 Mono.Unity.UnityTls/unitytls_x509list_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_ref_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_ref_t_EndInvoke_m3E4E37BCCAE29768A633C69FA2CE74EC67945A98 (void);
// 0x00000046 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_get_x509_t__ctor_m8AF5F946C60F4AD11DCF53EB103FAB5556828421 (void);
// 0x00000047 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_get_x509_t_Invoke_m25FDF33A713C330AF882B49E05C79B77B5CF7A22 (void);
// 0x00000048 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_get_x509_t_BeginInvoke_m5F1D80B8C015B87B91AE11A27A01ED586E9BFFEF (void);
// 0x00000049 Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_get_x509_t_EndInvoke_m32FF88756C519F7C7F53E36198C352B2DE96FECF (void);
// 0x0000004A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_create_t__ctor_m35027CAFF58C468A07D199EA8E760FA83ECC1497 (void);
// 0x0000004B Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_create_t_Invoke_m45B75F9286D2C1DC14AECFA258F419C3A1989A79 (void);
// 0x0000004C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_create_t_BeginInvoke_mE85F1C402447D1CC543B2609C2BFD081F2954DC5 (void);
// 0x0000004D Mono.Unity.UnityTls/unitytls_x509list* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_create_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_create_t_EndInvoke_m2D64E81EA9962E8269292F49D86CBA9A45D8021F (void);
// 0x0000004E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_t__ctor_m5389B48F2C2EFE1E6FDAE6FEE1FF176F28F0D02C (void);
// 0x0000004F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_t_Invoke_m172237A64036BDE6C197DA0AE6A5A08010D4F361 (void);
// 0x00000050 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_t_BeginInvoke_mD3FEDD5F023253232CC8C48EF5CF2120ABD7147B (void);
// 0x00000051 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_t_EndInvoke_m2DE3744B3B3919E5ABED5661FC2FA2445B933EF3 (void);
// 0x00000052 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_append_der_t__ctor_m841BFC2DC8D5C6BA893192D3318C89CB1CBA5093 (void);
// 0x00000053 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509list_append_der_t_Invoke_m1606FADA7E902086F7AEE6D8F304867C7E0A434F (void);
// 0x00000054 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_append_der_t_BeginInvoke_m68B8C0940627CA1AA436E080A70BE1F622A820E7 (void);
// 0x00000055 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_der_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_append_der_t_EndInvoke_m96AFB602A6FB94D99E6AB65CE1D3C8B0B636CC6C (void);
// 0x00000056 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509list_free_t__ctor_mE08ED3D0B7810758779C72A6882354D36E51F126 (void);
// 0x00000057 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*)
extern void unitytls_x509list_free_t_Invoke_m733759A5A94705388D233DB23FDFECAE2ADACDF0 (void);
// 0x00000058 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list*,System.AsyncCallback,System.Object)
extern void unitytls_x509list_free_t_BeginInvoke_m1A31DC10E7A495BCB31B46F413FCB7431E408CD7 (void);
// 0x00000059 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509list_free_t_EndInvoke_m4BD735662CB6AC985D4AC833288191948ABD9182 (void);
// 0x0000005A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_default_ca_t__ctor_m9030DF501A2B0AE32F059AF6838EAF2A5897C8E0 (void);
// 0x0000005B Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_default_ca_t_Invoke_mE5D523AFD08CCE9A427389F17611D56C6D905B98 (void);
// 0x0000005C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_default_ca_t_BeginInvoke_m732CB4DFD706DEA2D1AFDD66A25C7A0A4F59641C (void);
// 0x0000005D Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_default_ca_t_EndInvoke_m65702493A38FA3F2598DD0D5F41A2849C4EE532D (void);
// 0x0000005E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_x509verify_explicit_ca_t__ctor_m4008497F04CFD72DB70FC203A50B023CD8F17864 (void);
// 0x0000005F Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_x509verify_explicit_ca_t_Invoke_mCC06B1AF3BCD90C24E3CA05A785528588C7CCEB5 (void);
// 0x00000060 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_x509verify_explicit_ca_t_BeginInvoke_m5A0BBE08CCACF01F690B9919087359A9FF7CF468 (void);
// 0x00000061 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::EndInvoke(System.IAsyncResult)
extern void unitytls_x509verify_explicit_ca_t_EndInvoke_m8EE4AE05BF8B13E7CD9A5818E3BA682F951584A4 (void);
// 0x00000062 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_server_t__ctor_m5CDD5F7909C922C45FDFFD8E94DDFFB1279C7368 (void);
// 0x00000063 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_server_t_Invoke_m6C7288544450304884E239BA3ACED930AAC040DF (void);
// 0x00000064 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_server_t_BeginInvoke_m7E60A8576D5C6BE7D9A61EBB5800D7FD402BF60D (void);
// 0x00000065 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_server_t_EndInvoke_mFC81040ECF1EF8D630C93F04FC8086A0F0288F6F (void);
// 0x00000066 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_create_client_t__ctor_m1E56411D4E929CCB07D6050690CA2284FCB8647D (void);
// 0x00000067 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_create_client_t_Invoke_m1DF5F05CEC35949278BEA867FA923CA399855D20 (void);
// 0x00000068 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_create_client_t_BeginInvoke_m7D9286CDD8953A99DC3DAF42531E08EC2921DF9D (void);
// 0x00000069 Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_create_client_t_EndInvoke_mD4C6A3C3AEB5444A52D5096080347CC4119CE729 (void);
// 0x0000006A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_server_require_client_authentication_t__ctor_m9AFB7DDE9F07B0C20E932B26CF5F7CC5A34EF2EE (void);
// 0x0000006B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_server_require_client_authentication_t_Invoke_mAD3C2DC8E2407F47BCCDB9CCD03FAEF5C3C61FB4 (void);
// 0x0000006C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_m34DF29BAAD16625619D9BACCAE0916CCB1EE3814 (void);
// 0x0000006D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_server_require_client_authentication_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_mD90E6FDE627752E1398D872EF076990B46A0D0C4 (void);
// 0x0000006E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_certificate_callback_t__ctor_mEE1D60229825001CFA228CAB36712F5911CA94F1 (void);
// 0x0000006F System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_certificate_callback_t_Invoke_mD72A24F7BEB100ECBFE6A02447D07EB392F8416B (void);
// 0x00000070 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_mC558DC3F79919F6336501ED0EE6E258D40ABF0E6 (void);
// 0x00000071 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_certificate_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_certificate_callback_t_EndInvoke_m4A733262D24FD2ADD4A0807F5B70ACC4833E71DF (void);
// 0x00000072 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_trace_callback_t__ctor_m698EE0E5FA09113DDBBE2BFD5EB4FE1A4E0F97A1 (void);
// 0x00000073 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_trace_callback_t_Invoke_m3563168D645C5A9128E07DBDFC7B5512764B2E11 (void);
// 0x00000074 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_trace_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m32846D6C60BEC0829F3478DB7AAB125D13B7F547 (void);
// 0x00000075 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_trace_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_trace_callback_t_EndInvoke_mEAF3A5C422616242581287326BDAD6C5515F5DC1 (void);
// 0x00000076 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_x509verify_callback_t__ctor_m1900B77A4679CBF3A7F107114F9444A193F9B3B2 (void);
// 0x00000077 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_x509verify_callback_t_Invoke_mB4B699E9A75AD84590634AA66243AE8BE8DE9F09 (void);
// 0x00000078 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mF1D785074322CB5DD7BB67E54C6C2140C5BCE73C (void);
// 0x00000079 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_mA320598F201D2E1ECAA3595355C93B3BDD13B031 (void);
// 0x0000007A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_set_supported_ciphersuites_t__ctor_mF8B2A46DCE03527B87EE1EB40F18EEB186591A58 (void);
// 0x0000007B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_m9091B6D204D7611E2741CC2B3166616F8C19E594 (void);
// 0x0000007C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_ciphersuite*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_mAD583F841F317705AA1F100D5188AEBC4B997C1D (void);
// 0x0000007D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_supported_ciphersuites_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mFFC257704501E21B54877E6A937BEDAB526184E8 (void);
// 0x0000007E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_ciphersuite_t__ctor_mD59D1727FCCD2F1485FC87677C593BAA0D19FD69 (void);
// 0x0000007F Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_ciphersuite_t_Invoke_m28D027E6306B1F2188E64245FBA01268CC329442 (void);
// 0x00000080 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_m8BA17B437B22A3109CD7AA513F11B99A6010B215 (void);
// 0x00000081 Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m37132AD00EA6C15F18185B76F883D690BC9330EF (void);
// 0x00000082 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_get_protocol_t__ctor_m57AA61C6CC144AC851EF8A1BCDE1FE8A6A7CE4E3 (void);
// 0x00000083 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_get_protocol_t_Invoke_m533A624ECEB2AC0E43052CE6A234D04E4E9C70AB (void);
// 0x00000084 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_get_protocol_t_BeginInvoke_m633A813CF097D32A46D0AF9B4BA62675D446E476 (void);
// 0x00000085 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_protocol_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_get_protocol_t_EndInvoke_m31A4CD4E5918466D87B8EFED896BF0DF487FF061 (void);
// 0x00000086 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_process_handshake_t__ctor_m3C5790369EFE12F841C4EDA676DABCC833BF23DE (void);
// 0x00000087 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_process_handshake_t_Invoke_mE17E62D2159809BC847BEB1D6B40C23C017ED3E8 (void);
// 0x00000088 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_process_handshake_t_BeginInvoke_mDE4541085A795D1286E90FE82D1802A4A2C861BF (void);
// 0x00000089 Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_process_handshake_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_process_handshake_t_EndInvoke_mDE68FC780902D4DDC02B55D01C3F5B1F2D5165CD (void);
// 0x0000008A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_read_t__ctor_m3A54D3DC95D93F41585AAC5E0CBB09E7E21C6A88 (void);
// 0x0000008B System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_read_t_Invoke_mAFFB3FA39F79B2BE4FFA182239DE94ED5570D803 (void);
// 0x0000008C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_read_t_BeginInvoke_mC8AA0588732E45F9402F7EC9319099ECFC5AFF8C (void);
// 0x0000008D System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_read_t_EndInvoke_m94A70CCFA5F55842BBB3DEC7B89D19BCBA37937A (void);
// 0x0000008E System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_write_t__ctor_m99DA58D77CC21DEAA77D8332FB1F4226BCBC3317 (void);
// 0x0000008F System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_write_t_Invoke_mF9413F9C6DD887B3B0DA87CE25824CED940EEFC1 (void);
// 0x00000090 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_write_t_BeginInvoke_mC17344DDFE83AF7AA95CE8EC00A0FD27ADBF1A9F (void);
// 0x00000091 System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_write_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_write_t_EndInvoke_m6D59052A9AACE1E87DEBB2B6800B47FDAE09A524 (void);
// 0x00000092 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_notify_close_t__ctor_mD372DA8B81430D8E41B7372722D5D327CF438951 (void);
// 0x00000093 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_tlsctx_notify_close_t_Invoke_mC3B57340B3CA22EA7EB0EBFA5C941C487DE6B015 (void);
// 0x00000094 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_notify_close_t_BeginInvoke_mDB587D9039A414DC2127613B9E477379FF119E14 (void);
// 0x00000095 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_notify_close_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_notify_close_t_EndInvoke_m5D323428785A814E43CA41E4244ECAF0F96EE668 (void);
// 0x00000096 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_tlsctx_free_t__ctor_m0445C80DC50302FB1F416ED7AA8B1E2DD66529EA (void);
// 0x00000097 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*)
extern void unitytls_tlsctx_free_t_Invoke_m34DFBB044037052F67FEA5A579A5AC004E01AEC8 (void);
// 0x00000098 System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx*,System.AsyncCallback,System.Object)
extern void unitytls_tlsctx_free_t_BeginInvoke_m7887C3F9C1F87DCD3807A2797D7525F108CBA926 (void);
// 0x00000099 System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_free_t::EndInvoke(System.IAsyncResult)
extern void unitytls_tlsctx_free_t_EndInvoke_mED032427E108FD9D858A2B752544CC76CCCF647D (void);
// 0x0000009A System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::.ctor(System.Object,System.IntPtr)
extern void unitytls_random_generate_bytes_t__ctor_m651B0D872AA98DCBDF99B8CBB48616F9877D28C5 (void);
// 0x0000009B System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::Invoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void unitytls_random_generate_bytes_t_Invoke_mDF4C16458D2779B58E4C66ACB9A197DD3C61085F (void);
// 0x0000009C System.IAsyncResult Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::BeginInvoke(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*,System.AsyncCallback,System.Object)
extern void unitytls_random_generate_bytes_t_BeginInvoke_m15487ED3C5CACFB6E0D760F7307847F531F1C3A4 (void);
// 0x0000009D System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_random_generate_bytes_t::EndInvoke(System.IAsyncResult)
extern void unitytls_random_generate_bytes_t_EndInvoke_m3C6F54483F3AF797648AC5E311AB1976FFAFF61B (void);
// 0x0000009E System.Void Mono.Unity.UnityTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsContext__ctor_m82A8A07485BBA40B72407958085454EBFFEB826C (void);
// 0x0000009F System.Void Mono.Unity.UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_x509list*&,Mono.Unity.UnityTls/unitytls_key*&)
extern void UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mCDF88F12EFAFFA3CB29218EB5CECA54736FA577B (void);
// 0x000000A0 System.Boolean Mono.Unity.UnityTlsContext::get_IsAuthenticated()
extern void UnityTlsContext_get_IsAuthenticated_m2D21CAED85E7FC027A44D4B563559A0CAE4E82E1 (void);
// 0x000000A1 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Read_m57A71EE175BE7D20FBBBF23208F4370198E82FCE (void);
// 0x000000A2 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Write(System.Byte[],System.Int32,System.Int32)
extern void UnityTlsContext_Write_m2A845C13751DFCADF4065D4108C92065662EF6D5 (void);
// 0x000000A3 System.Void Mono.Unity.UnityTlsContext::Shutdown()
extern void UnityTlsContext_Shutdown_m8F28FC6DA210C07662E2237E4AE0F37CDEFAAC16 (void);
// 0x000000A4 System.Void Mono.Unity.UnityTlsContext::Dispose(System.Boolean)
extern void UnityTlsContext_Dispose_mDAFA39A1C87ACB042BA171A8FE723D07204216FD (void);
// 0x000000A5 System.Void Mono.Unity.UnityTlsContext::StartHandshake()
extern void UnityTlsContext_StartHandshake_m3E616FB8331ADCE5754EE66CF047C8C218D233FE (void);
// 0x000000A6 System.Boolean Mono.Unity.UnityTlsContext::ProcessHandshake()
extern void UnityTlsContext_ProcessHandshake_mDA4456F24FC2E02FBBE6252120506A0852BD6CCC (void);
// 0x000000A7 System.Void Mono.Unity.UnityTlsContext::FinishHandshake()
extern void UnityTlsContext_FinishHandshake_mBC43C5018B3D65BB8807CCAEDDFEBC4D4719B2FB (void);
// 0x000000A8 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F (void);
// 0x000000A9 System.IntPtr Mono.Unity.UnityTlsContext::WriteCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_WriteCallback_mFA8E9E3FE64CD88CEEAC5F83393A939D683BE025 (void);
// 0x000000AA System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Void*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB (void);
// 0x000000AB System.IntPtr Mono.Unity.UnityTlsContext::ReadCallback(System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_ReadCallback_m4ED16457432EC59B4B9697ABE4421E093B2B0929 (void);
// 0x000000AC Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850 (void);
// 0x000000AD Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTlsContext::VerifyCallback(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_VerifyCallback_mD1AB1BC9CA979D58ED90B5B1A39848FAB95C83D3 (void);
// 0x000000AE System.Void Mono.Unity.UnityTlsContext::CertificateCallback(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347 (void);
// 0x000000AF System.Void Mono.Unity.UnityTlsContext::CertificateCallback(Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
extern void UnityTlsContext_CertificateCallback_mC2342B4F75EB243AED15E7D6AA7389394966AA8E (void);
// 0x000000B0 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMinProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMinProtocol_mAE3AC38A5F0C6CBEFDC7265E49536E0F6EEAEEC1 (void);
// 0x000000B1 Mono.Unity.UnityTls/unitytls_protocol Mono.Unity.UnityTlsConversions::GetMaxProtocol(System.Security.Authentication.SslProtocols)
extern void UnityTlsConversions_GetMaxProtocol_m8991E0B43664085F8E1BD9095CA4114A3A46DCFA (void);
// 0x000000B2 Mono.Security.Interface.TlsProtocols Mono.Unity.UnityTlsConversions::ConvertProtocolVersion(Mono.Unity.UnityTls/unitytls_protocol)
extern void UnityTlsConversions_ConvertProtocolVersion_m1618CAAE6886BF8070040EE8FC3ACC9036A6567E (void);
// 0x000000B3 Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
extern void UnityTlsConversions_VerifyResultToAlertDescription_m1C318DCEFF9F42E73FF8DAB347BA7B9E4E7EFF7E (void);
// 0x000000B4 Mono.Security.Interface.MonoSslPolicyErrors Mono.Unity.UnityTlsConversions::VerifyResultToPolicyErrror(Mono.Unity.UnityTls/unitytls_x509verify_result)
extern void UnityTlsConversions_VerifyResultToPolicyErrror_m0F695E9B6732F71E1719D642E28A569B39A56BB7 (void);
// 0x000000B5 System.String Mono.Unity.UnityTlsProvider::get_Name()
extern void UnityTlsProvider_get_Name_mD97B0783E337EF392796C2B54B2893132AE3CE6E (void);
// 0x000000B6 System.Guid Mono.Unity.UnityTlsProvider::get_ID()
extern void UnityTlsProvider_get_ID_m69F15693799E92CF740F1632C811ABBDD9501CE3 (void);
// 0x000000B7 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsSslStream()
extern void UnityTlsProvider_get_SupportsSslStream_m75C37BCDD5970564FF33FC734CE1E53066C310F5 (void);
// 0x000000B8 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsMonoExtensions()
extern void UnityTlsProvider_get_SupportsMonoExtensions_m937D906F958817CF7AF4BF3C0F6CB7FCFB271C34 (void);
// 0x000000B9 System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsConnectionInfo()
extern void UnityTlsProvider_get_SupportsConnectionInfo_m2F1C9B6C649675ACE3F96A80EBAC9FF44655D004 (void);
// 0x000000BA System.Boolean Mono.Unity.UnityTlsProvider::get_SupportsCleanShutdown()
extern void UnityTlsProvider_get_SupportsCleanShutdown_m0C0EDA9937BDF53475680A2892B937316D450B5C (void);
// 0x000000BB System.Security.Authentication.SslProtocols Mono.Unity.UnityTlsProvider::get_SupportedProtocols()
extern void UnityTlsProvider_get_SupportedProtocols_mB92C5F264ADEADACCE52A31D1DA9937777C5BC04 (void);
// 0x000000BC Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStream_m7395FB4BBD905D89772F5157FDD254E5CF1F83DC (void);
// 0x000000BD Mono.Security.Interface.IMonoSslStream Mono.Unity.UnityTlsProvider::CreateSslStreamInternal(System.Net.Security.SslStream,System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsSettings)
extern void UnityTlsProvider_CreateSslStreamInternal_mA8AD037F184BD564ACD9945D6EA3961971030F7E (void);
// 0x000000BE System.Boolean Mono.Unity.UnityTlsProvider::ValidateCertificate(Mono.Security.Interface.ICertificateValidator2,System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean,System.Security.Cryptography.X509Certificates.X509Chain&,Mono.Security.Interface.MonoSslPolicyErrors&,System.Int32&)
extern void UnityTlsProvider_ValidateCertificate_mB131CB7451246C50BC4F3612C768E09C1DF59AAF (void);
// 0x000000BF System.Void Mono.Unity.UnityTlsProvider::.ctor()
extern void UnityTlsProvider__ctor_m84BDC7485DA3C2B3A2153CA4B0AC695FD65AF493 (void);
// 0x000000C0 System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void UnityTlsStream__ctor_mCFCFF6B6CCEB2BEBB904E26AB3BF22E888C75C3F (void);
// 0x000000C1 Mono.Net.Security.MobileTlsContext Mono.Unity.UnityTlsStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void UnityTlsStream_CreateContext_m0626DFB8390DAFD3CDDF43BF033F6BBE6260E1C9 (void);
// 0x000000C2 System.IntPtr Mono.Net.CFObject::dlopen(System.String,System.Int32)
extern void CFObject_dlopen_mFCCB233C9C9A50D506CD4F1ABED02B8B62735C78 (void);
// 0x000000C3 System.IntPtr Mono.Net.CFObject::dlsym(System.IntPtr,System.String)
extern void CFObject_dlsym_mBF6766537A83ABF750C32B33B09C8E38F4BD1CD3 (void);
// 0x000000C4 System.Void Mono.Net.CFObject::dlclose(System.IntPtr)
extern void CFObject_dlclose_m012BF88490C06A6C7491395B5B42A794F0833F7B (void);
// 0x000000C5 System.IntPtr Mono.Net.CFObject::GetIndirect(System.IntPtr,System.String)
extern void CFObject_GetIndirect_m0CEC26DEAFEFA09E4227456BD3209CE31EEA8B9D (void);
// 0x000000C6 System.IntPtr Mono.Net.CFObject::GetCFObjectHandle(System.IntPtr,System.String)
extern void CFObject_GetCFObjectHandle_m3120B22D9181E66B627FBD3945C936227AC2CEE0 (void);
// 0x000000C7 System.Void Mono.Net.CFObject::.ctor(System.IntPtr,System.Boolean)
extern void CFObject__ctor_mF64B1A8118687E2945D8B211BE8815B1DB640456 (void);
// 0x000000C8 System.Void Mono.Net.CFObject::Finalize()
extern void CFObject_Finalize_m006C6599C427E094BEA3C22EAD8EEAFF67725E29 (void);
// 0x000000C9 System.IntPtr Mono.Net.CFObject::get_Handle()
extern void CFObject_get_Handle_mCC370B38D8244C40F8DE155013E1F1DA5C0BAAF8 (void);
// 0x000000CA System.Void Mono.Net.CFObject::set_Handle(System.IntPtr)
extern void CFObject_set_Handle_m63B93A801DCA3AED580D08D96C73B29B0C5239EA (void);
// 0x000000CB System.IntPtr Mono.Net.CFObject::CFRetain(System.IntPtr)
extern void CFObject_CFRetain_m6F8AC05D65A3F2362D6FB30E167F014858515DB0 (void);
// 0x000000CC System.Void Mono.Net.CFObject::Retain()
extern void CFObject_Retain_mFCCF79A9B34E092526A615CC6A4C9CD0E617DE8F (void);
// 0x000000CD System.Void Mono.Net.CFObject::CFRelease(System.IntPtr)
extern void CFObject_CFRelease_m99995BA572C171D1FCA3016F3C2264AC9DC964EC (void);
// 0x000000CE System.Void Mono.Net.CFObject::Release()
extern void CFObject_Release_m1AFEB7B3D714FE12E1CC26E473230E2AF9A7AD32 (void);
// 0x000000CF System.Void Mono.Net.CFObject::Dispose(System.Boolean)
extern void CFObject_Dispose_m8CF85BE6C028F1567A3066A0E47FB69CB3D13250 (void);
// 0x000000D0 System.Void Mono.Net.CFObject::Dispose()
extern void CFObject_Dispose_m7CF111071216A34F1255FFD86FA36A640516044F (void);
// 0x000000D1 System.Void Mono.Net.CFArray::.ctor(System.IntPtr,System.Boolean)
extern void CFArray__ctor_mD6A392F2B610ABA574B99EEB18F0B824CEA4B74B (void);
// 0x000000D2 System.Void Mono.Net.CFArray::.cctor()
extern void CFArray__cctor_m6C3B2E90EA8971C6A6217B1EAE6982C0C6D15F42 (void);
// 0x000000D3 System.IntPtr Mono.Net.CFArray::CFArrayGetCount(System.IntPtr)
extern void CFArray_CFArrayGetCount_m7B9C0DAAD2E608AA91E6AF69D14E79CA984A4F73 (void);
// 0x000000D4 System.Int32 Mono.Net.CFArray::get_Count()
extern void CFArray_get_Count_mDAB0951207B368F8509220DF20A6F9659E1745BD (void);
// 0x000000D5 System.IntPtr Mono.Net.CFArray::CFArrayGetValueAtIndex(System.IntPtr,System.IntPtr)
extern void CFArray_CFArrayGetValueAtIndex_m6D81FF806B39AD0113B644D8074D1EA5C71F0042 (void);
// 0x000000D6 System.IntPtr Mono.Net.CFArray::get_Item(System.Int32)
extern void CFArray_get_Item_mF96F5B64841A7AC6FB726DEC1698AF72536492F1 (void);
// 0x000000D7 System.Boolean Mono.Net.CFNumber::CFNumberGetValue(System.IntPtr,System.IntPtr,System.Int32&)
extern void CFNumber_CFNumberGetValue_mBB4E2B5F8A0AFABFCAB24DCD9F2C0270C9F3B5AB (void);
// 0x000000D8 System.Int32 Mono.Net.CFNumber::AsInt32(System.IntPtr)
extern void CFNumber_AsInt32_mEC1828CEFC9E0F945C22D09B09D5146B75D68770 (void);
// 0x000000D9 System.Void Mono.Net.CFRange::.ctor(System.Int32,System.Int32)
extern void CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2 (void);
// 0x000000DA System.Void Mono.Net.CFString::.ctor(System.IntPtr,System.Boolean)
extern void CFString__ctor_m713E89F54692440CCDB684689F956C8861241143 (void);
// 0x000000DB System.IntPtr Mono.Net.CFString::CFStringCreateWithCharacters(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFString_CFStringCreateWithCharacters_mE917A7721458FEC4897D4D40F952FED5C74BBBFA (void);
// 0x000000DC Mono.Net.CFString Mono.Net.CFString::Create(System.String)
extern void CFString_Create_m7F968536151F0DFC1CB848F1382F934D733A7E94 (void);
// 0x000000DD System.IntPtr Mono.Net.CFString::CFStringGetLength(System.IntPtr)
extern void CFString_CFStringGetLength_m016D6289246E6BC81567F351F0715EA566AB609D (void);
// 0x000000DE System.IntPtr Mono.Net.CFString::CFStringGetCharactersPtr(System.IntPtr)
extern void CFString_CFStringGetCharactersPtr_m099CE7331162D55C0D9C7E07BDD2A91352354F3F (void);
// 0x000000DF System.IntPtr Mono.Net.CFString::CFStringGetCharacters(System.IntPtr,Mono.Net.CFRange,System.IntPtr)
extern void CFString_CFStringGetCharacters_mC67D64C45707BF30B211BBBC70F5F9982D17566F (void);
// 0x000000E0 System.String Mono.Net.CFString::AsString(System.IntPtr)
extern void CFString_AsString_mC0ED721CE2D3EC9C1B4DC76C66EBCB2F4894C15B (void);
// 0x000000E1 System.String Mono.Net.CFString::ToString()
extern void CFString_ToString_mFFA4CF7FD17AC3DE2A7512239105593C06D073F0 (void);
// 0x000000E2 System.Void Mono.Net.CFDictionary::.cctor()
extern void CFDictionary__cctor_m1C9A42B30155219EAFD302304F4BCE71C0806256 (void);
// 0x000000E3 System.Void Mono.Net.CFDictionary::.ctor(System.IntPtr,System.Boolean)
extern void CFDictionary__ctor_m47C3403AF6A136376DAA1033F3DEDCD01EBB8C6B (void);
// 0x000000E4 System.IntPtr Mono.Net.CFDictionary::CFDictionaryGetValue(System.IntPtr,System.IntPtr)
extern void CFDictionary_CFDictionaryGetValue_m0EC4E585C878951EA7553FFC127257F0BE168E31 (void);
// 0x000000E5 System.IntPtr Mono.Net.CFDictionary::GetValue(System.IntPtr)
extern void CFDictionary_GetValue_m541C66EDA38170813EFC86504CAD18E4984F837D (void);
// 0x000000E6 System.IntPtr Mono.Net.CFDictionary::get_Item(System.IntPtr)
extern void CFDictionary_get_Item_m4DBF14449B67051E61B351BDA1C1D75F261CB3ED (void);
// 0x000000E7 System.Void Mono.Net.CFUrl::.ctor(System.IntPtr,System.Boolean)
extern void CFUrl__ctor_m94B28224C2267F1601BC29F618EBD556514DFC9F (void);
// 0x000000E8 System.IntPtr Mono.Net.CFUrl::CFURLCreateWithString(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFUrl_CFURLCreateWithString_m1366236BDF79E91FA08FA736E4CF514805CFAF59 (void);
// 0x000000E9 Mono.Net.CFUrl Mono.Net.CFUrl::Create(System.String)
extern void CFUrl_Create_mEC0A91ABC5696C78631CDB3C2CBE06E4A9B1AB6A (void);
// 0x000000EA System.Void Mono.Net.CFRunLoop::CFRunLoopAddSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopAddSource_mE428579D40413B6FB740F7B42C64B63881F61568 (void);
// 0x000000EB System.Void Mono.Net.CFRunLoop::CFRunLoopRemoveSource(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFRunLoop_CFRunLoopRemoveSource_m45D070FA5D5935F7040FBCA805361F05B848996D (void);
// 0x000000EC System.Int32 Mono.Net.CFRunLoop::CFRunLoopRunInMode(System.IntPtr,System.Double,System.Boolean)
extern void CFRunLoop_CFRunLoopRunInMode_m58A4EAE225C578C02E2A03B5B188CA3DD078BFAA (void);
// 0x000000ED System.IntPtr Mono.Net.CFRunLoop::CFRunLoopGetCurrent()
extern void CFRunLoop_CFRunLoopGetCurrent_m8F7E74F0B1BA966E2142CB3D4BD70752E8299419 (void);
// 0x000000EE System.Void Mono.Net.CFRunLoop::CFRunLoopStop(System.IntPtr)
extern void CFRunLoop_CFRunLoopStop_m51B11460D5AA6A7E947F479B4897F9B4DFD1609F (void);
// 0x000000EF System.Void Mono.Net.CFRunLoop::.ctor(System.IntPtr,System.Boolean)
extern void CFRunLoop__ctor_m1D2EFD768DA1ECAE1E4FCD72448BFE2CF324AC07 (void);
// 0x000000F0 Mono.Net.CFRunLoop Mono.Net.CFRunLoop::get_CurrentRunLoop()
extern void CFRunLoop_get_CurrentRunLoop_mBCBEFF47AD9EA6FA878AE0A7F476EA58CA65B9C0 (void);
// 0x000000F1 System.Void Mono.Net.CFRunLoop::AddSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_AddSource_m1F4505F77A5740DF6A02FE08A89CFE0F875F33E5 (void);
// 0x000000F2 System.Void Mono.Net.CFRunLoop::RemoveSource(System.IntPtr,Mono.Net.CFString)
extern void CFRunLoop_RemoveSource_mE7D7027C829D200D3AF51D026FA6F236BA436E3A (void);
// 0x000000F3 System.Int32 Mono.Net.CFRunLoop::RunInMode(Mono.Net.CFString,System.Double,System.Boolean)
extern void CFRunLoop_RunInMode_mB31A23ED32135A505EBA8D8EC7A54CB54094DAC0 (void);
// 0x000000F4 System.Void Mono.Net.CFRunLoop::Stop()
extern void CFRunLoop_Stop_m150B479F9DF68F537303DAEF52A5E21BF42C6C9C (void);
// 0x000000F5 System.Void Mono.Net.CFProxy::.cctor()
extern void CFProxy__cctor_m5E64CF6485D2887BAD97F92173EE34A7867EB7D4 (void);
// 0x000000F6 System.Void Mono.Net.CFProxy::.ctor(Mono.Net.CFDictionary)
extern void CFProxy__ctor_m41DDC9A050F27587A9F2A492DB2614EB5CB6B098 (void);
// 0x000000F7 Mono.Net.CFProxyType Mono.Net.CFProxy::CFProxyTypeToEnum(System.IntPtr)
extern void CFProxy_CFProxyTypeToEnum_mC685B37B2264E025F168250BCA92DC848E531702 (void);
// 0x000000F8 System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationJavaScript()
extern void CFProxy_get_AutoConfigurationJavaScript_m6B62E15C6AA2B407D9B788515B519DCCF88FEC8B (void);
// 0x000000F9 System.IntPtr Mono.Net.CFProxy::get_AutoConfigurationUrl()
extern void CFProxy_get_AutoConfigurationUrl_m840D41FCB3D048DD2EAD2B3A1DC054B96E2D4E5E (void);
// 0x000000FA System.String Mono.Net.CFProxy::get_HostName()
extern void CFProxy_get_HostName_m24443A667C88CBB73EB7CEE0AB35CA42BBECF3B2 (void);
// 0x000000FB System.String Mono.Net.CFProxy::get_Password()
extern void CFProxy_get_Password_m20C13DAEDF18604D6F2D57B56C56758667525D6D (void);
// 0x000000FC System.Int32 Mono.Net.CFProxy::get_Port()
extern void CFProxy_get_Port_mC6490D437685D8E722A81740FBC64746021190BF (void);
// 0x000000FD Mono.Net.CFProxyType Mono.Net.CFProxy::get_ProxyType()
extern void CFProxy_get_ProxyType_m0C440E8A2DC2FEA8725E635FCCCC61CBB7EEFC88 (void);
// 0x000000FE System.String Mono.Net.CFProxy::get_Username()
extern void CFProxy_get_Username_m8155EBB692BD8FFBC2B84325225284E6FDE5D2AD (void);
// 0x000000FF System.Void Mono.Net.CFProxySettings::.cctor()
extern void CFProxySettings__cctor_m6A3C05CFF7C6FF13E81F591D83148FA36BDF3166 (void);
// 0x00000100 System.Void Mono.Net.CFProxySettings::.ctor(Mono.Net.CFDictionary)
extern void CFProxySettings__ctor_m3EF761C43D266A201620A8F9291B4E447CDDD3C4 (void);
// 0x00000101 Mono.Net.CFDictionary Mono.Net.CFProxySettings::get_Dictionary()
extern void CFProxySettings_get_Dictionary_m4E22C04DF8DE1D4088C462849BB2654AD2A212FF (void);
// 0x00000102 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptSequential(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_m89792AB0F424FCA209DD5AE706D47A565A2839DE (void);
// 0x00000103 System.IntPtr Mono.Net.CFNetwork::CFNetworkExecuteProxyAutoConfigurationURL(System.IntPtr,System.IntPtr,Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback,Mono.Net.CFStreamClientContext&)
extern void CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_mEE70C4C4C4E0E25404E6417B126D960E79356F88 (void);
// 0x00000104 System.Void Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScriptThread()
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_mF6DD5D031A74CE07FFCFA60137A3097683F313B2 (void);
// 0x00000105 System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForAutoConfigurationScript(System.IntPtr,System.IntPtr,System.IntPtr&)
extern void CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_mCE67B2B2E7E40885FBE488B67B1F748F28EA4089 (void);
// 0x00000106 Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_CopyProxiesForAutoConfigurationScript_mD52D441E483F955FBA484E58282E688A7DAE3BC1 (void);
// 0x00000107 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,Mono.Net.CFUrl)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_mEA6EE80D03DC167CB088A9BD36C84DD2919BC828 (void);
// 0x00000108 Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForAutoConfigurationScript(System.IntPtr,System.Uri)
extern void CFNetwork_GetProxiesForAutoConfigurationScript_m0FA93E7487DAE6993B0F1F69B4E61ACC4F46E0B7 (void);
// 0x00000109 Mono.Net.CFProxy[] Mono.Net.CFNetwork::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri)
extern void CFNetwork_ExecuteProxyAutoConfigurationURL_m1645430EC8CB0FB9B128A1525436468BA71C7D7A (void);
// 0x0000010A System.IntPtr Mono.Net.CFNetwork::CFNetworkCopyProxiesForURL(System.IntPtr,System.IntPtr)
extern void CFNetwork_CFNetworkCopyProxiesForURL_m222DA57686642F09DE2B4CC9505AA5916C5F593C (void);
// 0x0000010B Mono.Net.CFArray Mono.Net.CFNetwork::CopyProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFDictionary)
extern void CFNetwork_CopyProxiesForURL_m3CC1E10A717CBA58D63403AD72AFF7C28DF09DAB (void);
// 0x0000010C Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForURL(Mono.Net.CFUrl,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForURL_m22E56EFEEA7B927C996B28C7D6D066DFB1E04673 (void);
// 0x0000010D Mono.Net.CFProxy[] Mono.Net.CFNetwork::GetProxiesForUri(System.Uri,Mono.Net.CFProxySettings)
extern void CFNetwork_GetProxiesForUri_mE82A7948BF5A3CF1AFD09DC739F017C8A5694429 (void);
// 0x0000010E System.IntPtr Mono.Net.CFNetwork::CFNetworkCopySystemProxySettings()
extern void CFNetwork_CFNetworkCopySystemProxySettings_m7C9D402114A62862E1B10B3CB352DB0617860E66 (void);
// 0x0000010F Mono.Net.CFProxySettings Mono.Net.CFNetwork::GetSystemProxySettings()
extern void CFNetwork_GetSystemProxySettings_mC08214866976C5825A453088EFAE1846D87D425A (void);
// 0x00000110 System.Net.IWebProxy Mono.Net.CFNetwork::GetDefaultProxy()
extern void CFNetwork_GetDefaultProxy_mFCEFB728224033F014C188FE2BBC379A7F753428 (void);
// 0x00000111 System.Void Mono.Net.CFNetwork::.cctor()
extern void CFNetwork__cctor_m53723CA4A908873A10BBB2FD8B3BB7C23A23F250 (void);
// 0x00000112 System.Void Mono.Net.CFNetwork/GetProxyData::Dispose()
extern void GetProxyData_Dispose_mF6A2D7D8C67588D1D627AF94DFEF2C7AA5B76CDD (void);
// 0x00000113 System.Void Mono.Net.CFNetwork/GetProxyData::.ctor()
extern void GetProxyData__ctor_m9CC32EF080377850BC9B6FF283B2595C167B7721 (void);
// 0x00000114 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::.ctor(System.Object,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback__ctor_mFBDA2507472B5CC9BE1AB00525A4985606AD36BC (void);
// 0x00000115 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CFProxyAutoConfigurationResultCallback_Invoke_m14AB24B2B486ABBD22AABF058F5DCA9FA12FE829 (void);
// 0x00000116 System.IAsyncResult Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void CFProxyAutoConfigurationResultCallback_BeginInvoke_m61976BC16FAC944A2D7C243AC67A4EA61500DAC0 (void);
// 0x00000117 System.Void Mono.Net.CFNetwork/CFProxyAutoConfigurationResultCallback::EndInvoke(System.IAsyncResult)
extern void CFProxyAutoConfigurationResultCallback_EndInvoke_mBE6E881358E26A55305C5983CE119B1AD8E52332 (void);
// 0x00000118 System.Void Mono.Net.CFNetwork/CFWebProxy::.ctor()
extern void CFWebProxy__ctor_mCC44E988D527452E493FC4A23ED3722CC71E6A38 (void);
// 0x00000119 System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUri(Mono.Net.CFProxy,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUri_m3F63B622064439B7E92515CE2843669E071C6BAF (void);
// 0x0000011A System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxyUriFromScript(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_GetProxyUriFromScript_mC4D0A8BC56266C546C65C29996A5564F03503DEB (void);
// 0x0000011B System.Uri Mono.Net.CFNetwork/CFWebProxy::ExecuteProxyAutoConfigurationURL(System.IntPtr,System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_ExecuteProxyAutoConfigurationURL_mC040FE13D5540C58B8CF4EE63C5D331978B901E1 (void);
// 0x0000011C System.Uri Mono.Net.CFNetwork/CFWebProxy::SelectProxy(Mono.Net.CFProxy[],System.Uri,System.Net.NetworkCredential&)
extern void CFWebProxy_SelectProxy_m95C6AFD75952BA91814ADE401ED5F12C5654D046 (void);
// 0x0000011D System.Uri Mono.Net.CFNetwork/CFWebProxy::GetProxy(System.Uri)
extern void CFWebProxy_GetProxy_m4743138D378D43BC119DAD673A3CA7DF4CE6CFEB (void);
// 0x0000011E System.Boolean Mono.Net.CFNetwork/CFWebProxy::IsBypassed(System.Uri)
extern void CFWebProxy_IsBypassed_m1E2CC3D34FA80BA0FC1026047CCC2947AA2D0EA7 (void);
// 0x0000011F System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m9E10A71FD7E271A87BF207893367B1CF1398C7CA (void);
// 0x00000120 System.Void Mono.Net.CFNetwork/<>c__DisplayClass13_0::<ExecuteProxyAutoConfigurationURL>b__0(System.IntPtr,System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_mFE212AE14442B7E102A25A01CC3347AFB5C3BD13 (void);
// 0x00000121 System.Int32 Mono.Net.Security.BufferOffsetSize::get_EndOffset()
extern void BufferOffsetSize_get_EndOffset_m3D0A21592979F5088101892843183FCFB8C9BF2A (void);
// 0x00000122 System.Int32 Mono.Net.Security.BufferOffsetSize::get_Remaining()
extern void BufferOffsetSize_get_Remaining_mBD3EA6B0F643284A54FDCA2860FE0F65C5CAF054 (void);
// 0x00000123 System.Void Mono.Net.Security.BufferOffsetSize::.ctor(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize__ctor_m3DE692137428B2E6AB46008825FC5C1B63FDAF4F (void);
// 0x00000124 System.String Mono.Net.Security.BufferOffsetSize::ToString()
extern void BufferOffsetSize_ToString_mEEB6528B305FE796622A87E8692C7132423D4655 (void);
// 0x00000125 System.Void Mono.Net.Security.BufferOffsetSize2::.ctor(System.Int32)
extern void BufferOffsetSize2__ctor_m68156625CD993C66D5EA9C5194263DD9A4F59F3F (void);
// 0x00000126 System.Void Mono.Net.Security.BufferOffsetSize2::Reset()
extern void BufferOffsetSize2_Reset_m4426212B4ECDC2D1487AE5B825918B747D947AB7 (void);
// 0x00000127 System.Void Mono.Net.Security.BufferOffsetSize2::MakeRoom(System.Int32)
extern void BufferOffsetSize2_MakeRoom_mD7CCEC959C12276B0333DFFEAA8581C465FF44ED (void);
// 0x00000128 System.Void Mono.Net.Security.BufferOffsetSize2::AppendData(System.Byte[],System.Int32,System.Int32)
extern void BufferOffsetSize2_AppendData_m96903990058C4793A3B56FDE82006E4EC90A2508 (void);
// 0x00000129 System.Int32 Mono.Net.Security.AsyncProtocolResult::get_UserResult()
extern void AsyncProtocolResult_get_UserResult_mCCD14DC517D32C83AA61320D6D1D2E7F1430A3C8 (void);
// 0x0000012A System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.AsyncProtocolResult::get_Error()
extern void AsyncProtocolResult_get_Error_m90252805C3FCD7277CD1CB01CB765183889E6E29 (void);
// 0x0000012B System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Int32)
extern void AsyncProtocolResult__ctor_m9F01278D600A337B6A0CF5F6C9EFF7760BD758D8 (void);
// 0x0000012C System.Void Mono.Net.Security.AsyncProtocolResult::.ctor(System.Runtime.ExceptionServices.ExceptionDispatchInfo)
extern void AsyncProtocolResult__ctor_mD63EC8610596D4B15DB1325C58FF32A41DAD48CF (void);
// 0x0000012D Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.AsyncProtocolRequest::get_Parent()
extern void AsyncProtocolRequest_get_Parent_m1F7659D1FAFC679076165336ED380C4BD123B452 (void);
// 0x0000012E System.Boolean Mono.Net.Security.AsyncProtocolRequest::get_RunSynchronously()
extern void AsyncProtocolRequest_get_RunSynchronously_m66A26ED05543D9AF1ED86287DCE8389BC1CB319A (void);
// 0x0000012F System.String Mono.Net.Security.AsyncProtocolRequest::get_Name()
extern void AsyncProtocolRequest_get_Name_m1999BAB96B06DCB4DC11BF5F3B0BF4C6E2A26FF6 (void);
// 0x00000130 System.Int32 Mono.Net.Security.AsyncProtocolRequest::get_UserResult()
extern void AsyncProtocolRequest_get_UserResult_m53CEBBACE5031D4CE92308ABBAEA38AEF74DDBD3 (void);
// 0x00000131 System.Void Mono.Net.Security.AsyncProtocolRequest::set_UserResult(System.Int32)
extern void AsyncProtocolRequest_set_UserResult_mBF62363240DC9BE894231E56047F594EF452CD19 (void);
// 0x00000132 System.Void Mono.Net.Security.AsyncProtocolRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncProtocolRequest__ctor_mFE18CBE3FAA084FF6DF2AD8BECC2CA6DF4C6E769 (void);
// 0x00000133 System.Void Mono.Net.Security.AsyncProtocolRequest::RequestRead(System.Int32)
extern void AsyncProtocolRequest_RequestRead_mFE5CEC3957F554C144DFBD3965538192A954D064 (void);
// 0x00000134 System.Void Mono.Net.Security.AsyncProtocolRequest::RequestWrite()
extern void AsyncProtocolRequest_RequestWrite_m2A27B2F2C4734DA21AD7D36B18B0D67EB3D54ED7 (void);
// 0x00000135 System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> Mono.Net.Security.AsyncProtocolRequest::StartOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_StartOperation_mA13EA6B8ED143BC043F506815D05EB3F49F22682 (void);
// 0x00000136 System.Threading.Tasks.Task Mono.Net.Security.AsyncProtocolRequest::ProcessOperation(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_ProcessOperation_m6DD0D7800F73C41BE9A5313737357801B22ED71D (void);
// 0x00000137 System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> Mono.Net.Security.AsyncProtocolRequest::InnerRead(System.Threading.CancellationToken)
extern void AsyncProtocolRequest_InnerRead_m902FA39460933B383900CB60BDF8CCFC96BF3499 (void);
// 0x00000138 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus)
// 0x00000139 System.String Mono.Net.Security.AsyncProtocolRequest::ToString()
extern void AsyncProtocolRequest_ToString_m2D8062B5811D7B7A071CC451D2FD03E5BF61B529 (void);
// 0x0000013A System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::MoveNext()
extern void U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2 (void);
// 0x0000013B System.Void Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A (void);
// 0x0000013C System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::MoveNext()
extern void U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D (void);
// 0x0000013D System.Void Mono.Net.Security.AsyncProtocolRequest/<ProcessOperation>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3 (void);
// 0x0000013E System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::MoveNext()
extern void U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D (void);
// 0x0000013F System.Void Mono.Net.Security.AsyncProtocolRequest/<InnerRead>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3 (void);
// 0x00000140 System.Void Mono.Net.Security.AsyncHandshakeRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean)
extern void AsyncHandshakeRequest__ctor_mD64E5A00147B8D0859732BE2ACE93D32868F8210 (void);
// 0x00000141 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncHandshakeRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncHandshakeRequest_Run_m4C9BCE2E991E582B738E2A4E7F2D088227685B98 (void);
// 0x00000142 Mono.Net.Security.BufferOffsetSize Mono.Net.Security.AsyncReadOrWriteRequest::get_UserBuffer()
extern void AsyncReadOrWriteRequest_get_UserBuffer_m628B7BB1EB536BA73CFE467242E0E749A7B0AE6A (void);
// 0x00000143 System.Int32 Mono.Net.Security.AsyncReadOrWriteRequest::get_CurrentSize()
extern void AsyncReadOrWriteRequest_get_CurrentSize_m5AE6CC50F25E8504438DF2C9C2E2A44000621142 (void);
// 0x00000144 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::set_CurrentSize(System.Int32)
extern void AsyncReadOrWriteRequest_set_CurrentSize_mAB6067CAD6F9DB5B3D274FC09E70BFA8DCBA288B (void);
// 0x00000145 System.Void Mono.Net.Security.AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadOrWriteRequest__ctor_m880E292B39EF76B9EDF3A5AB0A9A333A38A5575F (void);
// 0x00000146 System.String Mono.Net.Security.AsyncReadOrWriteRequest::ToString()
extern void AsyncReadOrWriteRequest_ToString_mDF6B2FA7AFA4E8B6571656E60CEF9BCFDCF05EDD (void);
// 0x00000147 System.Void Mono.Net.Security.AsyncReadRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncReadRequest__ctor_mAF75247AFFC230BA5433424D27D13ACF53B3A239 (void);
// 0x00000148 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncReadRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncReadRequest_Run_mC9FDEBDFB3C4519C11A47FF358D4B7AB62514E11 (void);
// 0x00000149 System.Void Mono.Net.Security.AsyncWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.Byte[],System.Int32,System.Int32)
extern void AsyncWriteRequest__ctor_mF3534E810074917ABDE7E4CE7EE61715694F9EB8 (void);
// 0x0000014A Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.AsyncWriteRequest::Run(Mono.Net.Security.AsyncOperationStatus)
extern void AsyncWriteRequest_Run_mA3FF2D74BD568114BF3EA7FF6B0BE568D25D81BC (void);
// 0x0000014B System.Void Mono.Net.Security.ServerCertValidationCallbackWrapper::.ctor(System.Object,System.IntPtr)
extern void ServerCertValidationCallbackWrapper__ctor_m6EB9B9436E627C4C616BC14AA8EF5B6BD28B4F4E (void);
// 0x0000014C System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::Invoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void ServerCertValidationCallbackWrapper_Invoke_mC75038D5C50C3354D6938DD77608DCE39D5DC1AE (void);
// 0x0000014D System.IAsyncResult Mono.Net.Security.ServerCertValidationCallbackWrapper::BeginInvoke(System.Net.ServerCertValidationCallback,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors,System.AsyncCallback,System.Object)
extern void ServerCertValidationCallbackWrapper_BeginInvoke_mCCBD269244B22D143E7CF8F02FBF9DA99488F1D9 (void);
// 0x0000014E System.Boolean Mono.Net.Security.ServerCertValidationCallbackWrapper::EndInvoke(System.IAsyncResult)
extern void ServerCertValidationCallbackWrapper_EndInvoke_m4F4A10E18E6928B33347B2A7C31B7AE9A0BD796B (void);
// 0x0000014F Mono.Security.Interface.ICertificateValidator Mono.Net.Security.ChainValidationHelper::GetInternalValidator(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void ChainValidationHelper_GetInternalValidator_mBDF9A751ADCBA2326B75ABF4BDE8410F08FF5FAC (void);
// 0x00000150 System.Void Mono.Net.Security.ChainValidationHelper::.ctor(Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings,System.Boolean,Mono.Net.Security.MonoTlsStream,Mono.Net.Security.ServerCertValidationCallbackWrapper)
extern void ChainValidationHelper__ctor_mFE078E9D7EB24B1E12975ABFC262C403F1A54CBF (void);
// 0x00000151 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.ChainValidationHelper::DefaultSelectionCallback(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void ChainValidationHelper_DefaultSelectionCallback_mC8C3FAEDFCAC634F7C77EA067637E0088863B31A (void);
// 0x00000152 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.ChainValidationHelper::get_Settings()
extern void ChainValidationHelper_get_Settings_m0D7AF0562DCF1102D27554FFE64628F8EFBB8684 (void);
// 0x00000153 System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
extern void ChainValidationHelper_SelectClientCertificate_m116ABB9254158E98AA9A0EB323980138B1F11983 (void);
// 0x00000154 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void ChainValidationHelper_ValidateCertificate_m0DE6FB5264C61C93FA06B954A0CBF670AB7C3A08 (void);
// 0x00000155 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateCertificate(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void ChainValidationHelper_ValidateCertificate_mE482A7E49237B8C3CA8F491A78CC6E6084671188 (void);
// 0x00000156 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_m1FED22B0446D155E82E39C2743C9A16EDE6F62ED (void);
// 0x00000157 Mono.Security.Interface.ValidationResult Mono.Net.Security.ChainValidationHelper::ValidateChain(System.String,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain&,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.Security.SslPolicyErrors)
extern void ChainValidationHelper_ValidateChain_m7A807FE9B1CBE778FE851D07E24D80A3D567B90B (void);
// 0x00000158 System.Void Mono.Net.Security.MobileAuthenticatedStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Security.Interface.MonoTlsProvider)
extern void MobileAuthenticatedStream__ctor_mF6BF50D6BFDEF283FF8036F5170281D29FDD7628 (void);
// 0x00000159 Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::get_Settings()
extern void MobileAuthenticatedStream_get_Settings_mA58954FF6C914DBAACB8F508ACFC5165A9A43155 (void);
// 0x0000015A Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MobileAuthenticatedStream::get_Provider()
extern void MobileAuthenticatedStream_get_Provider_mC36232C2AF537A29FBB55B1AD3C99F02A9731C37 (void);
// 0x0000015B System.Void Mono.Net.Security.MobileAuthenticatedStream::CheckThrow(System.Boolean,System.Boolean)
extern void MobileAuthenticatedStream_CheckThrow_m2AAEC9435176D4AA10890A896C5909330B23683E (void);
// 0x0000015C System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetSSPIException(System.Exception)
extern void MobileAuthenticatedStream_GetSSPIException_m574F0E57FDDC71287516A9908D7E57FC61A8ED27 (void);
// 0x0000015D System.Exception Mono.Net.Security.MobileAuthenticatedStream::GetIOException(System.Exception,System.String)
extern void MobileAuthenticatedStream_GetIOException_mE435E11E49448A2035BCABF04AA5F72F44DC26D4 (void);
// 0x0000015E System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::SetException(System.Exception)
extern void MobileAuthenticatedStream_SetException_mAFD628C4C8A54C4FE24BFB30C0F5863FDDFC8A7F (void);
// 0x0000015F System.Void Mono.Net.Security.MobileAuthenticatedStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern void MobileAuthenticatedStream_AuthenticateAsServer_mF6F76CA384D369470FB3EB1492711E8E3936DF51 (void);
// 0x00000160 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::ProcessAuthentication(System.Boolean,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileAuthenticatedStream_ProcessAuthentication_m1A9EEBB26CCD694B0B844D8375EA85E6A353B73E (void);
// 0x00000161 Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::CreateContext(System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
// 0x00000162 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginRead_m678B1BECC958CD3B67D66134E56AD3CAEB07019C (void);
// 0x00000163 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::EndRead(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndRead_m347ACCE77CCCE6738781A2B182949CBA72CF9143 (void);
// 0x00000164 System.IAsyncResult Mono.Net.Security.MobileAuthenticatedStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void MobileAuthenticatedStream_BeginWrite_m01F98CCE1A968C5654028F266F3C648CF858864B (void);
// 0x00000165 System.Void Mono.Net.Security.MobileAuthenticatedStream::EndWrite(System.IAsyncResult)
extern void MobileAuthenticatedStream_EndWrite_m0CA1FD8354542D4F2BCA50BB4B0B852472D775C1 (void);
// 0x00000166 System.Int32 Mono.Net.Security.MobileAuthenticatedStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Read_mB273DD14EDCED08E88F57CB340B97A206BA7DDE1 (void);
// 0x00000167 System.Void Mono.Net.Security.MobileAuthenticatedStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_Write_m0264ACE9D90AFB72A1A27B6130DD1B2876334DDF (void);
// 0x00000168 System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_ReadAsync_mA54D1973D54A2F0DB84CE3FB41EAE1974988BB32 (void);
// 0x00000169 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_WriteAsync_m2521D8A56CEC0EA00B99F2DD570FCCEDEBFF1807 (void);
// 0x0000016A System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::StartOperation(Mono.Net.Security.MobileAuthenticatedStream/OperationType,Mono.Net.Security.AsyncProtocolRequest,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_StartOperation_mB3763CD0086F3FB7D75AF3E10A9E1532FAD5BDB7 (void);
// 0x0000016B System.Int32 Mono.Net.Security.MobileAuthenticatedStream::InternalRead(System.Byte[],System.Int32,System.Int32,System.Boolean&)
extern void MobileAuthenticatedStream_InternalRead_m61B06DFDEA8207EEB7F1C350A428D7158ED25764 (void);
// 0x0000016C System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::InternalRead(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalRead_mE90566374244F746502383488E02279B6A4F2E47 (void);
// 0x0000016D System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_mD2BD17B591D53F923FAC63558AA1D35B21DB4E21 (void);
// 0x0000016E System.Boolean Mono.Net.Security.MobileAuthenticatedStream::InternalWrite(Mono.Net.Security.AsyncProtocolRequest,Mono.Net.Security.BufferOffsetSize2,System.Byte[],System.Int32,System.Int32)
extern void MobileAuthenticatedStream_InternalWrite_m1B5142B048B310D81A4929D4266FF9F0B0BE1B5D (void);
// 0x0000016F System.Threading.Tasks.Task`1<System.Int32> Mono.Net.Security.MobileAuthenticatedStream::InnerRead(System.Boolean,System.Int32,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerRead_m0EDB58159985F661C68EBA26247546ED06999D0F (void);
// 0x00000170 System.Threading.Tasks.Task Mono.Net.Security.MobileAuthenticatedStream::InnerWrite(System.Boolean,System.Threading.CancellationToken)
extern void MobileAuthenticatedStream_InnerWrite_m36FEDC8E842C497B62D566D6392287270FD698AC (void);
// 0x00000171 Mono.Net.Security.AsyncOperationStatus Mono.Net.Security.MobileAuthenticatedStream::ProcessHandshake(Mono.Net.Security.AsyncOperationStatus)
extern void MobileAuthenticatedStream_ProcessHandshake_mE6B1280A8F2D9FB6EA6EC2AC003906FFB49AA9CC (void);
// 0x00000172 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessRead(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessRead_mB005268451AB3F73B29AD1F787B576D5F3279371 (void);
// 0x00000173 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileAuthenticatedStream::ProcessWrite(Mono.Net.Security.BufferOffsetSize)
extern void MobileAuthenticatedStream_ProcessWrite_m30427A9308C97FAD0964F81A6A9F436FB2507F0F (void);
// 0x00000174 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_IsAuthenticated()
extern void MobileAuthenticatedStream_get_IsAuthenticated_m8D978D4684246BB2629CB1E2D207D2D76C132E3A (void);
// 0x00000175 System.Void Mono.Net.Security.MobileAuthenticatedStream::Dispose(System.Boolean)
extern void MobileAuthenticatedStream_Dispose_mB7DAA195CE82F2FA15AB576C961A7CE5D58C3106 (void);
// 0x00000176 System.Void Mono.Net.Security.MobileAuthenticatedStream::Flush()
extern void MobileAuthenticatedStream_Flush_m20FAE0A0A6C311E1925367C03ECA23BBFB74BE8D (void);
// 0x00000177 System.Int64 Mono.Net.Security.MobileAuthenticatedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void MobileAuthenticatedStream_Seek_m2D799812EC327A4E25AA165B9966514B2B1475A6 (void);
// 0x00000178 System.Void Mono.Net.Security.MobileAuthenticatedStream::SetLength(System.Int64)
extern void MobileAuthenticatedStream_SetLength_m8FCE457448E738481D5AAC29A8A9333A1B67D8C1 (void);
// 0x00000179 System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanRead()
extern void MobileAuthenticatedStream_get_CanRead_mE230E0D6A7CA3324925CD6311465B7BD41A144CE (void);
// 0x0000017A System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanWrite()
extern void MobileAuthenticatedStream_get_CanWrite_mAF3696EAD7809A7D9EB50A091BDAE02586E0DF54 (void);
// 0x0000017B System.Boolean Mono.Net.Security.MobileAuthenticatedStream::get_CanSeek()
extern void MobileAuthenticatedStream_get_CanSeek_mFD9C9EF3A622E65965F14997361F9F611B2314A2 (void);
// 0x0000017C System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Length()
extern void MobileAuthenticatedStream_get_Length_mD76215A3195543708BCB40C787678535541CE71E (void);
// 0x0000017D System.Int64 Mono.Net.Security.MobileAuthenticatedStream::get_Position()
extern void MobileAuthenticatedStream_get_Position_mD05763AB69A4C7F98E6276F32645AEDFD8888731 (void);
// 0x0000017E System.Void Mono.Net.Security.MobileAuthenticatedStream::set_Position(System.Int64)
extern void MobileAuthenticatedStream_set_Position_m5A309FE43C490AA7C1D9AE181D269CCA12B26260 (void);
// 0x0000017F System.Void Mono.Net.Security.MobileAuthenticatedStream::.cctor()
extern void MobileAuthenticatedStream__cctor_mCC74CDBC64394AA7D5FE8CA0EE03EC0F11D7FEB6 (void);
// 0x00000180 System.Void Mono.Net.Security.MobileAuthenticatedStream::<InnerWrite>b__67_0()
extern void MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_mA67CDCE05B68516E41F5A6A8BF836B0AAE18D3B9 (void);
// 0x00000181 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::MoveNext()
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82 (void);
// 0x00000182 System.Void Mono.Net.Security.MobileAuthenticatedStream/<ProcessAuthentication>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B (void);
// 0x00000183 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::MoveNext()
extern void U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466 (void);
// 0x00000184 System.Void Mono.Net.Security.MobileAuthenticatedStream/<StartOperation>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC (void);
// 0x00000185 System.Void Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::.ctor()
extern void U3CU3Ec__DisplayClass66_0__ctor_m4ADA8611B27CC1C1BE9AFD1D22978A6621F720BE (void);
// 0x00000186 System.Int32 Mono.Net.Security.MobileAuthenticatedStream/<>c__DisplayClass66_0::<InnerRead>b__0()
extern void U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF1C5674011A7F38D3AE4A911BE1E8E36E5CE0348 (void);
// 0x00000187 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::MoveNext()
extern void U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96 (void);
// 0x00000188 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerRead>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381 (void);
// 0x00000189 System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::MoveNext()
extern void U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542 (void);
// 0x0000018A System.Void Mono.Net.Security.MobileAuthenticatedStream/<InnerWrite>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A (void);
// 0x0000018B System.Void Mono.Net.Security.MobileTlsContext::.ctor(Mono.Net.Security.MobileAuthenticatedStream,System.Boolean,System.String,System.Security.Authentication.SslProtocols,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Boolean)
extern void MobileTlsContext__ctor_m449BA0C8EEB97C8D13FBDF2B18F46F37408292E2 (void);
// 0x0000018C Mono.Net.Security.MobileAuthenticatedStream Mono.Net.Security.MobileTlsContext::get_Parent()
extern void MobileTlsContext_get_Parent_m0FD89F43463E15B8D86845F0B3A9DF8B1C555DCF (void);
// 0x0000018D Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileTlsContext::get_Settings()
extern void MobileTlsContext_get_Settings_mD01B5D15FBD79707BB1F283814FF76817230E35D (void);
// 0x0000018E System.Boolean Mono.Net.Security.MobileTlsContext::get_IsAuthenticated()
// 0x0000018F System.Boolean Mono.Net.Security.MobileTlsContext::get_IsServer()
extern void MobileTlsContext_get_IsServer_mEC45475AE45AAB2485A829E6694B4E3BA1865C44 (void);
// 0x00000190 System.String Mono.Net.Security.MobileTlsContext::get_TargetHost()
extern void MobileTlsContext_get_TargetHost_m9A21D6E1D130B27A98EC48E33823BAEA78E3103F (void);
// 0x00000191 System.String Mono.Net.Security.MobileTlsContext::get_ServerName()
extern void MobileTlsContext_get_ServerName_m4E6D70D85F6EF3AE2D69F7C94EE30AA94B29D5DE (void);
// 0x00000192 System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Net.Security.MobileTlsContext::get_ClientCertificates()
extern void MobileTlsContext_get_ClientCertificates_m9EBE077A35DCE8333AF50C2CE8D22BE18DD26961 (void);
// 0x00000193 System.Void Mono.Net.Security.MobileTlsContext::StartHandshake()
// 0x00000194 System.Boolean Mono.Net.Security.MobileTlsContext::ProcessHandshake()
// 0x00000195 System.Void Mono.Net.Security.MobileTlsContext::FinishHandshake()
// 0x00000196 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Read(System.Byte[],System.Int32,System.Int32)
// 0x00000197 System.ValueTuple`2<System.Int32,System.Boolean> Mono.Net.Security.MobileTlsContext::Write(System.Byte[],System.Int32,System.Int32)
// 0x00000198 System.Void Mono.Net.Security.MobileTlsContext::Shutdown()
// 0x00000199 System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain)
extern void MobileTlsContext_ValidateCertificate_m4A466CEC18A060EDFD9D65F66600FA7F63632F7A (void);
// 0x0000019A System.Boolean Mono.Net.Security.MobileTlsContext::ValidateCertificate(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void MobileTlsContext_ValidateCertificate_mC4B0D79BE85414111AAEF998B89A3397B2FBA25B (void);
// 0x0000019B System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.MobileTlsContext::SelectClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void MobileTlsContext_SelectClientCertificate_mECA3191985152439F02BAF708106264FAE73295E (void);
// 0x0000019C System.Void Mono.Net.Security.MobileTlsContext::Dispose()
extern void MobileTlsContext_Dispose_m28EF01B1A0096B9A7820BAA0A77DB59C96A619DD (void);
// 0x0000019D System.Void Mono.Net.Security.MobileTlsContext::Dispose(System.Boolean)
extern void MobileTlsContext_Dispose_mA5A0EBCF3B159E9C83F76C00BA50FC67C360A7D1 (void);
// 0x0000019E System.Void Mono.Net.Security.MobileTlsContext::Finalize()
extern void MobileTlsContext_Finalize_m5751EFC24E645E0948C5ED11BD9C6C9E31170BA0 (void);
// 0x0000019F Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProviderInternal()
extern void MonoTlsProviderFactory_GetProviderInternal_m39B343490A04AEA1AA38A90180E1B3BB1FB09020 (void);
// 0x000001A0 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeInternal()
extern void MonoTlsProviderFactory_InitializeInternal_m6F039B9508B57C42B56DC7ED10C4F165B43F9200 (void);
// 0x000001A1 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::LookupProvider(System.String,System.Boolean)
extern void MonoTlsProviderFactory_LookupProvider_mCCE6D95A81D810BA625035EEC1F974C16C748700 (void);
// 0x000001A2 System.Void Mono.Net.Security.MonoTlsProviderFactory::InitializeProviderRegistration()
extern void MonoTlsProviderFactory_InitializeProviderRegistration_mB8EDA2E5365BDCE5E8848A0259C78C1108FABC8D (void);
// 0x000001A3 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::CreateDefaultProviderImpl()
extern void MonoTlsProviderFactory_CreateDefaultProviderImpl_mCD05512BAD4E80E43384340A06057306064EFACE (void);
// 0x000001A4 Mono.Security.Interface.MonoTlsProvider Mono.Net.Security.MonoTlsProviderFactory::GetProvider()
extern void MonoTlsProviderFactory_GetProvider_m78F329C7EAEB40EBD9A044CC1F0B89026DA2CE4D (void);
// 0x000001A5 System.Void Mono.Net.Security.MonoTlsProviderFactory::.cctor()
extern void MonoTlsProviderFactory__cctor_mF95517B2A6920440ACFBE55DEA0EE9C1211BF26A (void);
// 0x000001A6 System.Net.HttpWebRequest Mono.Net.Security.MonoTlsStream::get_Request()
extern void MonoTlsStream_get_Request_m2A0C4CA4D549165015FACBFDB99051387A0A6ABA (void);
// 0x000001A7 System.Void Mono.Net.Security.MonoTlsStream::set_CertificateValidationFailed(System.Boolean)
extern void MonoTlsStream_set_CertificateValidationFailed_mAECE839D304818A9CA38E598B85B962064F45B3F (void);
// 0x000001A8 System.Object Mono.Net.Security.NoReflectionHelper::GetInternalValidator(System.Object,System.Object)
extern void NoReflectionHelper_GetInternalValidator_m231BC9D1C0A711D48F25B6F0162ACABBA93A0D74 (void);
// 0x000001A9 System.Object Mono.Net.Security.NoReflectionHelper::GetProvider()
extern void NoReflectionHelper_GetProvider_m59893E33828D7422C8A4779F4C608373877FC05A (void);
// 0x000001AA System.Void Mono.Net.Security.SystemCertificateValidator::.cctor()
extern void SystemCertificateValidator__cctor_mBF04D8E389B7377FC07044B9CF044A966C572193 (void);
// 0x000001AB System.Security.Cryptography.X509Certificates.X509Chain Mono.Net.Security.SystemCertificateValidator::CreateX509Chain(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void SystemCertificateValidator_CreateX509Chain_mB9965896005703ADC050BC1E6415D30FBDC42091 (void);
// 0x000001AC System.Boolean Mono.Net.Security.SystemCertificateValidator::NeedsChain(Mono.Security.Interface.MonoTlsSettings)
extern void SystemCertificateValidator_NeedsChain_m51D5E6A2B5A26BECA8764E613D19345A9353BA52 (void);
// 0x000001AD Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::PublicToMono(System.Net.Security.RemoteCertificateValidationCallback)
extern void CallbackHelpers_PublicToMono_m84CC573B0D8E011058AEC077734D8C76921DD04C (void);
// 0x000001AE System.Net.Security.RemoteCertificateValidationCallback Mono.Net.Security.Private.CallbackHelpers::MonoToPublic(Mono.Security.Interface.MonoRemoteCertificateValidationCallback)
extern void CallbackHelpers_MonoToPublic_mA514EEB118D8EC3D84A607A42A0B48B5DA1FA500 (void);
// 0x000001AF System.Net.Security.LocalCertSelectionCallback Mono.Net.Security.Private.CallbackHelpers::MonoToInternal(Mono.Security.Interface.MonoLocalCertificateSelectionCallback)
extern void CallbackHelpers_MonoToInternal_m82BDD9A21269FA19DA58564160BE5A2C083A4199 (void);
// 0x000001B0 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mA3851A05D04281AEB715F93118D39916A6427108 (void);
// 0x000001B1 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0::<PublicToMono>b__0(System.String,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,Mono.Security.Interface.MonoSslPolicyErrors)
extern void U3CU3Ec__DisplayClass0_0_U3CPublicToMonoU3Eb__0_m6FE7B68D49CC73BE9827FE5BB16ADBE161FC37B5 (void);
// 0x000001B2 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m220DD155C36F2E4600624C5208FBCAC3DBDBC31D (void);
// 0x000001B3 System.Boolean Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass5_0::<MonoToPublic>b__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_mA228BC7BEF63CBFCF290284572E847A6BCCFECF7 (void);
// 0x000001B4 System.Void Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m2D537E7900C0394F5478CF4E408AACDF9F926E86 (void);
// 0x000001B5 System.Security.Cryptography.X509Certificates.X509Certificate Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass8_0::<MonoToInternal>b__0(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m0B62590D3F567A6C864B7B82B577676087CACB6B (void);
// 0x000001B6 System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_mA9BAAD6D244ADEE8986FDC0DFB3DFDA90C093A6C (void);
// 0x000001B7 System.Boolean System.IriHelper::CheckIriUnicodeRange(System.Char,System.Char,System.Boolean&,System.Boolean)
extern void IriHelper_CheckIriUnicodeRange_m5ED29083C22062AEAB8B5787C9A27CFEEC397AD9 (void);
// 0x000001B8 System.Boolean System.IriHelper::CheckIsReserved(System.Char,System.UriComponents)
extern void IriHelper_CheckIsReserved_m5C0A35BF0890852A3FC564618DB0836BBB6C0F1C (void);
// 0x000001B9 System.String System.IriHelper::EscapeUnescapeIri(System.Char*,System.Int32,System.Int32,System.UriComponents)
extern void IriHelper_EscapeUnescapeIri_m6DE347247CE35DB4CE3129BEC2179F0095D69239 (void);
// 0x000001BA System.Boolean System.Uri::get_IsImplicitFile()
extern void Uri_get_IsImplicitFile_m048350CB1E9AB92599F1557680A5D3B5FDE7C35D (void);
// 0x000001BB System.Boolean System.Uri::get_IsUncOrDosPath()
extern void Uri_get_IsUncOrDosPath_mE372CA996BE5B29DD531D7C6DD1809E17441005E (void);
// 0x000001BC System.Boolean System.Uri::get_IsDosPath()
extern void Uri_get_IsDosPath_m89CA4E32381C529502E91872BC89BD18F5419D08 (void);
// 0x000001BD System.Boolean System.Uri::get_IsUncPath()
extern void Uri_get_IsUncPath_mD5EE84D5105BFB7D64E5C26B9549A67B720A7AE8 (void);
// 0x000001BE System.Uri/Flags System.Uri::get_HostType()
extern void Uri_get_HostType_mBB4EE8652EA19E2FB8C696302D5EBE82F358EC90 (void);
// 0x000001BF System.UriParser System.Uri::get_Syntax()
extern void Uri_get_Syntax_m3DB6A5D9E6FC3E0D0A63EA8A4527AF4106F9BD78 (void);
// 0x000001C0 System.Boolean System.Uri::get_IsNotAbsoluteUri()
extern void Uri_get_IsNotAbsoluteUri_mF9706123EB027C6E9AB263B98CE58CF319A22919 (void);
// 0x000001C1 System.Boolean System.Uri::IriParsingStatic(System.UriParser)
extern void Uri_IriParsingStatic_m39FC9677B4B9EFBADF814F2EEA58280F35A1D3E5 (void);
// 0x000001C2 System.Boolean System.Uri::get_AllowIdn()
extern void Uri_get_AllowIdn_mF1833CB700E04D746D75428948BEBC70536E1941 (void);
// 0x000001C3 System.Boolean System.Uri::AllowIdnStatic(System.UriParser,System.Uri/Flags)
extern void Uri_AllowIdnStatic_mFABD19611F334DF87EC3FF2B9A1FA061CAE3A5C5 (void);
// 0x000001C4 System.Boolean System.Uri::IsIntranet(System.String)
extern void Uri_IsIntranet_mE98CA41B60FE0D4970737C8B7C81E5C63BFC07E1 (void);
// 0x000001C5 System.Boolean System.Uri::get_UserDrivenParsing()
extern void Uri_get_UserDrivenParsing_mFF27964894B5C0432C37E425F319D6C915BCDC39 (void);
// 0x000001C6 System.Void System.Uri::SetUserDrivenParsing()
extern void Uri_SetUserDrivenParsing_m0368CB47B9E9C35CB49B3F02DBE8DFED8756226B (void);
// 0x000001C7 System.UInt16 System.Uri::get_SecuredPathIndex()
extern void Uri_get_SecuredPathIndex_mC59A2366D6F3667017F677351C4350C9541905AA (void);
// 0x000001C8 System.Boolean System.Uri::NotAny(System.Uri/Flags)
extern void Uri_NotAny_mC5DC04B72B13D2997B055B9E41FCFEEC1CE5263D (void);
// 0x000001C9 System.Boolean System.Uri::InFact(System.Uri/Flags)
extern void Uri_InFact_m4CE890C86FA34154A044516D2F3C9463389220D7 (void);
// 0x000001CA System.Boolean System.Uri::StaticNotAny(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticNotAny_mC07A1201FBE032238FCFA96E9FB5D60AEDACCC5A (void);
// 0x000001CB System.Boolean System.Uri::StaticInFact(System.Uri/Flags,System.Uri/Flags)
extern void Uri_StaticInFact_m77BB2AE094534AFD7B9F68683C2A4356A75E39B8 (void);
// 0x000001CC System.Uri/UriInfo System.Uri::EnsureUriInfo()
extern void Uri_EnsureUriInfo_m4B46DF8611FA6D20D497D12D00544CFB466DCFA7 (void);
// 0x000001CD System.Void System.Uri::EnsureParseRemaining()
extern void Uri_EnsureParseRemaining_m33815B5767FAFADB762F7E39364E6432340F210B (void);
// 0x000001CE System.Void System.Uri::EnsureHostString(System.Boolean)
extern void Uri_EnsureHostString_m4BD63AA5A88CA09572A8A7CF3B2EDDE17EF9C720 (void);
// 0x000001CF System.Void System.Uri::.ctor(System.String)
extern void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (void);
// 0x000001D0 System.Void System.Uri::.ctor(System.String,System.UriKind)
extern void Uri__ctor_mA02DB222F4F35380DE2700D84F58EB42497FDDE4 (void);
// 0x000001D1 System.Void System.Uri::.ctor(System.Uri,System.String)
extern void Uri__ctor_m41A759BF295FB902084DD289849793E01A65A14E (void);
// 0x000001D2 System.Void System.Uri::CreateUri(System.Uri,System.String,System.Boolean)
extern void Uri_CreateUri_m0A20410F2B8286AE6EDCD8B5AB3E104FA095808A (void);
// 0x000001D3 System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern void Uri__ctor_m42192656437FBEF1EEA8724D3EF2BB67DA0ED6BF (void);
// 0x000001D4 System.ParsingError System.Uri::GetCombinedString(System.Uri,System.String,System.Boolean,System.String&)
extern void Uri_GetCombinedString_m7B95A90BC09E899CF41B0047E0B681FA7CEB8668 (void);
// 0x000001D5 System.UriFormatException System.Uri::GetException(System.ParsingError)
extern void Uri_GetException_m2E833A8358C84BCF0397341160FADB1164290164 (void);
// 0x000001D6 System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri__ctor_m020E8051B3C0C9E60D8A868CBA0774B3FFB7C3FF (void);
// 0x000001D7 System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_mD4773E59427820077E86F2B298DA1386028DAC9C (void);
// 0x000001D8 System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Uri_GetObjectData_mC8CCD55C21CB624E369258E27A89F363F8271E68 (void);
// 0x000001D9 System.String System.Uri::get_AbsolutePath()
extern void Uri_get_AbsolutePath_mA9A825E2BBD0A43AD76EB9A9765E29E45FE32F31 (void);
// 0x000001DA System.String System.Uri::get_PrivateAbsolutePath()
extern void Uri_get_PrivateAbsolutePath_mC1CDB66963BF6D6AEDE0713D3CF0CE0647A6A532 (void);
// 0x000001DB System.String System.Uri::get_AbsoluteUri()
extern void Uri_get_AbsoluteUri_m4326730E572E7E3874021E802813EB6F49F7F99E (void);
// 0x000001DC System.String System.Uri::get_LocalPath()
extern void Uri_get_LocalPath_mA82E33D3A3CC238669E0CE3B7AD298AA9C8695D0 (void);
// 0x000001DD System.String System.Uri::get_Authority()
extern void Uri_get_Authority_m8C0B264FFF519F0D0C2CB3F9B6B0E87D2F3835C1 (void);
// 0x000001DE System.Boolean System.Uri::get_IsDefaultPort()
extern void Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304 (void);
// 0x000001DF System.Boolean System.Uri::get_IsFile()
extern void Uri_get_IsFile_m06AB5A15E2A34BBC5177C6E902C5C9D7E766A213 (void);
// 0x000001E0 System.Boolean System.Uri::get_IsLoopback()
extern void Uri_get_IsLoopback_mCD7E1228C8296730CBD31C713B0A81B660D99BC4 (void);
// 0x000001E1 System.String System.Uri::get_PathAndQuery()
extern void Uri_get_PathAndQuery_mF079BA04B7A397B2729E5B5DEE72B3654A44E384 (void);
// 0x000001E2 System.Boolean System.Uri::get_IsUnc()
extern void Uri_get_IsUnc_m70B47E68BDAE06A7E5362DCE5AAD97C12119AB99 (void);
// 0x000001E3 System.String System.Uri::get_Host()
extern void Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151 (void);
// 0x000001E4 System.Boolean System.Uri::StaticIsFile(System.UriParser)
extern void Uri_StaticIsFile_mD270A5F6C8B59AAF6256B4565ABE5917ABA545E3 (void);
// 0x000001E5 System.Object System.Uri::get_InitializeLock()
extern void Uri_get_InitializeLock_m45D6A11D14958E716715351E52207DCA808F00EE (void);
// 0x000001E6 System.Void System.Uri::InitializeUriConfig()
extern void Uri_InitializeUriConfig_m1B2F98DF0BB1A48FEB328E9D8BF3C23B32196FE2 (void);
// 0x000001E7 System.String System.Uri::GetLocalPath()
extern void Uri_GetLocalPath_m0E14B876FC912A64FC37663FBB3F65234FD4146E (void);
// 0x000001E8 System.Int32 System.Uri::get_Port()
extern void Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C (void);
// 0x000001E9 System.String System.Uri::get_Query()
extern void Uri_get_Query_m3F64514B4DB7C849C8255BA3FE08C6BE983D2D56 (void);
// 0x000001EA System.String System.Uri::get_Fragment()
extern void Uri_get_Fragment_m111666DD668AC59B9F3C3D3CEEEC7F70F6904D41 (void);
// 0x000001EB System.String System.Uri::get_Scheme()
extern void Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187 (void);
// 0x000001EC System.Boolean System.Uri::get_OriginalStringSwitched()
extern void Uri_get_OriginalStringSwitched_m79E1C9F1C4E0ACCC85BB68841C167DDEA15CC72D (void);
// 0x000001ED System.String System.Uri::get_OriginalString()
extern void Uri_get_OriginalString_m56099E46276F0A52524347F1F46A2F88E948504F (void);
// 0x000001EE System.String System.Uri::get_DnsSafeHost()
extern void Uri_get_DnsSafeHost_mC2D93669288A9C05CC13EE5754CEBF2D74D04704 (void);
// 0x000001EF System.Boolean System.Uri::get_IsAbsoluteUri()
extern void Uri_get_IsAbsoluteUri_m8C189085F1C675DBC3148AA70C38074EC075D722 (void);
// 0x000001F0 System.Boolean System.Uri::get_UserEscaped()
extern void Uri_get_UserEscaped_m8F29E9A593E84E66DD4AC06CBD5880B93A5F0307 (void);
// 0x000001F1 System.Boolean System.Uri::IsGenDelim(System.Char)
extern void Uri_IsGenDelim_m376CCA5D00D019A69FD746C57D236A54EB9D3CF3 (void);
// 0x000001F2 System.Boolean System.Uri::IsHexDigit(System.Char)
extern void Uri_IsHexDigit_m3B2881FA99F0B2197F8017E70C3AE6EBF9849836 (void);
// 0x000001F3 System.Int32 System.Uri::FromHex(System.Char)
extern void Uri_FromHex_m9EAC76A5DBFED86532FF7E1BBD809176337A227B (void);
// 0x000001F4 System.Int32 System.Uri::GetHashCode()
extern void Uri_GetHashCode_m06066B9059649A690C5B4DE58D32DF227933F515 (void);
// 0x000001F5 System.String System.Uri::ToString()
extern void Uri_ToString_mB76863E11134B9635149E8E5F59AB75A74A760E2 (void);
// 0x000001F6 System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern void Uri_op_Equality_mFED3D4AFAB090B76D2088C485507F8F702ADA18F (void);
// 0x000001F7 System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern void Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B (void);
// 0x000001F8 System.Boolean System.Uri::Equals(System.Object)
extern void Uri_Equals_m432A30F5E72A0F2B729AC051892BF9E1F4D26629 (void);
// 0x000001F9 System.ParsingError System.Uri::ParseScheme(System.String,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseScheme_m61CAE16F1EC76725E5E0B23B09577F91BB223884 (void);
// 0x000001FA System.UriFormatException System.Uri::ParseMinimal()
extern void Uri_ParseMinimal_m35FCFE52F12315DA60733B807E7C0AB408C0A9CF (void);
// 0x000001FB System.ParsingError System.Uri::PrivateParseMinimal()
extern void Uri_PrivateParseMinimal_mE1DA461DDA053787906BBEC2BC2B3046B1B329F0 (void);
// 0x000001FC System.Void System.Uri::PrivateParseMinimalIri(System.String,System.UInt16)
extern void Uri_PrivateParseMinimalIri_m29F0CA367080586448C648332F59BED0096AB2D0 (void);
// 0x000001FD System.Void System.Uri::CreateUriInfo(System.Uri/Flags)
extern void Uri_CreateUriInfo_mC112D6E7002CA014AB6BEA878A66ECC46340FAAF (void);
// 0x000001FE System.Void System.Uri::CreateHostString()
extern void Uri_CreateHostString_m6FEC48641D3786D73B50D5DC792804C9A4D70C54 (void);
// 0x000001FF System.String System.Uri::CreateHostStringHelper(System.String,System.UInt16,System.UInt16,System.Uri/Flags&,System.String&)
extern void Uri_CreateHostStringHelper_m6C5EEA8BD2CDBCDD8A63FB74D3B801329EDE7BDD (void);
// 0x00000200 System.Void System.Uri::GetHostViaCustomSyntax()
extern void Uri_GetHostViaCustomSyntax_mD591A4A615803E70A03D7C75E7C114E4E460AED3 (void);
// 0x00000201 System.String System.Uri::GetParts(System.UriComponents,System.UriFormat)
extern void Uri_GetParts_mF5840DC010E6D420EB5A0722320EDAAEA2D0269F (void);
// 0x00000202 System.String System.Uri::GetEscapedParts(System.UriComponents)
extern void Uri_GetEscapedParts_m745615124808CB89A18D499988F4425F678938C4 (void);
// 0x00000203 System.String System.Uri::GetUnescapedParts(System.UriComponents,System.UriFormat)
extern void Uri_GetUnescapedParts_m051A75B5D2DDAE55F107457CA468EE9A2563FED3 (void);
// 0x00000204 System.String System.Uri::ReCreateParts(System.UriComponents,System.UInt16,System.UriFormat)
extern void Uri_ReCreateParts_mF50263ABC7D750E939B57BF61FA48A8762144FD7 (void);
// 0x00000205 System.String System.Uri::GetUriPartsFromUserString(System.UriComponents)
extern void Uri_GetUriPartsFromUserString_m95A7794F28625B6AFD514C08765C27CAAE4BD1B6 (void);
// 0x00000206 System.Void System.Uri::ParseRemaining()
extern void Uri_ParseRemaining_mBAE0F9850CD84965B3793B17444C677D77D58774 (void);
// 0x00000207 System.UInt16 System.Uri::ParseSchemeCheckImplicitFile(System.Char*,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser&)
extern void Uri_ParseSchemeCheckImplicitFile_m92A658AE6C04E038058AD8E9581A41B06B6D6243 (void);
// 0x00000208 System.Boolean System.Uri::CheckKnownSchemes(System.Int64*,System.UInt16,System.UriParser&)
extern void Uri_CheckKnownSchemes_mCA95AE251E7C9208570543B446385BCF2C727E8D (void);
// 0x00000209 System.ParsingError System.Uri::CheckSchemeSyntax(System.Char*,System.UInt16,System.UriParser&)
extern void Uri_CheckSchemeSyntax_m1181D9BEA35D9D22852FD2FE815CABB267BA5A8F (void);
// 0x0000020A System.UInt16 System.Uri::CheckAuthorityHelper(System.Char*,System.UInt16,System.UInt16,System.ParsingError&,System.Uri/Flags&,System.UriParser,System.String&)
extern void Uri_CheckAuthorityHelper_m5046CE781115A54CAE3ACD2C03987F526A761387 (void);
// 0x0000020B System.Void System.Uri::CheckAuthorityHelperHandleDnsIri(System.Char*,System.UInt16,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.String,System.Uri/Flags&,System.Boolean&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleDnsIri_m366E36029D4C9A00C0F216055B15F5E4805AED28 (void);
// 0x0000020C System.Void System.Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*,System.Int32,System.Int32,System.Boolean,System.Boolean,System.UriParser,System.Uri/Flags&,System.String&,System.ParsingError&)
extern void Uri_CheckAuthorityHelperHandleAnyHostIri_m76FEA31E3FEDF3D1614987C6484ECF15022AE9D8 (void);
// 0x0000020D System.Void System.Uri::FindEndOfComponent(System.String,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_mF276ABD008291C1FDC4B433A2F274058D06D8A6B (void);
// 0x0000020E System.Void System.Uri::FindEndOfComponent(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_FindEndOfComponent_mDCDF860C405E9F31F7CFE9AFFE7C096812697AEF (void);
// 0x0000020F System.Uri/Check System.Uri::CheckCanonical(System.Char*,System.UInt16&,System.UInt16,System.Char)
extern void Uri_CheckCanonical_mED3910E55213D1DFEAA5B33079E3A89D369B10B6 (void);
// 0x00000210 System.Char[] System.Uri::GetCanonicalPath(System.Char[],System.Int32&,System.UriFormat)
extern void Uri_GetCanonicalPath_mDE02BFA56EDD09479DDB2A5A50F6DF5210CA73F2 (void);
// 0x00000211 System.Void System.Uri::UnescapeOnly(System.Char*,System.Int32,System.Int32&,System.Char,System.Char,System.Char)
extern void Uri_UnescapeOnly_mB8F87981CDD4CFBFCD97EE668FF281CE26453F21 (void);
// 0x00000212 System.Char[] System.Uri::Compress(System.Char[],System.UInt16,System.Int32&,System.UriParser)
extern void Uri_Compress_m02224082A9665F07D35AB6EB6E3198642F9E7BCF (void);
// 0x00000213 System.Int32 System.Uri::CalculateCaseInsensitiveHashCode(System.String)
extern void Uri_CalculateCaseInsensitiveHashCode_m634FFDF8FCD81DECCB87161B153D1093C0A6FCE4 (void);
// 0x00000214 System.String System.Uri::CombineUri(System.Uri,System.String,System.UriFormat)
extern void Uri_CombineUri_m77B7B8B856CF8100E51250247930963E7C544F91 (void);
// 0x00000215 System.Boolean System.Uri::IsLWS(System.Char)
extern void Uri_IsLWS_m7A9F3B969CCEE56B9F98E40F1903C737DA7DF0D6 (void);
// 0x00000216 System.Boolean System.Uri::IsAsciiLetter(System.Char)
extern void Uri_IsAsciiLetter_m93435A20DF4DEE153B87B26D07B9963F1BF4F373 (void);
// 0x00000217 System.Boolean System.Uri::IsAsciiLetterOrDigit(System.Char)
extern void Uri_IsAsciiLetterOrDigit_mEBA81E735141504B5804F0B3C94EC39B24AF8661 (void);
// 0x00000218 System.Boolean System.Uri::IsBidiControlCharacter(System.Char)
extern void Uri_IsBidiControlCharacter_mB14EA5816A434B7CE382EB9ACBD1432916EC341D (void);
// 0x00000219 System.String System.Uri::StripBidiControlCharacter(System.Char*,System.Int32,System.Int32)
extern void Uri_StripBidiControlCharacter_m49D782826401F99D943C1AD76A75125879FF332F (void);
// 0x0000021A System.Void System.Uri::CreateThis(System.String,System.Boolean,System.UriKind)
extern void Uri_CreateThis_mCB3DC849A426498E9CCD249850CBC69C9D67D864 (void);
// 0x0000021B System.Void System.Uri::InitializeUri(System.ParsingError,System.UriKind,System.UriFormatException&)
extern void Uri_InitializeUri_m5D99BD8533F3FAAD479B1193505B5B19B8C2F2DE (void);
// 0x0000021C System.Boolean System.Uri::CheckForConfigLoad(System.String)
extern void Uri_CheckForConfigLoad_m13002EFBBFD437183ED0A7FCBE5681C510996B0F (void);
// 0x0000021D System.Boolean System.Uri::CheckForUnicode(System.String)
extern void Uri_CheckForUnicode_m78E4938E82EE352BD5D8493AE0314224BC2543CD (void);
// 0x0000021E System.Boolean System.Uri::CheckForEscapedUnreserved(System.String)
extern void Uri_CheckForEscapedUnreserved_mFE708A44EC74C7E773B96B82CD9A5DF25EF97D4A (void);
// 0x0000021F System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern void Uri_TryCreate_mEEB6736FEDAF52AAE36ACC1EA1EC8CEBB7C52DAB (void);
// 0x00000220 System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
extern void Uri_GetComponents_m0346CA8037531DE1FC630775E0BD1F5D1E7920B6 (void);
// 0x00000221 System.String System.Uri::UnescapeDataString(System.String)
extern void Uri_UnescapeDataString_mE1F40FC5CA3FF03DEE9EB01E3D8BD502D36A284D (void);
// 0x00000222 System.String System.Uri::EscapeUnescapeIri(System.String,System.Int32,System.Int32,System.UriComponents)
extern void Uri_EscapeUnescapeIri_mDE5E4BAE74E2C2373AD186732FEE7AD6E0EA7180 (void);
// 0x00000223 System.Void System.Uri::.ctor(System.Uri/Flags,System.UriParser,System.String)
extern void Uri__ctor_m4605489523A7A973459720C1BBE4039FD10557CD (void);
// 0x00000224 System.Uri System.Uri::CreateHelper(System.String,System.Boolean,System.UriKind,System.UriFormatException&)
extern void Uri_CreateHelper_m024137C47351CA9959E4AC66F9443AEEE87D89C0 (void);
// 0x00000225 System.Uri System.Uri::ResolveHelper(System.Uri,System.Uri,System.String&,System.Boolean&,System.UriFormatException&)
extern void Uri_ResolveHelper_mEDF1549C3E9AC1CF6177DCF93B17D574411916BC (void);
// 0x00000226 System.String System.Uri::GetRelativeSerializationString(System.UriFormat)
extern void Uri_GetRelativeSerializationString_m5D0CD02E255BB96532F056BB382CF7D74D62BE58 (void);
// 0x00000227 System.String System.Uri::GetComponentsHelper(System.UriComponents,System.UriFormat)
extern void Uri_GetComponentsHelper_m28B0D80FD94A40685C0F70652AB26755C457B2D3 (void);
// 0x00000228 System.Void System.Uri::CreateThisFromUri(System.Uri)
extern void Uri_CreateThisFromUri_m9A4AE7CD70F7EDE9154634057EBE600E74A5D544 (void);
// 0x00000229 System.Void System.Uri::.cctor()
extern void Uri__cctor_m2B8179039C09C64936CF8262E3EF4A7E7C2F90F2 (void);
// 0x0000022A System.Void System.Uri/UriInfo::.ctor()
extern void UriInfo__ctor_m24EFE7B4E03C9FFB8B797770D626680947C87D98 (void);
// 0x0000022B System.Void System.Uri/MoreInfo::.ctor()
extern void MoreInfo__ctor_mFE29F028646C12EDCAF7F0F78F9A85D52C10B83C (void);
// 0x0000022C System.Void System.UriFormatException::.ctor()
extern void UriFormatException__ctor_mBA5F8C423C09F600B1AF895521C892EA356CA424 (void);
// 0x0000022D System.Void System.UriFormatException::.ctor(System.String)
extern void UriFormatException__ctor_mE1D46962CC168EB07B59D1265F5734A8F587567D (void);
// 0x0000022E System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException__ctor_mE7F5B073E9F9DB5F22536C54959BEB0D1E7DA1D5 (void);
// 0x0000022F System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_mED4C06AC35B7F94955ECC0D8F00383888C1127DC (void);
// 0x00000230 System.Char[] System.UriHelper::EscapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Boolean,System.Char,System.Char,System.Char)
extern void UriHelper_EscapeString_mF0077A016F05127923308DF7E7E99BD7B9837E8B (void);
// 0x00000231 System.Char[] System.UriHelper::EnsureDestinationSize(System.Char*,System.Char[],System.Int32,System.Int16,System.Int16,System.Int32&,System.Int32)
extern void UriHelper_EnsureDestinationSize_m64F4907D0411AAAD1C05E0AD0D2EB120DCBA9217 (void);
// 0x00000232 System.Char[] System.UriHelper::UnescapeString(System.String,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mC172F713349E3D22985A92BC4F5B51D0BCEE61AF (void);
// 0x00000233 System.Char[] System.UriHelper::UnescapeString(System.Char*,System.Int32,System.Int32,System.Char[],System.Int32&,System.Char,System.Char,System.Char,System.UnescapeMode,System.UriParser,System.Boolean)
extern void UriHelper_UnescapeString_mD4815AEAF34E25D31AA4BB4A76B88055F0A49E89 (void);
// 0x00000234 System.Void System.UriHelper::MatchUTF8Sequence(System.Char*,System.Char[],System.Int32&,System.Char[],System.Int32,System.Byte[],System.Int32,System.Boolean,System.Boolean)
extern void UriHelper_MatchUTF8Sequence_m4835D9BB77C2701643B14D6FFD3D7057F8C9007F (void);
// 0x00000235 System.Void System.UriHelper::EscapeAsciiChar(System.Char,System.Char[],System.Int32&)
extern void UriHelper_EscapeAsciiChar_mFD7DE796BD53CBD2B1E73080FE0346D37F358902 (void);
// 0x00000236 System.Char System.UriHelper::EscapedAscii(System.Char,System.Char)
extern void UriHelper_EscapedAscii_m06D556717795E649EBBB30E4CBCF3D221C1FEB78 (void);
// 0x00000237 System.Boolean System.UriHelper::IsNotSafeForUnescape(System.Char)
extern void UriHelper_IsNotSafeForUnescape_m1D0461E7C5A3CFBD7A2A7F7322B66BC68CCE741D (void);
// 0x00000238 System.Boolean System.UriHelper::IsReservedUnreservedOrHash(System.Char)
extern void UriHelper_IsReservedUnreservedOrHash_m3D7256DABA7F540F8D379FC1D1C54F1C63E46059 (void);
// 0x00000239 System.Boolean System.UriHelper::IsUnreserved(System.Char)
extern void UriHelper_IsUnreserved_mAADC7DCEEA864AFB49311696ABBDD76811FAAE48 (void);
// 0x0000023A System.Boolean System.UriHelper::Is3986Unreserved(System.Char)
extern void UriHelper_Is3986Unreserved_m3799F2ADA8C63DDB4995F82B974C8EC1DEEBA76A (void);
// 0x0000023B System.Void System.UriHelper::.cctor()
extern void UriHelper__cctor_m9537B8AAAA1D6EF77D29A179EC79F5511C662F27 (void);
// 0x0000023C System.String System.UriParser::get_SchemeName()
extern void UriParser_get_SchemeName_mFC9EFD71512A64E640866792CCB7DAC5187DE9F1 (void);
// 0x0000023D System.Int32 System.UriParser::get_DefaultPort()
extern void UriParser_get_DefaultPort_m050510870CCD4DD08DF7E98E2AF3D616446AD99D (void);
// 0x0000023E System.UriParser System.UriParser::OnNewUri()
extern void UriParser_OnNewUri_m7D55337A7A9B6B67FB0AD7CA96F472751EF5A897 (void);
// 0x0000023F System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InitializeAndValidate_m3E31D86FEE445E313BB7141F760626301767A0E0 (void);
// 0x00000240 System.String System.UriParser::Resolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_Resolve_mF21D3AA42AB1EC2B173617D76E4041EB3481D979 (void);
// 0x00000241 System.String System.UriParser::GetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_GetComponents_m8A226F43638FA7CD135A651CDE3D4E475E8FC181 (void);
// 0x00000242 System.Boolean System.UriParser::get_ShouldUseLegacyV2Quirks()
extern void UriParser_get_ShouldUseLegacyV2Quirks_mD4C8DF67677ACCCC3B5E026099ECC0BDA24D96DD (void);
// 0x00000243 System.Void System.UriParser::.cctor()
extern void UriParser__cctor_m00C2855D5C8C07790C5627BBB90AC84A7E8B6BC2 (void);
// 0x00000244 System.UriSyntaxFlags System.UriParser::get_Flags()
extern void UriParser_get_Flags_mBCF4C3E94892F00B6E8856BFED1B650FB6A0C039 (void);
// 0x00000245 System.Boolean System.UriParser::NotAny(System.UriSyntaxFlags)
extern void UriParser_NotAny_mC998A35DC290F35FFAFFB6A8B66C7B881F2559D3 (void);
// 0x00000246 System.Boolean System.UriParser::InFact(System.UriSyntaxFlags)
extern void UriParser_InFact_mDD42FA932B6830D99AA04C2AE7875BA5067C86F3 (void);
// 0x00000247 System.Boolean System.UriParser::IsAllSet(System.UriSyntaxFlags)
extern void UriParser_IsAllSet_m74BEC412DC8AF3B1A33E11964EBB3164D9D8C77E (void);
// 0x00000248 System.Boolean System.UriParser::IsFullMatch(System.UriSyntaxFlags,System.UriSyntaxFlags)
extern void UriParser_IsFullMatch_m7B5F47A62FA721E550C5439FAA4C6AFAC34EB23E (void);
// 0x00000249 System.Void System.UriParser::.ctor(System.UriSyntaxFlags)
extern void UriParser__ctor_mAF168F2B88BC5301B722C1BAAD45E381FBA22E3D (void);
// 0x0000024A System.UriParser System.UriParser::FindOrFetchAsUnknownV1Syntax(System.String)
extern void UriParser_FindOrFetchAsUnknownV1Syntax_m3A57CA15FE27DC7982F186E8321B810B56EBD9AD (void);
// 0x0000024B System.Boolean System.UriParser::get_IsSimple()
extern void UriParser_get_IsSimple_mDDB03A5F6EEE6E92926A386655E5BBD553719B9C (void);
// 0x0000024C System.UriParser System.UriParser::InternalOnNewUri()
extern void UriParser_InternalOnNewUri_m7D55F5CD59A3B9BF57BC68F715A27CC1A44566CA (void);
// 0x0000024D System.Void System.UriParser::InternalValidate(System.Uri,System.UriFormatException&)
extern void UriParser_InternalValidate_mF2FEB0E76E48B621EB2058FBE7DCC6A42A1681E2 (void);
// 0x0000024E System.String System.UriParser::InternalResolve(System.Uri,System.Uri,System.UriFormatException&)
extern void UriParser_InternalResolve_m2A027789CB5105E32B09810E81810E8E35DD1F26 (void);
// 0x0000024F System.String System.UriParser::InternalGetComponents(System.Uri,System.UriComponents,System.UriFormat)
extern void UriParser_InternalGetComponents_mFD4B211C71E0506AE4E4E99D92ECAF1780CE4674 (void);
// 0x00000250 System.Void System.UriParser/BuiltInUriParser::.ctor(System.String,System.Int32,System.UriSyntaxFlags)
extern void BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C (void);
// 0x00000251 System.String System.DomainNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void DomainNameHelper_ParseCanonicalName_mFE738FD1237E2D9D9A1B27BA73F58B1689D451E4 (void);
// 0x00000252 System.Boolean System.DomainNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValid_mE9672A824F71E32116358C5FA029789855A4B461 (void);
// 0x00000253 System.Boolean System.DomainNameHelper::IsValidByIri(System.Char*,System.UInt16,System.Int32&,System.Boolean&,System.Boolean)
extern void DomainNameHelper_IsValidByIri_m13E2A6D9EBD42326C096F2423DBB0014763D47BF (void);
// 0x00000254 System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_IdnEquivalent_m439593BAF7C6C801F577E7C27B0C4FBB1772E49F (void);
// 0x00000255 System.String System.DomainNameHelper::IdnEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.String&)
extern void DomainNameHelper_IdnEquivalent_m459BFF3040F8E6BFE1CE1C6432A1343A2ECF2F57 (void);
// 0x00000256 System.Boolean System.DomainNameHelper::IsIdnAce(System.String,System.Int32)
extern void DomainNameHelper_IsIdnAce_m2231C778C4CCE141ACDC412737642CC365307445 (void);
// 0x00000257 System.Boolean System.DomainNameHelper::IsIdnAce(System.Char*,System.Int32)
extern void DomainNameHelper_IsIdnAce_m9193B7D824FC6965820FCE980FEE3E0B40EA94B8 (void);
// 0x00000258 System.String System.DomainNameHelper::UnicodeEquivalent(System.String,System.Char*,System.Int32,System.Int32)
extern void DomainNameHelper_UnicodeEquivalent_mA80E5FF3AD6AFBB9FC257ED1C4F0D31C8F0EFEC3 (void);
// 0x00000259 System.String System.DomainNameHelper::UnicodeEquivalent(System.Char*,System.Int32,System.Int32,System.Boolean&,System.Boolean&)
extern void DomainNameHelper_UnicodeEquivalent_mD5A7A659B82F1FBF7ABF30009117CFBF8BC4D55F (void);
// 0x0000025A System.Boolean System.DomainNameHelper::IsASCIILetterOrDigit(System.Char,System.Boolean&)
extern void DomainNameHelper_IsASCIILetterOrDigit_mD3B0B9BD4573FADEF6AC7330A5EC58C220455F01 (void);
// 0x0000025B System.Boolean System.DomainNameHelper::IsValidDomainLabelCharacter(System.Char,System.Boolean&)
extern void DomainNameHelper_IsValidDomainLabelCharacter_mF6DEB20D9D03A8728B1C58006C40D6603B7D61D1 (void);
// 0x0000025C System.String System.IPv4AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void IPv4AddressHelper_ParseCanonicalName_m2A8C35045CE02D6FC2C4251F239D1C0074E0E813 (void);
// 0x0000025D System.Int32 System.IPv4AddressHelper::ParseHostNumber(System.String,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseHostNumber_m798FB6828971F70775D1125565A1D1025C897F14 (void);
// 0x0000025E System.Boolean System.IPv4AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValid_mD96D91E0F3830414F4601A4521E71DE832A45843 (void);
// 0x0000025F System.Boolean System.IPv4AddressHelper::IsValidCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean,System.Boolean)
extern void IPv4AddressHelper_IsValidCanonical_mC27E31F1F043D68BC52719892D34EDDC7851B120 (void);
// 0x00000260 System.Int64 System.IPv4AddressHelper::ParseNonCanonical(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv4AddressHelper_ParseNonCanonical_mDCD1CD7FB85C4FFBF3070B1435A0D632C1A7B97E (void);
// 0x00000261 System.Boolean System.IPv4AddressHelper::Parse(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_Parse_m08110623FAC14806376148D7C16AB95A428EA6CF (void);
// 0x00000262 System.Boolean System.IPv4AddressHelper::ParseCanonical(System.String,System.Byte*,System.Int32,System.Int32)
extern void IPv4AddressHelper_ParseCanonical_m9D4552558C934E373D188DDA0BC1D1DEF5A62C33 (void);
// 0x00000263 System.String System.IPv6AddressHelper::ParseCanonicalName(System.String,System.Int32,System.Boolean&,System.String&)
extern void IPv6AddressHelper_ParseCanonicalName_m3944530A7B686031653F97824EF712424E0BEE14 (void);
// 0x00000264 System.String System.IPv6AddressHelper::CreateCanonicalName(System.UInt16*)
extern void IPv6AddressHelper_CreateCanonicalName_m0B1C201DFADBEB58869E0BE8BFA967EEE64B096A (void);
// 0x00000265 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.UInt16*)
extern void IPv6AddressHelper_FindCompressionRange_mE70B131DDA05D3059325246A5AB7F6029B6EF6BD (void);
// 0x00000266 System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.UInt16*)
extern void IPv6AddressHelper_ShouldHaveIpv4Embedded_m262634E9099141536C00213C1CFC123665A641DE (void);
// 0x00000267 System.Boolean System.IPv6AddressHelper::InternalIsValid(System.Char*,System.Int32,System.Int32&,System.Boolean)
extern void IPv6AddressHelper_InternalIsValid_m3BD7E7524455146D4464037DA3B65530E547AB7A (void);
// 0x00000268 System.Boolean System.IPv6AddressHelper::IsValid(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValid_m2383F1A867665B04A4F2B8D82FF2B62BE51C2289 (void);
// 0x00000269 System.Boolean System.IPv6AddressHelper::IsValidStrict(System.Char*,System.Int32,System.Int32&)
extern void IPv6AddressHelper_IsValidStrict_m4D3701E2EE4840DA681BB9D9BDACDDDBAE80A575 (void);
// 0x0000026A System.Boolean System.IPv6AddressHelper::Parse(System.String,System.UInt16*,System.Int32,System.String&)
extern void IPv6AddressHelper_Parse_m36CE2F56465C4F9F7791E80E954C7C0ECBD16DFB (void);
// 0x0000026B System.String System.UncNameHelper::ParseCanonicalName(System.String,System.Int32,System.Int32,System.Boolean&)
extern void UncNameHelper_ParseCanonicalName_mCBE64015FD1B6B4829CEAA89625C1D44E280E37E (void);
// 0x0000026C System.Boolean System.UncNameHelper::IsValid(System.Char*,System.UInt16,System.Int32&,System.Boolean)
extern void UncNameHelper_IsValid_m4055361D79684EE7B098C055B2E9068EE06F1EF6 (void);
// 0x0000026D System.Void System.IOAsyncCallback::.ctor(System.Object,System.IntPtr)
extern void IOAsyncCallback__ctor_m1010BF5234B0ECC2FEB54105BA15B313633C1985 (void);
// 0x0000026E System.Void System.IOAsyncCallback::Invoke(System.IOAsyncResult)
extern void IOAsyncCallback_Invoke_mB95F7E7F0E8326CE5364A30F42FC1073B0AB2D8B (void);
// 0x0000026F System.IAsyncResult System.IOAsyncCallback::BeginInvoke(System.IOAsyncResult,System.AsyncCallback,System.Object)
extern void IOAsyncCallback_BeginInvoke_mB8CACF8990B91DF4A695E597CEBE4BA09354C32C (void);
// 0x00000270 System.Void System.IOAsyncCallback::EndInvoke(System.IAsyncResult)
extern void IOAsyncCallback_EndInvoke_m397237D5497A9029CC3FACE692D11BDC1558A727 (void);
// 0x00000271 System.Void System.IOAsyncResult::.ctor()
extern void IOAsyncResult__ctor_m757FC526BBE4506EE956B2D919E99270B6C567F9 (void);
// 0x00000272 System.Void System.IOAsyncResult::Init(System.AsyncCallback,System.Object)
extern void IOAsyncResult_Init_m6F5F39693CDDA46556EDAFFCFBDC229AFDAE8303 (void);
// 0x00000273 System.Void System.IOAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void IOAsyncResult__ctor_m95A3D285F38AF74293A4956A6232F6B11DB8CFB9 (void);
// 0x00000274 System.AsyncCallback System.IOAsyncResult::get_AsyncCallback()
extern void IOAsyncResult_get_AsyncCallback_m1D3A0A3BCC3432B64968E7DC4D3A2ECAA6ABDB60 (void);
// 0x00000275 System.Object System.IOAsyncResult::get_AsyncState()
extern void IOAsyncResult_get_AsyncState_m9D507541D18B17FFF72F90D8DBB3F301213EA4A7 (void);
// 0x00000276 System.Threading.WaitHandle System.IOAsyncResult::get_AsyncWaitHandle()
extern void IOAsyncResult_get_AsyncWaitHandle_mBB8E187CEE0D781E6CC1C0E4576A82D02936B9C5 (void);
// 0x00000277 System.Boolean System.IOAsyncResult::get_CompletedSynchronously()
extern void IOAsyncResult_get_CompletedSynchronously_m55D4C57A46BF019D4FAF05ABE30E6EEEA6A78277 (void);
// 0x00000278 System.Void System.IOAsyncResult::set_CompletedSynchronously(System.Boolean)
extern void IOAsyncResult_set_CompletedSynchronously_mF2CA3BB7E351A84EEC942B66816756361616EA75 (void);
// 0x00000279 System.Boolean System.IOAsyncResult::get_IsCompleted()
extern void IOAsyncResult_get_IsCompleted_m15FEFA884BA3ACC35503E54F08E209AC5A94BADF (void);
// 0x0000027A System.Void System.IOAsyncResult::set_IsCompleted(System.Boolean)
extern void IOAsyncResult_set_IsCompleted_mEC1108082A9F409122195D340A5EC901D67F013E (void);
// 0x0000027B System.Void System.IOAsyncResult::CompleteDisposed()
// 0x0000027C System.Void System.IOSelectorJob::.ctor(System.IOOperation,System.IOAsyncCallback,System.IOAsyncResult)
extern void IOSelectorJob__ctor_m2E68791B3E12177FE5236874FA9BDBE1CA97C676 (void);
// 0x0000027D System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_mF6591C2577197BFD98B2423F8696E5816191FF3F (void);
// 0x0000027E System.Void System.IOSelectorJob::System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException)
extern void IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m3BB2FE95A7033F6994973BF8814C16F4B163A0D6 (void);
// 0x0000027F System.Void System.IOSelectorJob::MarkDisposed()
extern void IOSelectorJob_MarkDisposed_m2B168E38A597550A3605ABF0032F67967CD43077 (void);
// 0x00000280 System.Void System.IOSelector::Add(System.IntPtr,System.IOSelectorJob)
extern void IOSelector_Add_m43E2807BB2C9AE5ACB3ECDBC4E7BA2FA967504D1 (void);
// 0x00000281 System.Int32 System.Platform::uname(System.IntPtr)
extern void Platform_uname_m0769828FE0BC855E1DE4129D7EBE09E999D7AB7D (void);
// 0x00000282 System.Void System.Platform::CheckOS()
extern void Platform_CheckOS_mE140C06A839F2EA49C9A0FE795A85311E283CC45 (void);
// 0x00000283 System.Boolean System.Platform::get_IsMacOS()
extern void Platform_get_IsMacOS_m7E1B4DAEFA519F65C50D16CC5DEA7A9FA0EE4D77 (void);
// 0x00000284 System.Void System.UriTypeConverter::.ctor()
extern void UriTypeConverter__ctor_m1CAEEF1C615B28212B83C76D892938E0A77D3A64 (void);
// 0x00000285 System.Void System.Text.RegularExpressions.Regex::.ctor()
extern void Regex__ctor_mFDE4B6A423C15AA60BF9FEC7D4D7DFD4657D7C6E (void);
// 0x00000286 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern void Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C (void);
// 0x00000287 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex__ctor_mEF4515C4C44DF8BE410F388C82CC679D743FB5CD (void);
// 0x00000288 System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan,System.Boolean)
extern void Regex__ctor_m87918FB2A856E264A492D2A2B4B412BE4E2370BB (void);
// 0x00000289 System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex__ctor_mF11825F6E24D7D780BD34C74C96392DEC3602A5D (void);
// 0x0000028A System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m95B0E2523A72DF6AC56DEA7CDA286F771E06B0FD (void);
// 0x0000028B System.Void System.Text.RegularExpressions.Regex::ValidateMatchTimeout(System.TimeSpan)
extern void Regex_ValidateMatchTimeout_m71FE7188780DEAD57093B7345CCC50D0159218BE (void);
// 0x0000028C System.TimeSpan System.Text.RegularExpressions.Regex::InitDefaultMatchTimeout()
extern void Regex_InitDefaultMatchTimeout_mC91736B02BD12B92CBD93C329E7A8233CD0B9DA4 (void);
// 0x0000028D System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern void Regex_get_Options_m823A30690EEA63798DB8497F3E9CF062412B8653 (void);
// 0x0000028E System.TimeSpan System.Text.RegularExpressions.Regex::get_MatchTimeout()
extern void Regex_get_MatchTimeout_mD484D1CF0B6BF8516A08991D1387761CAE2340D6 (void);
// 0x0000028F System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern void Regex_get_RightToLeft_m546BF531C94563A11427CD24367525462CDB4509 (void);
// 0x00000290 System.String System.Text.RegularExpressions.Regex::ToString()
extern void Regex_ToString_mF967EF5E8BD74C3692379B8436AB8D3C5963FA75 (void);
// 0x00000291 System.String System.Text.RegularExpressions.Regex::GroupNameFromNumber(System.Int32)
extern void Regex_GroupNameFromNumber_mDA7668FB37424BF0F6CA16764F174A6647270FFA (void);
// 0x00000292 System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern void Regex_GroupNumberFromName_m770A1CA23339D6F88A539C08A6B18274780E0393 (void);
// 0x00000293 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern void Regex_IsMatch_m3C44A8D92E43EA8CC8D623ECC394B27F09E2D5DA (void);
// 0x00000294 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_IsMatch_m90348BB44AD120A322F411001522DB0758A6678B (void);
// 0x00000295 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern void Regex_IsMatch_m79684C4D2CE6C5495BCCE9A32AC029E1E5950B7C (void);
// 0x00000296 System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern void Regex_IsMatch_m2FB867817B341A5FA3E64A41F31820C9658F22A5 (void);
// 0x00000297 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern void Regex_Match_mA36A33D32F895CE84957DC7DA82E2CD45EF19EEA (void);
// 0x00000298 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern void Regex_Matches_mD7433E63F67A83DAFE4EFC4041ED572BD3790165 (void);
// 0x00000299 System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_Matches_m8F969BF2F5491F924A581C69185C38C3C6FE021F (void);
// 0x0000029A System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern void Regex_Matches_m6660280F055E0F746058C002B718CAB701CF4516 (void);
// 0x0000029B System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern void Regex_Matches_mBC92CBE041861471127A1764BB4318DCD2C62F26 (void);
// 0x0000029C System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
extern void Regex_Split_mACE8B6D2A871185FE109E9D131104FF28E743C33 (void);
// 0x0000029D System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
extern void Regex_Split_mB29A9BB688113C29635F3AC0C1B6E9754073CDF7 (void);
// 0x0000029E System.String[] System.Text.RegularExpressions.Regex::Split(System.String)
extern void Regex_Split_m5E86F18B64F94BC89B5DCFEB05FDA1244344F8D1 (void);
// 0x0000029F System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.Int32,System.Int32)
extern void Regex_Split_mA1DD4EB92F75C783439B5FE691E5323865BA86F3 (void);
// 0x000002A0 System.Void System.Text.RegularExpressions.Regex::InitializeReferences()
extern void Regex_InitializeReferences_m2CD000C1AFAA8B214F32D989C7D116B684A31840 (void);
// 0x000002A1 System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Run(System.Boolean,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Regex_Run_m74FB5EF178DF43F88B9058B94939F557479B93FC (void);
// 0x000002A2 System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::LookupCachedAndUpdate(System.String)
extern void Regex_LookupCachedAndUpdate_m88CA03797C5ED796BD5E1319DF6B1B6B6FCE6C0D (void);
// 0x000002A3 System.Text.RegularExpressions.CachedCodeEntry System.Text.RegularExpressions.Regex::CacheCode(System.String)
extern void Regex_CacheCode_m68F93FF3B918776D190D4DB807A3323691C77F0A (void);
// 0x000002A4 System.Boolean System.Text.RegularExpressions.Regex::UseOptionR()
extern void Regex_UseOptionR_m84945EDBEDCD61DBCEB691C929CA28F4B0AF4B49 (void);
// 0x000002A5 System.Boolean System.Text.RegularExpressions.Regex::UseOptionInvariant()
extern void Regex_UseOptionInvariant_m0CA185DBDB15932BB8A8B4F53EB8ACECEC006566 (void);
// 0x000002A6 System.Void System.Text.RegularExpressions.Regex::.cctor()
extern void Regex__cctor_m86CE9B8D0FF5F2B54D4FF27D2213A1E6917477DF (void);
// 0x000002A7 System.Void System.Text.RegularExpressions.CachedCodeEntry::.ctor(System.String,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.Text.RegularExpressions.SharedReference)
extern void CachedCodeEntry__ctor_m78BCA6060E7D83B172F998AF60D17FB41BE703B8 (void);
// 0x000002A8 System.Object System.Text.RegularExpressions.ExclusiveReference::Get()
extern void ExclusiveReference_Get_mE79B077388AFBD19A4524E630701783E7DCE61E4 (void);
// 0x000002A9 System.Void System.Text.RegularExpressions.ExclusiveReference::Release(System.Object)
extern void ExclusiveReference_Release_m9A1577138872106EA54A04EA4AB77F710CEDE336 (void);
// 0x000002AA System.Void System.Text.RegularExpressions.ExclusiveReference::.ctor()
extern void ExclusiveReference__ctor_m0427943C75CBB283EF26034339E3D412A080B5D7 (void);
// 0x000002AB System.Void System.Text.RegularExpressions.SharedReference::.ctor()
extern void SharedReference__ctor_m48E749BC646BEC89282B8F336325D42DE48CFC81 (void);
// 0x000002AC System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
extern void RegexBoyerMoore__ctor_m39674FB18BB75DD891AAE3781FDA0CCDDEBC2F8C (void);
// 0x000002AD System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::MatchPattern(System.String,System.Int32)
extern void RegexBoyerMoore_MatchPattern_m41D57E11972B2142649662886DA145AFE396F602 (void);
// 0x000002AE System.Boolean System.Text.RegularExpressions.RegexBoyerMoore::IsMatch(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_IsMatch_m820D06ED51C062451AFAF22682D2EB06C8DFABD9 (void);
// 0x000002AF System.Int32 System.Text.RegularExpressions.RegexBoyerMoore::Scan(System.String,System.Int32,System.Int32,System.Int32)
extern void RegexBoyerMoore_Scan_m204A42056131A694B6D31FC69563355788CABD67 (void);
// 0x000002B0 System.String System.Text.RegularExpressions.RegexBoyerMoore::ToString()
extern void RegexBoyerMoore_ToString_mB0A62E68E8A3CAC5CE3AC45E1C54FA72DFB626F6 (void);
// 0x000002B1 System.Void System.Text.RegularExpressions.Capture::.ctor(System.String,System.Int32,System.Int32)
extern void Capture__ctor_m6CC8A5385C7BD6B8AE63F9812293EC3252A65B3B (void);
// 0x000002B2 System.Int32 System.Text.RegularExpressions.Capture::get_Index()
extern void Capture_get_Index_m46BE6FFC6E8474F55B0504269903F287C45C4B31 (void);
// 0x000002B3 System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern void Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94 (void);
// 0x000002B4 System.String System.Text.RegularExpressions.Capture::get_Value()
extern void Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C (void);
// 0x000002B5 System.String System.Text.RegularExpressions.Capture::ToString()
extern void Capture_ToString_mD49A28CAD5727E8F629643EDE0C6BAB476BA639E (void);
// 0x000002B6 System.Void System.Text.RegularExpressions.Capture::.ctor()
extern void Capture__ctor_m3ED807279C93FFCE8BE4EAF447DA01E62EF93D7B (void);
// 0x000002B7 System.Void System.Text.RegularExpressions.CaptureCollection::.ctor(System.Text.RegularExpressions.Group)
extern void CaptureCollection__ctor_m01C3DD351537D287D2ED99B7E8D0BC097F9C73BE (void);
// 0x000002B8 System.Object System.Text.RegularExpressions.CaptureCollection::get_SyncRoot()
extern void CaptureCollection_get_SyncRoot_m9ABF11C6512C617D3675D4DEADBF3DEF82508B83 (void);
// 0x000002B9 System.Boolean System.Text.RegularExpressions.CaptureCollection::get_IsSynchronized()
extern void CaptureCollection_get_IsSynchronized_mD13199DC4806A69D7396FEF31F57177C5CBAE06C (void);
// 0x000002BA System.Int32 System.Text.RegularExpressions.CaptureCollection::get_Count()
extern void CaptureCollection_get_Count_m23E4D0EE1C878006553F7065AB77CB72147A1F50 (void);
// 0x000002BB System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::get_Item(System.Int32)
extern void CaptureCollection_get_Item_mD9CE0C1F3F1E0329409B5E7FB048264533722054 (void);
// 0x000002BC System.Void System.Text.RegularExpressions.CaptureCollection::CopyTo(System.Array,System.Int32)
extern void CaptureCollection_CopyTo_m6E065B3E70F6982CD53B8E4644D2D284FB33C36F (void);
// 0x000002BD System.Collections.IEnumerator System.Text.RegularExpressions.CaptureCollection::GetEnumerator()
extern void CaptureCollection_GetEnumerator_mB75C81A6E3B8224C667CD5FC1C8B5C5B7E2FCD03 (void);
// 0x000002BE System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureCollection::GetCapture(System.Int32)
extern void CaptureCollection_GetCapture_mEADF77754DFD5D699564C9C0CE4A3DA162AB620B (void);
// 0x000002BF System.Void System.Text.RegularExpressions.CaptureCollection::.ctor()
extern void CaptureCollection__ctor_m7CDC65BD8C8D56B84D324F56B1263A29E9B7F268 (void);
// 0x000002C0 System.Void System.Text.RegularExpressions.CaptureEnumerator::.ctor(System.Text.RegularExpressions.CaptureCollection)
extern void CaptureEnumerator__ctor_mAA9418C06B6BF091F30BE83BBAD7D5CF764258FB (void);
// 0x000002C1 System.Boolean System.Text.RegularExpressions.CaptureEnumerator::MoveNext()
extern void CaptureEnumerator_MoveNext_m9BF27BBD6361C1DD7AF7E0F3D9EA2421855916D4 (void);
// 0x000002C2 System.Object System.Text.RegularExpressions.CaptureEnumerator::get_Current()
extern void CaptureEnumerator_get_Current_m77963A5C0D5DFAFC80A3B2979E55B8DC60A854EC (void);
// 0x000002C3 System.Text.RegularExpressions.Capture System.Text.RegularExpressions.CaptureEnumerator::get_Capture()
extern void CaptureEnumerator_get_Capture_m392E86577C0832789F9D260B47BF1609129C356B (void);
// 0x000002C4 System.Void System.Text.RegularExpressions.CaptureEnumerator::Reset()
extern void CaptureEnumerator_Reset_m8035CE1B547C403D2AD3A8416961253F1EC2A422 (void);
// 0x000002C5 System.Void System.Text.RegularExpressions.RegexCharClass::.cctor()
extern void RegexCharClass__cctor_m5170E52D9864BA712125FB33F309FE9E37869EA8 (void);
// 0x000002C6 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor()
extern void RegexCharClass__ctor_mAA44510F3E5001A8612355B4FFB718D9DDC74264 (void);
// 0x000002C7 System.Void System.Text.RegularExpressions.RegexCharClass::.ctor(System.Boolean,System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>,System.Text.StringBuilder,System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass__ctor_mB05A6CC8015C5D545C639682454A524DE7E2EA97 (void);
// 0x000002C8 System.Boolean System.Text.RegularExpressions.RegexCharClass::get_CanMerge()
extern void RegexCharClass_get_CanMerge_mC27A4CF83CFBEF3741A3DB4F99ABA6DE76B57837 (void);
// 0x000002C9 System.Void System.Text.RegularExpressions.RegexCharClass::set_Negate(System.Boolean)
extern void RegexCharClass_set_Negate_mEB8659D83748A4DF28CDDFC3AC573A6504385E09 (void);
// 0x000002CA System.Void System.Text.RegularExpressions.RegexCharClass::AddChar(System.Char)
extern void RegexCharClass_AddChar_m4C4BFD42572978A9F98ADE75BE3811593957A9E3 (void);
// 0x000002CB System.Void System.Text.RegularExpressions.RegexCharClass::AddCharClass(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddCharClass_m0E5DD1105844AFB7CE45B5C801304B5C803FB5CA (void);
// 0x000002CC System.Void System.Text.RegularExpressions.RegexCharClass::AddSet(System.String)
extern void RegexCharClass_AddSet_mFFDE070E770BE967173D630AD50010C3397F7B97 (void);
// 0x000002CD System.Void System.Text.RegularExpressions.RegexCharClass::AddSubtraction(System.Text.RegularExpressions.RegexCharClass)
extern void RegexCharClass_AddSubtraction_m17E538235B02A1435BD43D4FE4501DA67AA35145 (void);
// 0x000002CE System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
extern void RegexCharClass_AddRange_mCFE9B670B3EBB13A5CDB694B1D1D6B1C0249D110 (void);
// 0x000002CF System.Void System.Text.RegularExpressions.RegexCharClass::AddCategoryFromName(System.String,System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddCategoryFromName_m9AD2D607E1E34A52CBC26FC38D468905C43A9202 (void);
// 0x000002D0 System.Void System.Text.RegularExpressions.RegexCharClass::AddCategory(System.String)
extern void RegexCharClass_AddCategory_m6A4625370DA8927DF5342275CB1F6155FC2BA255 (void);
// 0x000002D1 System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercase(System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercase_m01C1B11EB0B82E065276C7ECF60725886F59A07A (void);
// 0x000002D2 System.Void System.Text.RegularExpressions.RegexCharClass::AddLowercaseRange(System.Char,System.Char,System.Globalization.CultureInfo)
extern void RegexCharClass_AddLowercaseRange_mCDDE9661C9C300DFEB51A8FE36E2F790E3E75D75 (void);
// 0x000002D3 System.Void System.Text.RegularExpressions.RegexCharClass::AddWord(System.Boolean,System.Boolean)
extern void RegexCharClass_AddWord_m1D2553B878162B32B0548536AE4C3EE673041CA0 (void);
// 0x000002D4 System.Void System.Text.RegularExpressions.RegexCharClass::AddSpace(System.Boolean,System.Boolean)
extern void RegexCharClass_AddSpace_mC6557749D96EBD114BCB133D14887A29304196D8 (void);
// 0x000002D5 System.Void System.Text.RegularExpressions.RegexCharClass::AddDigit(System.Boolean,System.Boolean,System.String)
extern void RegexCharClass_AddDigit_mC4DE43D884E575729BB2E575DA5552989368F6B3 (void);
// 0x000002D6 System.Char System.Text.RegularExpressions.RegexCharClass::SingletonChar(System.String)
extern void RegexCharClass_SingletonChar_m01C15732FAD399460FF5BB449B8177A77CAB1DB9 (void);
// 0x000002D7 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsMergeable(System.String)
extern void RegexCharClass_IsMergeable_mB9A0CD8306728BAFA5460C7FD748A2A7AD4BA448 (void);
// 0x000002D8 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsEmpty(System.String)
extern void RegexCharClass_IsEmpty_mAD6C63FE25C4CF3E52A20185418925D12C4C07CF (void);
// 0x000002D9 System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingleton(System.String)
extern void RegexCharClass_IsSingleton_m89D3E8460B0E7020DB0ABA607AC2F76FB9A34F1A (void);
// 0x000002DA System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSingletonInverse(System.String)
extern void RegexCharClass_IsSingletonInverse_m3E75D541C85AD842B9EB80705D6869EDB3F6928D (void);
// 0x000002DB System.Boolean System.Text.RegularExpressions.RegexCharClass::IsSubtraction(System.String)
extern void RegexCharClass_IsSubtraction_m3C9EF97AFE7E4BCC24A2DF10834BF62279D7EE26 (void);
// 0x000002DC System.Boolean System.Text.RegularExpressions.RegexCharClass::IsNegated(System.String)
extern void RegexCharClass_IsNegated_m9CEDECE7EDA98ACD502E75783CA631A719DBC675 (void);
// 0x000002DD System.Boolean System.Text.RegularExpressions.RegexCharClass::IsECMAWordChar(System.Char)
extern void RegexCharClass_IsECMAWordChar_m6E7FC296DB816D89E3D6CF8672DCE6DFC519D741 (void);
// 0x000002DE System.Boolean System.Text.RegularExpressions.RegexCharClass::IsWordChar(System.Char)
extern void RegexCharClass_IsWordChar_m2DF03D32DAB403138E397CB05F45D37BD50EB18C (void);
// 0x000002DF System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
extern void RegexCharClass_CharInClass_m194AAA57BBBD30E78E70255D6F53FAFDB785EC0E (void);
// 0x000002E0 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassRecursive(System.Char,System.String,System.Int32)
extern void RegexCharClass_CharInClassRecursive_m5560DBADE1463FDEC38643C72CDF2FD5B3F69A5F (void);
// 0x000002E1 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClassInternal(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInClassInternal_m5D1634F64092E4BD9EB6427447F952983211A760 (void);
// 0x000002E2 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategory(System.Char,System.String,System.Int32,System.Int32,System.Int32)
extern void RegexCharClass_CharInCategory_mCDE20DF783F8D4E4403EC7F00F9C12E34D86C2DD (void);
// 0x000002E3 System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInCategoryGroup(System.Char,System.Globalization.UnicodeCategory,System.String,System.Int32&)
extern void RegexCharClass_CharInCategoryGroup_m28E498004F5EA6445C83F1B8EB4A776C210D30C5 (void);
// 0x000002E4 System.String System.Text.RegularExpressions.RegexCharClass::NegateCategory(System.String)
extern void RegexCharClass_NegateCategory_mF2E03FFFE79E427F39D9368013A334F5BD118E13 (void);
// 0x000002E5 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::Parse(System.String)
extern void RegexCharClass_Parse_mBC3780FFF0DDFB62CA2085746618E6C256E8D86C (void);
// 0x000002E6 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexCharClass::ParseRecursive(System.String,System.Int32)
extern void RegexCharClass_ParseRecursive_mF7E7DD4EB594C9C30A60E72CD3CFD4EC1D822CF5 (void);
// 0x000002E7 System.Int32 System.Text.RegularExpressions.RegexCharClass::RangeCount()
extern void RegexCharClass_RangeCount_mEACBB4BD08CE18A9C4F0C433A7D6C5726F563E2E (void);
// 0x000002E8 System.String System.Text.RegularExpressions.RegexCharClass::ToStringClass()
extern void RegexCharClass_ToStringClass_m7A760D96732A03D46C4060064B3FC58349D2B4D5 (void);
// 0x000002E9 System.Text.RegularExpressions.RegexCharClass/SingleRange System.Text.RegularExpressions.RegexCharClass::GetRangeAt(System.Int32)
extern void RegexCharClass_GetRangeAt_mE563FF8072DD9B4E1179F55416CCD7FC4EB2C4FC (void);
// 0x000002EA System.Void System.Text.RegularExpressions.RegexCharClass::Canonicalize()
extern void RegexCharClass_Canonicalize_m44EEFB16DB02E73C1E7280D15DAE98E50F4D6FA4 (void);
// 0x000002EB System.String System.Text.RegularExpressions.RegexCharClass::SetFromProperty(System.String,System.Boolean,System.String)
extern void RegexCharClass_SetFromProperty_mA33170AF599765B5FDE8611BED646A850FB2330E (void);
// 0x000002EC System.Void System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping::.ctor(System.Char,System.Char,System.Int32,System.Int32)
extern void LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187 (void);
// 0x000002ED System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
extern void SingleRangeComparer_Compare_mF2CAD555BAC4D9CBF6A8F90D829CB528BD7BCCC9 (void);
// 0x000002EE System.Void System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::.ctor()
extern void SingleRangeComparer__ctor_m9E44BF07F0F0C9E565E0BA050C1A26F496226BAD (void);
// 0x000002EF System.Void System.Text.RegularExpressions.RegexCharClass/SingleRange::.ctor(System.Char,System.Char)
extern void SingleRange__ctor_m4674722AFC97A111D2466AE2050C2E4E6E57303E (void);
// 0x000002F0 System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Text.RegularExpressions.RegexPrefix,System.Int32,System.Boolean)
extern void RegexCode__ctor_mBCB059D3E98AEA211794E89DDF99193231F298CA (void);
// 0x000002F1 System.Boolean System.Text.RegularExpressions.RegexCode::OpcodeBacktracks(System.Int32)
extern void RegexCode_OpcodeBacktracks_mDA23B91B55FE4991B168BF8E18F6DDDC7667B882 (void);
// 0x000002F2 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::FirstChars(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_FirstChars_mC60DC5CA9A078998CB55594436AB9CBFD86478FB (void);
// 0x000002F3 System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexFCD::Prefix(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Prefix_m50B30C508C6745832FD3A76B2169462455C1A28E (void);
// 0x000002F4 System.Int32 System.Text.RegularExpressions.RegexFCD::Anchors(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_Anchors_m562FA644F10503074714E0F58A2A00F9F727D75E (void);
// 0x000002F5 System.Int32 System.Text.RegularExpressions.RegexFCD::AnchorFromType(System.Int32)
extern void RegexFCD_AnchorFromType_m4B458E2C589633A43F9324C14F9192EF68F80A14 (void);
// 0x000002F6 System.Void System.Text.RegularExpressions.RegexFCD::.ctor()
extern void RegexFCD__ctor_mFC6A3309CAFA8C3C2B94094AD443738823388A3B (void);
// 0x000002F7 System.Void System.Text.RegularExpressions.RegexFCD::PushInt(System.Int32)
extern void RegexFCD_PushInt_m63817D3969DF7BD31B7C93D43EE45C4AF539868F (void);
// 0x000002F8 System.Boolean System.Text.RegularExpressions.RegexFCD::IntIsEmpty()
extern void RegexFCD_IntIsEmpty_mE825A8A0DF9D5BA6618357ABBA93421D4099AAEB (void);
// 0x000002F9 System.Int32 System.Text.RegularExpressions.RegexFCD::PopInt()
extern void RegexFCD_PopInt_m1E4B64F2F6DDBCB7495E673540CF25FDD4D01B7E (void);
// 0x000002FA System.Void System.Text.RegularExpressions.RegexFCD::PushFC(System.Text.RegularExpressions.RegexFC)
extern void RegexFCD_PushFC_mBE154E351E7C49FFFC26E603B4672136D91479C7 (void);
// 0x000002FB System.Boolean System.Text.RegularExpressions.RegexFCD::FCIsEmpty()
extern void RegexFCD_FCIsEmpty_m57FDE5D4E352620B7773AD54B286531CA21FCDAD (void);
// 0x000002FC System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::PopFC()
extern void RegexFCD_PopFC_m987A35E9ADF69335799EDEEB12C2CD3A3F40FB6E (void);
// 0x000002FD System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::TopFC()
extern void RegexFCD_TopFC_m26ED21621830CF30FDA46AE8D7F3AC9F50DE416F (void);
// 0x000002FE System.Text.RegularExpressions.RegexFC System.Text.RegularExpressions.RegexFCD::RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexFCD_RegexFCFromRegexTree_mA85E74765529D05113116C73EC397E832D81D0BC (void);
// 0x000002FF System.Void System.Text.RegularExpressions.RegexFCD::SkipChild()
extern void RegexFCD_SkipChild_m661F5D339305B97A37D855240A0B9AF500FE03F6 (void);
// 0x00000300 System.Void System.Text.RegularExpressions.RegexFCD::CalculateFC(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexFCD_CalculateFC_m2267FAA6BCA80275E21DC9A0BAF90BBC85204BD8 (void);
// 0x00000301 System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Boolean)
extern void RegexFC__ctor_m354E8197215F3EE9097B69E783B744365A38EF20 (void);
// 0x00000302 System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern void RegexFC__ctor_m023D08ED0365AE9AAC539333B4390A8052C59229 (void);
// 0x00000303 System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.String,System.Boolean,System.Boolean)
extern void RegexFC__ctor_mDCBBCCC1BB476741943D7F9AD88731B1DCA0C1B5 (void);
// 0x00000304 System.Boolean System.Text.RegularExpressions.RegexFC::AddFC(System.Text.RegularExpressions.RegexFC,System.Boolean)
extern void RegexFC_AddFC_m5B05CD1D7700817843366EC1DF728977EDD4D11E (void);
// 0x00000305 System.String System.Text.RegularExpressions.RegexFC::GetFirstChars(System.Globalization.CultureInfo)
extern void RegexFC_GetFirstChars_m7252E826F9A5BC1842A5A255BAC5A36EE8DADAF5 (void);
// 0x00000306 System.Boolean System.Text.RegularExpressions.RegexFC::IsCaseInsensitive()
extern void RegexFC_IsCaseInsensitive_mD87B0C49AAEBB61215F09A9C5ABF8CCB8B5AB64E (void);
// 0x00000307 System.Void System.Text.RegularExpressions.RegexPrefix::.ctor(System.String,System.Boolean)
extern void RegexPrefix__ctor_m93489A4FF55425A15BF5390E77EE0B84F6F9364C (void);
// 0x00000308 System.String System.Text.RegularExpressions.RegexPrefix::get_Prefix()
extern void RegexPrefix_get_Prefix_m7137EC6CA5B857F49946E2EAEA19784040D430CF (void);
// 0x00000309 System.Boolean System.Text.RegularExpressions.RegexPrefix::get_CaseInsensitive()
extern void RegexPrefix_get_CaseInsensitive_m76E04480FA9FFAE4C5031CA12F4AE9A2576212C0 (void);
// 0x0000030A System.Text.RegularExpressions.RegexPrefix System.Text.RegularExpressions.RegexPrefix::get_Empty()
extern void RegexPrefix_get_Empty_mAD10DECDBC7C51F9ACF5C02E3191874252DF9B8B (void);
// 0x0000030B System.Void System.Text.RegularExpressions.RegexPrefix::.cctor()
extern void RegexPrefix__cctor_mCDCE7EDB98AFB119EE0281D37F7BC019AD28773D (void);
// 0x0000030C System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32[],System.Int32,System.String)
extern void Group__ctor_mECF4574592517D363C35ADC07F9D6F7E7DE6B4F6 (void);
// 0x0000030D System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern void Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521 (void);
// 0x0000030E System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern void Group_get_Captures_m64BC9B122FEF68D0430D27CD254624AE35A2BF4F (void);
// 0x0000030F System.Void System.Text.RegularExpressions.Group::.cctor()
extern void Group__cctor_m213E26F039439904671CFD5DAF5D85B47D5CBE68 (void);
// 0x00000310 System.Void System.Text.RegularExpressions.Group::.ctor()
extern void Group__ctor_mDCB3D51B8A672B342F452177D42D6D3F2F9BA91A (void);
// 0x00000311 System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Text.RegularExpressions.Match,System.Collections.Hashtable)
extern void GroupCollection__ctor_mDFB6267479B597E32357B584847B3DA68F74D222 (void);
// 0x00000312 System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern void GroupCollection_get_SyncRoot_m386A1A40A6B645B1F111618FEA771D48DB956D3B (void);
// 0x00000313 System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
extern void GroupCollection_get_IsSynchronized_mC179A5EEE97BC0B080A97E41B8BE381175789BEB (void);
// 0x00000314 System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern void GroupCollection_get_Count_mBDDCA62E15FC586F0CCBD75F006BF0B08713E26E (void);
// 0x00000315 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern void GroupCollection_get_Item_m5ABF137CEFD5E2F2FE2EC76835963594300D4177 (void);
// 0x00000316 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
extern void GroupCollection_get_Item_m62ECD0C4A53BFB8F0EAFB2BD17F047451B60D886 (void);
// 0x00000317 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroup(System.Int32)
extern void GroupCollection_GetGroup_m222E408F24D187B48C39E38DF0F8C80267A98650 (void);
// 0x00000318 System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::GetGroupImpl(System.Int32)
extern void GroupCollection_GetGroupImpl_m0E3C3044F8ECDDA91FBF8FE7EA69B2F37033A8BD (void);
// 0x00000319 System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern void GroupCollection_CopyTo_m1CD3BAE06E5932597BC6EDF49494A6AB3ABE63E2 (void);
// 0x0000031A System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern void GroupCollection_GetEnumerator_m69149E9FF8C5E3E6D3AF8C54B00A5A893B2146A4 (void);
// 0x0000031B System.Void System.Text.RegularExpressions.GroupCollection::.ctor()
extern void GroupCollection__ctor_mBFA81C79BD34180370D227533C149E106234A902 (void);
// 0x0000031C System.Void System.Text.RegularExpressions.GroupEnumerator::.ctor(System.Text.RegularExpressions.GroupCollection)
extern void GroupEnumerator__ctor_m068EE333FA25ED143CEE67A87050623565547092 (void);
// 0x0000031D System.Boolean System.Text.RegularExpressions.GroupEnumerator::MoveNext()
extern void GroupEnumerator_MoveNext_mE64A4AE66D4732D871E1E8443DA1EA0296A6D87C (void);
// 0x0000031E System.Object System.Text.RegularExpressions.GroupEnumerator::get_Current()
extern void GroupEnumerator_get_Current_mE407A8FC00E5762924C8965BD818A81F762D0B94 (void);
// 0x0000031F System.Text.RegularExpressions.Capture System.Text.RegularExpressions.GroupEnumerator::get_Capture()
extern void GroupEnumerator_get_Capture_m95A3AE336DB603A5FF6F66FC60E77C1C17300EC2 (void);
// 0x00000320 System.Void System.Text.RegularExpressions.GroupEnumerator::Reset()
extern void GroupEnumerator_Reset_m35E9C15B31794E7B1F8B163E299CE12812A6DFB7 (void);
// 0x00000321 System.Void System.Text.RegularExpressions.RegexInterpreter::.ctor(System.Text.RegularExpressions.RegexCode,System.Globalization.CultureInfo)
extern void RegexInterpreter__ctor_m7B9BA594CF5F338B2E257EDADC2481826BF4C6BB (void);
// 0x00000322 System.Void System.Text.RegularExpressions.RegexInterpreter::InitTrackCount()
extern void RegexInterpreter_InitTrackCount_mD93771C3D75617898528698E29AD09B7EA5EE24B (void);
// 0x00000323 System.Void System.Text.RegularExpressions.RegexInterpreter::Advance()
extern void RegexInterpreter_Advance_mCD1A51680CD0318DDF6D104DE8C722FCCC468CCA (void);
// 0x00000324 System.Void System.Text.RegularExpressions.RegexInterpreter::Advance(System.Int32)
extern void RegexInterpreter_Advance_m779870D7E1FA3580492E2E8B75E2805613525AF7 (void);
// 0x00000325 System.Void System.Text.RegularExpressions.RegexInterpreter::Goto(System.Int32)
extern void RegexInterpreter_Goto_m438DE9CE790DF0757383C91126DEA68C6B0DADFE (void);
// 0x00000326 System.Void System.Text.RegularExpressions.RegexInterpreter::Textto(System.Int32)
extern void RegexInterpreter_Textto_m6CE60A7C8FA9F9CEECD26BD6025F055EB64887AA (void);
// 0x00000327 System.Void System.Text.RegularExpressions.RegexInterpreter::Trackto(System.Int32)
extern void RegexInterpreter_Trackto_m0C7B05A7385BE3F9BB096FE28DC22942A9F96783 (void);
// 0x00000328 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textstart()
extern void RegexInterpreter_Textstart_mE71CFC006954F38B9EB6CD85BCC0867E63BF0894 (void);
// 0x00000329 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Textpos()
extern void RegexInterpreter_Textpos_mC66F0DE729E76EDA0BEEA7B1ABEE369BA6C81D5B (void);
// 0x0000032A System.Int32 System.Text.RegularExpressions.RegexInterpreter::Trackpos()
extern void RegexInterpreter_Trackpos_m472ADA4F5E1D07E71896E42714DFB723CB016842 (void);
// 0x0000032B System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush()
extern void RegexInterpreter_TrackPush_m5A8B9F863211AAEC7E5FAD14ECDDAFDE3059210D (void);
// 0x0000032C System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32)
extern void RegexInterpreter_TrackPush_mB2AF47E651D2A3853A719EFB908C30D27EC2FF5F (void);
// 0x0000032D System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_m3EA36B28D636D1C617F85CEA57650344B562A38F (void);
// 0x0000032E System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush(System.Int32,System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush_mBCAADB1DF177D91DC9AA4518DCDB3AAF7D6C0E15 (void);
// 0x0000032F System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32)
extern void RegexInterpreter_TrackPush2_m4EBCF8B183717311AEE3FAA6AD6FAF1F08B14F77 (void);
// 0x00000330 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPush2(System.Int32,System.Int32)
extern void RegexInterpreter_TrackPush2_mD591F73FDDF69084636E0834BCCD530B057898FF (void);
// 0x00000331 System.Void System.Text.RegularExpressions.RegexInterpreter::Backtrack()
extern void RegexInterpreter_Backtrack_m46612DE84F898D1656DE30F3BA86E93209E279E1 (void);
// 0x00000332 System.Void System.Text.RegularExpressions.RegexInterpreter::SetOperator(System.Int32)
extern void RegexInterpreter_SetOperator_m5B633C33EE4CD85364E7C60003ACE8EA93FDAC91 (void);
// 0x00000333 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop()
extern void RegexInterpreter_TrackPop_m84B55BE8F346693942045E937174EC8C1AE91F08 (void);
// 0x00000334 System.Void System.Text.RegularExpressions.RegexInterpreter::TrackPop(System.Int32)
extern void RegexInterpreter_TrackPop_m73AB2E002DB92E231B62510861277320F76BEEED (void);
// 0x00000335 System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek()
extern void RegexInterpreter_TrackPeek_m4EF7918CC0F10FFF7E73C1C9D13E74D1D8D13318 (void);
// 0x00000336 System.Int32 System.Text.RegularExpressions.RegexInterpreter::TrackPeek(System.Int32)
extern void RegexInterpreter_TrackPeek_mEECF3E94E7823A68474C691F695D71087729553C (void);
// 0x00000337 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32)
extern void RegexInterpreter_StackPush_mC28C3F8B3C811C4DCA6CD312F7F487206C871E55 (void);
// 0x00000338 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPush(System.Int32,System.Int32)
extern void RegexInterpreter_StackPush_m911FF20379BF912884E7F98BB59CFB6C51AA1861 (void);
// 0x00000339 System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop()
extern void RegexInterpreter_StackPop_mD057CA7B190ED8FBD33C6CE48E1F28E4B09FC4F2 (void);
// 0x0000033A System.Void System.Text.RegularExpressions.RegexInterpreter::StackPop(System.Int32)
extern void RegexInterpreter_StackPop_m90FC35FD76D9B63851ECFD641DAA08B1B58C7B91 (void);
// 0x0000033B System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek()
extern void RegexInterpreter_StackPeek_m08C28311048F6B075379EE46B924FC211BA48EC6 (void);
// 0x0000033C System.Int32 System.Text.RegularExpressions.RegexInterpreter::StackPeek(System.Int32)
extern void RegexInterpreter_StackPeek_m308DE22A8E1AF524319E7F1D5A94DBFEC37700ED (void);
// 0x0000033D System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operator()
extern void RegexInterpreter_Operator_m4DE2EAA1744D15294F2767D5217F753FE74FAC0B (void);
// 0x0000033E System.Int32 System.Text.RegularExpressions.RegexInterpreter::Operand(System.Int32)
extern void RegexInterpreter_Operand_m1ACB9C398C9C7ADF8DA58824877B99F08F181526 (void);
// 0x0000033F System.Int32 System.Text.RegularExpressions.RegexInterpreter::Leftchars()
extern void RegexInterpreter_Leftchars_m3A200CD41FFE8C89CCB85B3CC7A367E32C5988D1 (void);
// 0x00000340 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Rightchars()
extern void RegexInterpreter_Rightchars_m3DB37A53D6C3DC3311C9EA020690CC0824959D30 (void);
// 0x00000341 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Bump()
extern void RegexInterpreter_Bump_mC33CB8A0CC0DF1C69F11115BD225D2D8B63F8753 (void);
// 0x00000342 System.Int32 System.Text.RegularExpressions.RegexInterpreter::Forwardchars()
extern void RegexInterpreter_Forwardchars_mE5E437E285604CDC60551C112F7B2CEF7297F4ED (void);
// 0x00000343 System.Char System.Text.RegularExpressions.RegexInterpreter::Forwardcharnext()
extern void RegexInterpreter_Forwardcharnext_mD2C6694CC31BC75D3E20C511D1004D28AAE1390F (void);
// 0x00000344 System.Boolean System.Text.RegularExpressions.RegexInterpreter::Stringmatch(System.String)
extern void RegexInterpreter_Stringmatch_m543BC6834400A925D2603AE6FBB47944694AFDF1 (void);
// 0x00000345 System.Boolean System.Text.RegularExpressions.RegexInterpreter::Refmatch(System.Int32,System.Int32)
extern void RegexInterpreter_Refmatch_m52369ADBF64E25A9EEEBE216939454EBB8D8E138 (void);
// 0x00000346 System.Void System.Text.RegularExpressions.RegexInterpreter::Backwardnext()
extern void RegexInterpreter_Backwardnext_mD10CE2A9E229D0655EF01565DB39C902654D00CD (void);
// 0x00000347 System.Char System.Text.RegularExpressions.RegexInterpreter::CharAt(System.Int32)
extern void RegexInterpreter_CharAt_mAE2AF6D293F53C2D8961C2D0C145BC3ADF6EC105 (void);
// 0x00000348 System.Boolean System.Text.RegularExpressions.RegexInterpreter::FindFirstChar()
extern void RegexInterpreter_FindFirstChar_m95CDB0ECB99F7850479D951A5F32BB6B19B91F44 (void);
// 0x00000349 System.Void System.Text.RegularExpressions.RegexInterpreter::Go()
extern void RegexInterpreter_Go_mBE9DEAECBD68F60DDFE2BB5A8C24CF92A1FB503A (void);
// 0x0000034A System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern void Match_get_Empty_m5D3AE3D0580F06ED901EE69FCCED6AF44715528F (void);
// 0x0000034B System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void Match__ctor_m08A8262ACD89C9E47AA7168D0F2CC6E3338855D7 (void);
// 0x0000034C System.Void System.Text.RegularExpressions.Match::Reset(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void Match_Reset_m9EDCC3689E8A5A57A644946AEC3E41C1901C7DAF (void);
// 0x0000034D System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern void Match_get_Groups_m06CCC0108A4F5EAD5968631D7A8C9FFE730BDC42 (void);
// 0x0000034E System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern void Match_NextMatch_mA9BB438B4D7DE12D45A73720C063CFFF15FE596D (void);
// 0x0000034F System.Void System.Text.RegularExpressions.Match::AddMatch(System.Int32,System.Int32,System.Int32)
extern void Match_AddMatch_m3C9178A7D6F8175A7628E4BE579FD209B7C7650A (void);
// 0x00000350 System.Void System.Text.RegularExpressions.Match::BalanceMatch(System.Int32)
extern void Match_BalanceMatch_mCC0EC358E4C33191B896226512FE8F086EFEA4CF (void);
// 0x00000351 System.Void System.Text.RegularExpressions.Match::RemoveMatch(System.Int32)
extern void Match_RemoveMatch_m6268C01D537F0BACB7DD707E11FA873C3E1918C7 (void);
// 0x00000352 System.Boolean System.Text.RegularExpressions.Match::IsMatched(System.Int32)
extern void Match_IsMatched_m7686CA418F588EC198A82DE287326C46F4CBDD5F (void);
// 0x00000353 System.Int32 System.Text.RegularExpressions.Match::MatchIndex(System.Int32)
extern void Match_MatchIndex_mA39CA9F84C3872675CB9C76EC342EFB30A2B5DA0 (void);
// 0x00000354 System.Int32 System.Text.RegularExpressions.Match::MatchLength(System.Int32)
extern void Match_MatchLength_m25492EACF56E8211FEEC4856F93D7A19D30A984F (void);
// 0x00000355 System.Void System.Text.RegularExpressions.Match::Tidy(System.Int32)
extern void Match_Tidy_m88B2494631267F8CF7E90F3305F713550ED39CE8 (void);
// 0x00000356 System.Void System.Text.RegularExpressions.Match::.cctor()
extern void Match__cctor_m9158A9D469720E89CD9004B65F55EEEF5E330C0E (void);
// 0x00000357 System.Void System.Text.RegularExpressions.Match::.ctor()
extern void Match__ctor_m38BC8AD7EEFA99C6FC25587D6FE56450FA849E0C (void);
// 0x00000358 System.Void System.Text.RegularExpressions.MatchSparse::.ctor(System.Text.RegularExpressions.Regex,System.Collections.Hashtable,System.Int32,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchSparse__ctor_mEA523FCAF96D8A81401D3ED010CACE4463CCE811 (void);
// 0x00000359 System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.MatchSparse::get_Groups()
extern void MatchSparse_get_Groups_m2B6C3D8D28A4C0035833C3805882E7906642FACF (void);
// 0x0000035A System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32)
extern void MatchCollection__ctor_m2684A94B54FD44877B46CA7B9A84E93237D9D0F7 (void);
// 0x0000035B System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::GetMatch(System.Int32)
extern void MatchCollection_GetMatch_m6DA1F0C20625CA388837F7482DD419D7658B8D87 (void);
// 0x0000035C System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern void MatchCollection_get_Count_m67E3B1EA364054C83E11EEC80C4DB68B45BF01D9 (void);
// 0x0000035D System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern void MatchCollection_get_SyncRoot_m008A67E58936E44E12041714AAA165C5DB7080CA (void);
// 0x0000035E System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern void MatchCollection_get_IsSynchronized_mCEFEACCB68B1FDDC16AC60E0960F10B2496C5A74 (void);
// 0x0000035F System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern void MatchCollection_get_Item_m9B6304A71B1348FDBBE222D8AE234BC6422B2277 (void);
// 0x00000360 System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern void MatchCollection_CopyTo_m12913FC3360BDCB05813BAF720D3C9BB947511A1 (void);
// 0x00000361 System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern void MatchCollection_GetEnumerator_mA2DE46F156BCE530FDDDDDCF1E413A6495CDE993 (void);
// 0x00000362 System.Void System.Text.RegularExpressions.MatchCollection::.cctor()
extern void MatchCollection__cctor_m9E3687872EC4C04DEC341DA44CEB64342256BF86 (void);
// 0x00000363 System.Void System.Text.RegularExpressions.MatchCollection::.ctor()
extern void MatchCollection__ctor_m8D9C2405DD6B80443C4E5BFD9B4F1E92F9F7F802 (void);
// 0x00000364 System.Void System.Text.RegularExpressions.MatchEnumerator::.ctor(System.Text.RegularExpressions.MatchCollection)
extern void MatchEnumerator__ctor_m1A7719BA6E7E383B4631C4C39FF7A4C703468287 (void);
// 0x00000365 System.Boolean System.Text.RegularExpressions.MatchEnumerator::MoveNext()
extern void MatchEnumerator_MoveNext_m29652A098BAC42A976AC536C378DB8EAE5EE3E80 (void);
// 0x00000366 System.Object System.Text.RegularExpressions.MatchEnumerator::get_Current()
extern void MatchEnumerator_get_Current_m28D59328A0FF6B5CE611E4920A298CB999C1D389 (void);
// 0x00000367 System.Void System.Text.RegularExpressions.MatchEnumerator::Reset()
extern void MatchEnumerator_Reset_mFB7DF97D867D5C5436B9665EBF26BDBB58465F78 (void);
// 0x00000368 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException__ctor_mCCDB413A8F68D924B276B8FED2744E81BE4C89AF (void);
// 0x00000369 System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor()
extern void RegexMatchTimeoutException__ctor_m4EFD030442FEEC81E59AB8CDF35D603A5D551058 (void);
// 0x0000036A System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException__ctor_m554FE8CFA7F42483517F11948A61E4D3C9F44D07 (void);
// 0x0000036B System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m78FACBA38C002E195A507A32CDAB768D8DBC93E7 (void);
// 0x0000036C System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init()
extern void RegexMatchTimeoutException_Init_m09AF601CC7369F2D7E1300B166517FE7D20EB6F1 (void);
// 0x0000036D System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::Init(System.String,System.String,System.TimeSpan)
extern void RegexMatchTimeoutException_Init_m0F165C7170A46724458C06DA5EC05536D8CB95B7 (void);
// 0x0000036E System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions)
extern void RegexNode__ctor_m29676E9646F598C827F25E906EEB6EA14A6FD5DB (void);
// 0x0000036F System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
extern void RegexNode__ctor_m92FB70D6C28D7E021A2A1ACBAD583461AB014F11 (void);
// 0x00000370 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.String)
extern void RegexNode__ctor_m89ACB97FB7FE8B38C0D69F0F2445A7916BC67D85 (void);
// 0x00000371 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32)
extern void RegexNode__ctor_mAE76BA90AA85F205CB0CC6799F06D1AD85A49F64 (void);
// 0x00000372 System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Int32,System.Int32)
extern void RegexNode__ctor_m0EFEB707603B3C667626117E09A7EED58BBEC6D4 (void);
// 0x00000373 System.Boolean System.Text.RegularExpressions.RegexNode::UseOptionR()
extern void RegexNode_UseOptionR_mB931929BBD1D89F8B263AA846C1665775096713E (void);
// 0x00000374 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReverseLeft()
extern void RegexNode_ReverseLeft_m994638E4886D007B9B29BC23EA3C8D76A92099FD (void);
// 0x00000375 System.Void System.Text.RegularExpressions.RegexNode::MakeRep(System.Int32,System.Int32,System.Int32)
extern void RegexNode_MakeRep_mC310B028FBE3BD5EB80F83E4E05B891ADEE45C22 (void);
// 0x00000376 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Reduce()
extern void RegexNode_Reduce_mE9E22C30C296E328ABC7EDC9C52F18059FAE27C1 (void);
// 0x00000377 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::StripEnation(System.Int32)
extern void RegexNode_StripEnation_mE19E0A57BCE0D0BF47F51A5103C08FCC7BB9E24F (void);
// 0x00000378 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceGroup()
extern void RegexNode_ReduceGroup_m069FA93D4F88006F18473E647069B349683B9204 (void);
// 0x00000379 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceRep()
extern void RegexNode_ReduceRep_m726F03D9E2420F276A37777942B66D15CA73F77E (void);
// 0x0000037A System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceSet()
extern void RegexNode_ReduceSet_m912F4A0DFF694EB14DE520599369A811C2E9D10D (void);
// 0x0000037B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceAlternation()
extern void RegexNode_ReduceAlternation_m60EECC172A975620A5118D14D6ECF8B846ECED9F (void);
// 0x0000037C System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::ReduceConcatenation()
extern void RegexNode_ReduceConcatenation_m4BE1B6DBBC0F4BAB9A3873414B5EE77D825AD53B (void);
// 0x0000037D System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
extern void RegexNode_MakeQuantifier_m1332537AA6BCCCD68A3E59EA7994CCFE69A19444 (void);
// 0x0000037E System.Void System.Text.RegularExpressions.RegexNode::AddChild(System.Text.RegularExpressions.RegexNode)
extern void RegexNode_AddChild_m734A86A25E6074316FAC566F7D127253F7B71703 (void);
// 0x0000037F System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::Child(System.Int32)
extern void RegexNode_Child_m5AA4FFDDCCFA22FE70BA0F236F19A963AEF72079 (void);
// 0x00000380 System.Int32 System.Text.RegularExpressions.RegexNode::ChildCount()
extern void RegexNode_ChildCount_m23B6965575DB0DBC1D90212820DEA144FCB06996 (void);
// 0x00000381 System.Int32 System.Text.RegularExpressions.RegexNode::Type()
extern void RegexNode_Type_mFA1C2F11F3487BB1BCBA7F58FFB7975EC18E9CD4 (void);
// 0x00000382 System.Text.RegularExpressions.RegexTree System.Text.RegularExpressions.RegexParser::Parse(System.String,System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Parse_mD206BB554B6087ED35C5F744D72A93A07721D789 (void);
// 0x00000383 System.Void System.Text.RegularExpressions.RegexParser::.ctor(System.Globalization.CultureInfo)
extern void RegexParser__ctor_mC69D13B4FC323EE77392251139C5F2C456171310 (void);
// 0x00000384 System.Void System.Text.RegularExpressions.RegexParser::SetPattern(System.String)
extern void RegexParser_SetPattern_m4B385D83A9680A1B2707EBCA8659B6E12EDD5E46 (void);
// 0x00000385 System.Void System.Text.RegularExpressions.RegexParser::Reset(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_Reset_mEC49D1DCEBC555768D2FB90DA42374F1C547E328 (void);
// 0x00000386 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanRegex()
extern void RegexParser_ScanRegex_m62049A6C66D6D8CDD795B9C740283D1EC85126DB (void);
// 0x00000387 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean)
extern void RegexParser_ScanCharClass_mF775DA8BFD214C64BC3D91E07436543717976DC4 (void);
// 0x00000388 System.Text.RegularExpressions.RegexCharClass System.Text.RegularExpressions.RegexParser::ScanCharClass(System.Boolean,System.Boolean)
extern void RegexParser_ScanCharClass_mFE669B1C9CB6652157D9E8DAEE5B924C581AE81F (void);
// 0x00000389 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanGroupOpen()
extern void RegexParser_ScanGroupOpen_mA4918ACA08C7E4C945197BBE4EF734AF5B35096C (void);
// 0x0000038A System.Void System.Text.RegularExpressions.RegexParser::ScanBlank()
extern void RegexParser_ScanBlank_m99BA3097E182DE425BE0137BAFDD0218F0DF360D (void);
// 0x0000038B System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBackslash()
extern void RegexParser_ScanBackslash_m45E9E0ABDB7DF70F58850B48905DE9DE026EA64C (void);
// 0x0000038C System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::ScanBasicBackslash()
extern void RegexParser_ScanBasicBackslash_m5F438E56ACBE272622D39D4208B2D5ED536DD7B8 (void);
// 0x0000038D System.String System.Text.RegularExpressions.RegexParser::ScanCapname()
extern void RegexParser_ScanCapname_m1D4DB4E5DA312CBCA841391F729CC626DC657D85 (void);
// 0x0000038E System.Char System.Text.RegularExpressions.RegexParser::ScanOctal()
extern void RegexParser_ScanOctal_mCF3925D06CBBA1DD0CB60199F59991D099430C3A (void);
// 0x0000038F System.Int32 System.Text.RegularExpressions.RegexParser::ScanDecimal()
extern void RegexParser_ScanDecimal_mE966D2C7F357215A52F88120F40A37707C1AB33A (void);
// 0x00000390 System.Char System.Text.RegularExpressions.RegexParser::ScanHex(System.Int32)
extern void RegexParser_ScanHex_m296FC19218F8186D2C1B630DF9F138CFB195625E (void);
// 0x00000391 System.Int32 System.Text.RegularExpressions.RegexParser::HexDigit(System.Char)
extern void RegexParser_HexDigit_m4BAEE94B2077B96A4B1D56C459EFB2B1938E1174 (void);
// 0x00000392 System.Char System.Text.RegularExpressions.RegexParser::ScanControl()
extern void RegexParser_ScanControl_m244F59DA2B0711D154B7D68CCB5765390C65B5B8 (void);
// 0x00000393 System.Boolean System.Text.RegularExpressions.RegexParser::IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions)
extern void RegexParser_IsOnlyTopOption_m66FE256A81BBD173C96B90EE9EBE9721F9ED16A1 (void);
// 0x00000394 System.Void System.Text.RegularExpressions.RegexParser::ScanOptions()
extern void RegexParser_ScanOptions_m5CD283C15179190846762B90F78F0A87E7495537 (void);
// 0x00000395 System.Char System.Text.RegularExpressions.RegexParser::ScanCharEscape()
extern void RegexParser_ScanCharEscape_mF8821EE73F3F8A5D4267642F6E4F0A666FA5E7A6 (void);
// 0x00000396 System.String System.Text.RegularExpressions.RegexParser::ParseProperty()
extern void RegexParser_ParseProperty_m69C638E755F0A5C1A2BC8E08827E6124889C2CEF (void);
// 0x00000397 System.Int32 System.Text.RegularExpressions.RegexParser::TypeFromCode(System.Char)
extern void RegexParser_TypeFromCode_m0969E0D233AC767039B0A333901F47A22BABE0E8 (void);
// 0x00000398 System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.RegexParser::OptionFromCode(System.Char)
extern void RegexParser_OptionFromCode_m6BCD10574DF5E08599B5F7FC8E947E3DC69EE151 (void);
// 0x00000399 System.Void System.Text.RegularExpressions.RegexParser::CountCaptures()
extern void RegexParser_CountCaptures_m5255DE4B24B8D9BA7B2A2A7A1FD79A67B36F4634 (void);
// 0x0000039A System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureSlot(System.Int32,System.Int32)
extern void RegexParser_NoteCaptureSlot_m8B2D20B819C86E427837C879CCA72B9BCD1C4AA8 (void);
// 0x0000039B System.Void System.Text.RegularExpressions.RegexParser::NoteCaptureName(System.String,System.Int32)
extern void RegexParser_NoteCaptureName_m96A5301077C4C6554E993A2266EA40B690F455C4 (void);
// 0x0000039C System.Void System.Text.RegularExpressions.RegexParser::AssignNameSlots()
extern void RegexParser_AssignNameSlots_m168605CD3A6D6AAA52AFFDB13BE3D5DFAC3FE94B (void);
// 0x0000039D System.Int32 System.Text.RegularExpressions.RegexParser::CaptureSlotFromName(System.String)
extern void RegexParser_CaptureSlotFromName_mE3FD1D57EB29D4C7A0E4029E4D4785297798EE43 (void);
// 0x0000039E System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureSlot(System.Int32)
extern void RegexParser_IsCaptureSlot_m80540BE449D9B98B2B159CD5169F7AA6DB63CB80 (void);
// 0x0000039F System.Boolean System.Text.RegularExpressions.RegexParser::IsCaptureName(System.String)
extern void RegexParser_IsCaptureName_mBFB85B16ED80CA59452491B4C3278C77ADCA1FDF (void);
// 0x000003A0 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionN()
extern void RegexParser_UseOptionN_mE9C62585222B2D99D295708E4486C952973F35D5 (void);
// 0x000003A1 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionI()
extern void RegexParser_UseOptionI_mFA3B59BD8A6F61626E20F8FE909A23289E694263 (void);
// 0x000003A2 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionM()
extern void RegexParser_UseOptionM_mDE945B2DE782D12A5013D408F4FFBCABEC48C63D (void);
// 0x000003A3 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionS()
extern void RegexParser_UseOptionS_mE96EEA754E1EEEF658AAF73885D048342D1D200E (void);
// 0x000003A4 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionX()
extern void RegexParser_UseOptionX_mD63DEED6741AEA0B3F6CC4239712A4B2EF690810 (void);
// 0x000003A5 System.Boolean System.Text.RegularExpressions.RegexParser::UseOptionE()
extern void RegexParser_UseOptionE_mC171EEF863E091591BAD771F16B72D742F044096 (void);
// 0x000003A6 System.Boolean System.Text.RegularExpressions.RegexParser::IsSpecial(System.Char)
extern void RegexParser_IsSpecial_mFF68456E944ACAF048B4F96F5758FFDD1D5E7DCD (void);
// 0x000003A7 System.Boolean System.Text.RegularExpressions.RegexParser::IsStopperX(System.Char)
extern void RegexParser_IsStopperX_m0BCF2DB4B0E1324C9109C8BFD486FC5DBA8DC646 (void);
// 0x000003A8 System.Boolean System.Text.RegularExpressions.RegexParser::IsQuantifier(System.Char)
extern void RegexParser_IsQuantifier_mE0620E30A63AD0C0DB9550A52A4A7D0BB4BC3A31 (void);
// 0x000003A9 System.Boolean System.Text.RegularExpressions.RegexParser::IsTrueQuantifier()
extern void RegexParser_IsTrueQuantifier_m4AA95A9CE7CD78600E8D525ECA5A095984FBC63F (void);
// 0x000003AA System.Boolean System.Text.RegularExpressions.RegexParser::IsSpace(System.Char)
extern void RegexParser_IsSpace_m1E41FA7DD1FB93BF9220530CA91B35EF08879F30 (void);
// 0x000003AB System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Int32,System.Int32,System.Boolean)
extern void RegexParser_AddConcatenate_m3743C87DFCD1784A949BFDCE9443845CCD630A5D (void);
// 0x000003AC System.Void System.Text.RegularExpressions.RegexParser::PushGroup()
extern void RegexParser_PushGroup_m6F4246ECA3A6F29DA096C3B41D97652427E3175E (void);
// 0x000003AD System.Void System.Text.RegularExpressions.RegexParser::PopGroup()
extern void RegexParser_PopGroup_m43AB1FB84E11D8DFF6C5D38B9CAD324E5425DD74 (void);
// 0x000003AE System.Boolean System.Text.RegularExpressions.RegexParser::EmptyStack()
extern void RegexParser_EmptyStack_mB65B33DCF98A5967407B7C6A07F8799681202BE5 (void);
// 0x000003AF System.Void System.Text.RegularExpressions.RegexParser::StartGroup(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_StartGroup_m36A6C0ED245D844CD2E630160994C3F2D7CCA994 (void);
// 0x000003B0 System.Void System.Text.RegularExpressions.RegexParser::AddAlternate()
extern void RegexParser_AddAlternate_mDBDEEF8180738DE0D31CC05B0E223EFF0D66939B (void);
// 0x000003B1 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate()
extern void RegexParser_AddConcatenate_mF80F14978ED6626A8F8E5F37AEB3B946A01192C1 (void);
// 0x000003B2 System.Void System.Text.RegularExpressions.RegexParser::AddConcatenate(System.Boolean,System.Int32,System.Int32)
extern void RegexParser_AddConcatenate_m81CC39ED404E571347F0E97650F3BEB14639B1B0 (void);
// 0x000003B3 System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexParser::Unit()
extern void RegexParser_Unit_mEAEEAC39DBE372DC762644F49E6E163CA37EA34E (void);
// 0x000003B4 System.Void System.Text.RegularExpressions.RegexParser::AddUnitOne(System.Char)
extern void RegexParser_AddUnitOne_m72DFA82092408E9C63544126093D98390E0C2145 (void);
// 0x000003B5 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNotone(System.Char)
extern void RegexParser_AddUnitNotone_mAA142A94BB7B6A358BA36A3920DB139382889749 (void);
// 0x000003B6 System.Void System.Text.RegularExpressions.RegexParser::AddUnitSet(System.String)
extern void RegexParser_AddUnitSet_m024168548909EA2DF649E6194D60135312ADF5B3 (void);
// 0x000003B7 System.Void System.Text.RegularExpressions.RegexParser::AddUnitNode(System.Text.RegularExpressions.RegexNode)
extern void RegexParser_AddUnitNode_m6EE11A898128A169E41A5C7B38B1F3DD314FB304 (void);
// 0x000003B8 System.Void System.Text.RegularExpressions.RegexParser::AddUnitType(System.Int32)
extern void RegexParser_AddUnitType_m1ECB4025CA3B580F051CF6891D9C96922CA2FA7A (void);
// 0x000003B9 System.Void System.Text.RegularExpressions.RegexParser::AddGroup()
extern void RegexParser_AddGroup_m54BBB919E4D4AD05EFECBC3ECBE46FC4A90569EA (void);
// 0x000003BA System.Void System.Text.RegularExpressions.RegexParser::PushOptions()
extern void RegexParser_PushOptions_m2034533961B704CBFA0F97BD4A54CB7269F0D88A (void);
// 0x000003BB System.Void System.Text.RegularExpressions.RegexParser::PopOptions()
extern void RegexParser_PopOptions_mA18691037302741375A44BD8BDC9387DFB07B676 (void);
// 0x000003BC System.Boolean System.Text.RegularExpressions.RegexParser::EmptyOptionsStack()
extern void RegexParser_EmptyOptionsStack_m5FCB7AF81ACB5C91A73231C9F0AA0DFB32067A45 (void);
// 0x000003BD System.Void System.Text.RegularExpressions.RegexParser::PopKeepOptions()
extern void RegexParser_PopKeepOptions_m8ACBCD324BAF7269F90AEB3CF901B666524658FA (void);
// 0x000003BE System.ArgumentException System.Text.RegularExpressions.RegexParser::MakeException(System.String)
extern void RegexParser_MakeException_m6D521D75808E2CD4255A68DC3456EAF2A88F2874 (void);
// 0x000003BF System.Int32 System.Text.RegularExpressions.RegexParser::Textpos()
extern void RegexParser_Textpos_m36658DED82367E05DF4333E68A666FEEBC3DAC07 (void);
// 0x000003C0 System.Void System.Text.RegularExpressions.RegexParser::Textto(System.Int32)
extern void RegexParser_Textto_m5C8BAB13E35429238EA9A5F13D5A5A580D0DD3AC (void);
// 0x000003C1 System.Char System.Text.RegularExpressions.RegexParser::MoveRightGetChar()
extern void RegexParser_MoveRightGetChar_m3CF088DE129BADB346CCEEF1D547E2D260BC894A (void);
// 0x000003C2 System.Void System.Text.RegularExpressions.RegexParser::MoveRight()
extern void RegexParser_MoveRight_m6F0A1C10AE9EA183F04A9E06B62B2B53648688AC (void);
// 0x000003C3 System.Void System.Text.RegularExpressions.RegexParser::MoveRight(System.Int32)
extern void RegexParser_MoveRight_m7D1D27C901CAB81BCF60803E22FBDF2DEEC6CC51 (void);
// 0x000003C4 System.Void System.Text.RegularExpressions.RegexParser::MoveLeft()
extern void RegexParser_MoveLeft_m1BC035A4EA49F4168093B2AB0EEAB2653CB04033 (void);
// 0x000003C5 System.Char System.Text.RegularExpressions.RegexParser::CharAt(System.Int32)
extern void RegexParser_CharAt_m08DBAE0DFD788548F74E061031B7221154F96A77 (void);
// 0x000003C6 System.Char System.Text.RegularExpressions.RegexParser::RightChar()
extern void RegexParser_RightChar_m9E231199A8E5EA994AA1746FC5E977AF3823FDEB (void);
// 0x000003C7 System.Char System.Text.RegularExpressions.RegexParser::RightChar(System.Int32)
extern void RegexParser_RightChar_m246E9E1F8D0A4A8E485C23E233CD3915C23739D8 (void);
// 0x000003C8 System.Int32 System.Text.RegularExpressions.RegexParser::CharsRight()
extern void RegexParser_CharsRight_m318662CFE3223C3FA5E921D376409B4E1B28F9B4 (void);
// 0x000003C9 System.Void System.Text.RegularExpressions.RegexParser::.cctor()
extern void RegexParser__cctor_mF468AF3C5916BA72C579CBD41A73D2DAD004F0EE (void);
// 0x000003CA System.String[] System.Text.RegularExpressions.RegexReplacement::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern void RegexReplacement_Split_mDEDE59DED747E05FFD9030EF85E54E827DDF3E54 (void);
// 0x000003CB System.Void System.Text.RegularExpressions.RegexRunner::.ctor()
extern void RegexRunner__ctor_mC04D94995556E71E813F8420C8A4EC0B66404550 (void);
// 0x000003CC System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
extern void RegexRunner_Scan_m1C3B1B034601773D510A4D2DEC337635A540BE31 (void);
// 0x000003CD System.Void System.Text.RegularExpressions.RegexRunner::StartTimeoutWatch()
extern void RegexRunner_StartTimeoutWatch_m257FBE0C72761082A11D275954C6A1343EB13301 (void);
// 0x000003CE System.Void System.Text.RegularExpressions.RegexRunner::CheckTimeout()
extern void RegexRunner_CheckTimeout_m52486A9CE7B6EA4C83BB60FB200196AF0EE5687B (void);
// 0x000003CF System.Void System.Text.RegularExpressions.RegexRunner::DoCheckTimeout()
extern void RegexRunner_DoCheckTimeout_mCDAA40848A2F8AAD70928FFD8A6C08FF2D9E72A3 (void);
// 0x000003D0 System.Void System.Text.RegularExpressions.RegexRunner::Go()
// 0x000003D1 System.Boolean System.Text.RegularExpressions.RegexRunner::FindFirstChar()
// 0x000003D2 System.Void System.Text.RegularExpressions.RegexRunner::InitTrackCount()
// 0x000003D3 System.Void System.Text.RegularExpressions.RegexRunner::InitMatch()
extern void RegexRunner_InitMatch_mF9CD772D4A8E12F89B4785324CD6939ABAE89AD4 (void);
// 0x000003D4 System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::TidyMatch(System.Boolean)
extern void RegexRunner_TidyMatch_m61A8AE20E505F2055B276EB020EB0B804ED2D924 (void);
// 0x000003D5 System.Void System.Text.RegularExpressions.RegexRunner::EnsureStorage()
extern void RegexRunner_EnsureStorage_m6BC13F773B014E2875CCD9A83E4093A77AA1053C (void);
// 0x000003D6 System.Boolean System.Text.RegularExpressions.RegexRunner::IsBoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsBoundary_m6C846E11790EC61A9E75A24230E1477913DB3441 (void);
// 0x000003D7 System.Boolean System.Text.RegularExpressions.RegexRunner::IsECMABoundary(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_IsECMABoundary_m35C5F5DDC7C2F0E57EBA2E9D9892A88EDAEE4B97 (void);
// 0x000003D8 System.Void System.Text.RegularExpressions.RegexRunner::DoubleTrack()
extern void RegexRunner_DoubleTrack_m057C14C51F137222469C6526406B0E1069747618 (void);
// 0x000003D9 System.Void System.Text.RegularExpressions.RegexRunner::DoubleStack()
extern void RegexRunner_DoubleStack_m8969F05F9E086EAA194DCBD2F137778239918925 (void);
// 0x000003DA System.Void System.Text.RegularExpressions.RegexRunner::DoubleCrawl()
extern void RegexRunner_DoubleCrawl_mF0425849E5E3C2BA5E9009CED7DE245C8CA0F7CC (void);
// 0x000003DB System.Void System.Text.RegularExpressions.RegexRunner::Crawl(System.Int32)
extern void RegexRunner_Crawl_m655A5D262056F7E13F0645CE5611AE65E83D97DB (void);
// 0x000003DC System.Int32 System.Text.RegularExpressions.RegexRunner::Popcrawl()
extern void RegexRunner_Popcrawl_mD8C76E2C584E6908F4BB11E055B97581F0CF7268 (void);
// 0x000003DD System.Int32 System.Text.RegularExpressions.RegexRunner::Crawlpos()
extern void RegexRunner_Crawlpos_m26A92CA69EF0C65BC7389834A12AD331538D064D (void);
// 0x000003DE System.Void System.Text.RegularExpressions.RegexRunner::Capture(System.Int32,System.Int32,System.Int32)
extern void RegexRunner_Capture_mE34CB0D3351BCC69F6FDE6CDEA763B93C5E92642 (void);
// 0x000003DF System.Void System.Text.RegularExpressions.RegexRunner::TransferCapture(System.Int32,System.Int32,System.Int32,System.Int32)
extern void RegexRunner_TransferCapture_m4F01B5A96647BC3FD338ACF6D509741D80FEC837 (void);
// 0x000003E0 System.Void System.Text.RegularExpressions.RegexRunner::Uncapture()
extern void RegexRunner_Uncapture_mA7163C77BE1683E508821AB251F33FB7520CE3F8 (void);
// 0x000003E1 System.Boolean System.Text.RegularExpressions.RegexRunner::IsMatched(System.Int32)
extern void RegexRunner_IsMatched_mD7F580AA0533D5C4BC41D18824FA74BE16EAE7A3 (void);
// 0x000003E2 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchIndex(System.Int32)
extern void RegexRunner_MatchIndex_mA8EEC418C65572A82720F5D16BAC99224CF0251A (void);
// 0x000003E3 System.Int32 System.Text.RegularExpressions.RegexRunner::MatchLength(System.Int32)
extern void RegexRunner_MatchLength_m06FA694D5EFE42F89C25C8599BBE86C7726DB2C6 (void);
// 0x000003E4 System.Text.RegularExpressions.RegexRunner System.Text.RegularExpressions.RegexRunnerFactory::CreateInstance()
// 0x000003E5 System.Void System.Text.RegularExpressions.RegexTree::.ctor(System.Text.RegularExpressions.RegexNode,System.Collections.Hashtable,System.Int32[],System.Int32,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexOptions)
extern void RegexTree__ctor_m5B10D5149928B35CE397472028EE327669C211DA (void);
// 0x000003E6 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::Write(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_Write_m57CF8209EF566CD40F9146C74DF889C8AA06E061 (void);
// 0x000003E7 System.Void System.Text.RegularExpressions.RegexWriter::.ctor()
extern void RegexWriter__ctor_m63A858FAE36A8640812DFF917751C1E215A2AE82 (void);
// 0x000003E8 System.Void System.Text.RegularExpressions.RegexWriter::PushInt(System.Int32)
extern void RegexWriter_PushInt_mFBC85956A26FEBC66244C8DFC881106D85DD2C1D (void);
// 0x000003E9 System.Boolean System.Text.RegularExpressions.RegexWriter::EmptyStack()
extern void RegexWriter_EmptyStack_mB0C109FA21F5CFD16A34438BA1CC1CE8BED91E7C (void);
// 0x000003EA System.Int32 System.Text.RegularExpressions.RegexWriter::PopInt()
extern void RegexWriter_PopInt_m8885F9428571674EC224D6BBC93570B1B4671713 (void);
// 0x000003EB System.Int32 System.Text.RegularExpressions.RegexWriter::CurPos()
extern void RegexWriter_CurPos_mEA105879492A4B415FA8AC25B29AA49153F83C18 (void);
// 0x000003EC System.Void System.Text.RegularExpressions.RegexWriter::PatchJump(System.Int32,System.Int32)
extern void RegexWriter_PatchJump_m6C0A440142E7AC772AD4AF7DF5D8291B6CA6D7D2 (void);
// 0x000003ED System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32)
extern void RegexWriter_Emit_mDC0B76CE49A6DE83DD2D169236BCD516AE9263EF (void);
// 0x000003EE System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32)
extern void RegexWriter_Emit_m6B0ACB44155A07161060838F483D555E7EF6ACED (void);
// 0x000003EF System.Void System.Text.RegularExpressions.RegexWriter::Emit(System.Int32,System.Int32,System.Int32)
extern void RegexWriter_Emit_m7C1D08F071C805F13DBF7684AEC3F2F7E748C497 (void);
// 0x000003F0 System.Int32 System.Text.RegularExpressions.RegexWriter::StringCode(System.String)
extern void RegexWriter_StringCode_m6AA17FFEBDD5E155004F05A78CF13B0D8E901158 (void);
// 0x000003F1 System.ArgumentException System.Text.RegularExpressions.RegexWriter::MakeException(System.String)
extern void RegexWriter_MakeException_m443C4CFA99AE06710D1E1BFA3D6EB9737AE70F17 (void);
// 0x000003F2 System.Int32 System.Text.RegularExpressions.RegexWriter::MapCapnum(System.Int32)
extern void RegexWriter_MapCapnum_m6AFE8BED80960BAA522EAA873D535C9D5AD4B811 (void);
// 0x000003F3 System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.RegexWriter::RegexCodeFromRegexTree(System.Text.RegularExpressions.RegexTree)
extern void RegexWriter_RegexCodeFromRegexTree_mAC489A29C00688CA929661BC394F1C4CF997CFC5 (void);
// 0x000003F4 System.Void System.Text.RegularExpressions.RegexWriter::EmitFragment(System.Int32,System.Text.RegularExpressions.RegexNode,System.Int32)
extern void RegexWriter_EmitFragment_mEFDD8EA3A65320222CF4EA8A52B33C687EE0C5AC (void);
// 0x000003F5 System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern void Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA (void);
// 0x000003F6 System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
extern void Stopwatch_StartNew_m5AC5D6676D025980B0E5593F302FBE9AC2870657 (void);
// 0x000003F7 System.Void System.Diagnostics.Stopwatch::.ctor()
extern void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (void);
// 0x000003F8 System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern void Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (void);
// 0x000003F9 System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern void Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (void);
// 0x000003FA System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern void Stopwatch_get_ElapsedTicks_mABB4710231090C75F057E90A29C71C553077A901 (void);
// 0x000003FB System.Void System.Diagnostics.Stopwatch::Reset()
extern void Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765 (void);
// 0x000003FC System.Void System.Diagnostics.Stopwatch::Start()
extern void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (void);
// 0x000003FD System.Void System.Diagnostics.Stopwatch::.cctor()
extern void Stopwatch__cctor_m137C0B2E7182FAEA6E030CD1EDC909E5A3F7A064 (void);
// 0x000003FE System.Void System.ComponentModel.ArrayConverter::.ctor()
extern void ArrayConverter__ctor_m831D145364A55A155BC896935367961A476D53B7 (void);
// 0x000003FF System.Void System.ComponentModel.BooleanConverter::.ctor()
extern void BooleanConverter__ctor_m8293C29BCB7B90516FFE978C6295C0378C1BFEE4 (void);
// 0x00000400 System.Void System.ComponentModel.CollectionConverter::.ctor()
extern void CollectionConverter__ctor_m86DBE477F4462418329C5CFB45C86A9420F852E7 (void);
// 0x00000401 System.Void System.ComponentModel.DecimalConverter::.ctor()
extern void DecimalConverter__ctor_mB015B3871CF834D0C5D8290C9FD15509249921E7 (void);
// 0x00000402 System.Void System.ComponentModel.DoubleConverter::.ctor()
extern void DoubleConverter__ctor_m419F1E782FFBC765D22792D76E56D54FC94E6AEB (void);
// 0x00000403 System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
extern void EditorBrowsableAttribute__ctor_mACDE45DF0DCAA6E923120D6AEC45422AEF958C2E (void);
// 0x00000404 System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
extern void EditorBrowsableAttribute_Equals_m6F5EF9CC298CBDC862CBCA5187379A79635726FA (void);
// 0x00000405 System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
extern void EditorBrowsableAttribute_GetHashCode_m74229847CE44E771F282E2E73FFC4DE55771A1B6 (void);
// 0x00000406 System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
extern void EnumConverter__ctor_mBA8B2E210D061A3CF86950F6D797E911A2E3C774 (void);
// 0x00000407 System.Void System.ComponentModel.Int16Converter::.ctor()
extern void Int16Converter__ctor_mD4D022096E6FB9FFDB84D879E31177A892DD072D (void);
// 0x00000408 System.Void System.ComponentModel.Int32Converter::.ctor()
extern void Int32Converter__ctor_m1CD79AE5880FDE2EC91F1D67E567AAA3618D19B9 (void);
// 0x00000409 System.Void System.ComponentModel.Int64Converter::.ctor()
extern void Int64Converter__ctor_mE4DC71A97EF110B854F22A48AB0F0D3792B53A74 (void);
// 0x0000040A System.Void System.ComponentModel.SingleConverter::.ctor()
extern void SingleConverter__ctor_m8EA7D412C3EE9A9522E7592774DD46EBC6118AA8 (void);
// 0x0000040B System.Void System.ComponentModel.StringConverter::.ctor()
extern void StringConverter__ctor_m2718AC00691AF4A3AF8A8D64896BE3B5D58658B2 (void);
// 0x0000040C System.Void System.ComponentModel.TimeSpanConverter::.ctor()
extern void TimeSpanConverter__ctor_m28E7294174F979EF86FEF9511474B0AB9431217B (void);
// 0x0000040D System.Void System.ComponentModel.TypeConverter::.ctor()
extern void TypeConverter__ctor_m7F8A006E775CCB83A8ACB042B296E48B0AE501CD (void);
// 0x0000040E System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
extern void TypeConverterAttribute__ctor_mD0795A29B6FD59978CAAC6DAF3AC7EC564C519A5 (void);
// 0x0000040F System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
extern void TypeConverterAttribute__ctor_m52D4E66A914F1A04F2F10A7131A701670225D41C (void);
// 0x00000410 System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
extern void TypeConverterAttribute_get_ConverterTypeName_m883941C77E14FC5B4A3E32DD8F59F11739D5D6D8 (void);
// 0x00000411 System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
extern void TypeConverterAttribute_Equals_mDA74DFC28CC7ABC315407EDD1AAC14531C5F6AC4 (void);
// 0x00000412 System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
extern void TypeConverterAttribute_GetHashCode_m35874D49724DA3F72C6C2575FD595A711A659DAA (void);
// 0x00000413 System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
extern void TypeConverterAttribute__cctor_mB1A775F56A5933A17CF349BD466B0CCE66B1078A (void);
// 0x00000414 System.Void System.ComponentModel.Win32Exception::.ctor()
extern void Win32Exception__ctor_mC03E215A1695ED64DDC50F4BE9F59966974DF759 (void);
// 0x00000415 System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
extern void Win32Exception__ctor_m2BEA755F6AA536ADDDF07D83BD8297F02584F714 (void);
// 0x00000416 System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
extern void Win32Exception__ctor_m94A043EE26097BBFE0ED22FD4EBEA357F142EFE6 (void);
// 0x00000417 System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception__ctor_mC7ADDE9D2FEE4E17432F63C24EF1D872380094DB (void);
// 0x00000418 System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
extern void Win32Exception_get_NativeErrorCode_mADB2F3845BEC2405353354CE6B6232741359D857 (void);
// 0x00000419 System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void Win32Exception_GetObjectData_m7CD0D7A0806E4A9D8E78ADCBC616700379AB79E8 (void);
// 0x0000041A System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
extern void Win32Exception_GetErrorMessage_m6085687D868718B45289CB6AF6EDCB7F89D7350D (void);
// 0x0000041B System.Void System.ComponentModel.Win32Exception::InitializeErrorMessages()
extern void Win32Exception_InitializeErrorMessages_m4FE6F56C1C2CCB3F6468F0F9F5AD6E1B08673438 (void);
// 0x0000041C System.Void System.ComponentModel.Win32Exception::.cctor()
extern void Win32Exception__cctor_m800CD9D0B3E3253B79A19B6646A7D28B29C3FC52 (void);
// 0x0000041D System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern void BaseNumberConverter__ctor_mD78E1C7E1F8A977BC7AD33DB0C1E5E32C60E8E83 (void);
// 0x0000041E System.Void System.Security.Authentication.AuthenticationException::.ctor()
extern void AuthenticationException__ctor_m28782FCB7D9F3773F20A9F422CB2843FB70D723A (void);
// 0x0000041F System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String,System.Exception)
extern void AuthenticationException__ctor_m431AB34EFB028337941758B192DF4D045BA93005 (void);
// 0x00000420 System.Void System.Security.Authentication.AuthenticationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void AuthenticationException__ctor_m547DE1104C83024255A4F61AAAE6C6049383C7E6 (void);
// 0x00000421 System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::.ctor(System.Security.Authentication.ExtendedProtection.PolicyEnforcement)
extern void ExtendedProtectionPolicy__ctor_mBE44DA626D1672F2FD87B20304FE7BEBE9512FD4 (void);
// 0x00000422 System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ExtendedProtectionPolicy__ctor_mA48879FD57907A1EDB7969F89AAC217C28C12065 (void);
// 0x00000423 System.String System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::ToString()
extern void ExtendedProtectionPolicy_ToString_mA1C676C5BB8B99B58D140F5C9DC6AFDD227372C1 (void);
// 0x00000424 System.Void System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ExtendedProtectionPolicy_System_Runtime_Serialization_ISerializable_GetObjectData_m84D1771620BA27B1FEEF041D1AC46CCCA5D751EB (void);
// 0x00000425 System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern void Oid__ctor_m45F49EB1ABFD4F3EB0FC9729C76FF83995752743 (void);
// 0x00000426 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
extern void Oid__ctor_m67437A59D4E75ABF6E40D503F57F81199546E5EC (void);
// 0x00000427 System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern void Oid__ctor_m0656E1FC1A7E7BBF694A568DDDF8BE4AFA544985 (void);
// 0x00000428 System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern void Oid__ctor_mA7AFE14DF30B47447BFFC9E41B37B8DB46C9D079 (void);
// 0x00000429 System.String System.Security.Cryptography.Oid::get_Value()
extern void Oid_get_Value_mFE18BDFF095DD5A6643F4FEC3E57846716F37F05 (void);
// 0x0000042A System.Void System.Security.Cryptography.Oid::set_Value(System.String)
extern void Oid_set_Value_m304CEF248379566701402100FA015EAC640C033F (void);
// 0x0000042B System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern void Oid_get_FriendlyName_mEA531D74DAD8FD43948097C418DA23F66399B694 (void);
// 0x0000042C System.Void System.Security.Cryptography.OidCollection::.ctor()
extern void OidCollection__ctor_m99B93BB5B35BF7A395CFB7F8B155DFA8DD734800 (void);
// 0x0000042D System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern void OidCollection_Add_m1FF686421A22A86F8296259D99DA38E02B8BBF5C (void);
// 0x0000042E System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern void OidCollection_get_Item_mB37F923F4714BFE0DF44E8EE4A1A5EA1F3EBB1D9 (void);
// 0x0000042F System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern void OidCollection_get_Count_m6AC0709CDD68451F4CAC942CE94A5A97F3C294B2 (void);
// 0x00000430 System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern void OidCollection_System_Collections_IEnumerable_GetEnumerator_m3FD3A96DFF93BD88A3B28E35A4DEF57AF25ECB30 (void);
// 0x00000431 System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void OidCollection_System_Collections_ICollection_CopyTo_mE508CB1FD9E56CCFE5A4BDD5251D815BF78AC5A9 (void);
// 0x00000432 System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern void OidCollection_get_IsSynchronized_m1300193FE08B13D161AAFB69DA709B41BA7A0FC2 (void);
// 0x00000433 System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern void OidCollection_get_SyncRoot_m6C13949F67338F684C29DD162C8228986DAB6850 (void);
// 0x00000434 System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern void OidEnumerator__ctor_mCA4FBC8408E2B04FD0A524E256E284E8A44E0797 (void);
// 0x00000435 System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern void OidEnumerator_System_Collections_IEnumerator_get_Current_mF11B1F886842EA79EDB215BD5106D0C4C65EBE53 (void);
// 0x00000436 System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern void OidEnumerator_MoveNext_m073D94D5D3254D53DF53429ACAD0AA9BD682221D (void);
// 0x00000437 System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern void OidEnumerator_Reset_m5006C3B1283711E2BDDEA6C25FDF93BBB900195E (void);
// 0x00000438 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoNameFromKey(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoNameFromKey_mA2FD2F391E133E586BC8B827DD916613B590E698 (void);
// 0x00000439 System.String System.Security.Cryptography.CAPI::CryptFindOIDInfoKeyFromName(System.String,System.Security.Cryptography.OidGroup)
extern void CAPI_CryptFindOIDInfoKeyFromName_m7809CD491D913D58FA1B996B835A0A91C413E9DB (void);
// 0x0000043A System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern void AsnEncodedData__ctor_mED24E9D1F11942741819652302C0531D18C39BE6 (void);
// 0x0000043B System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern void AsnEncodedData__ctor_m793EED53B4B8D49D92EE7CEED6B46B16A421D761 (void);
// 0x0000043C System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern void AsnEncodedData_set_Oid_m91E38503AAFD8E6FD98970D94FD43E7A738242A6 (void);
// 0x0000043D System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern void AsnEncodedData_get_RawData_mB9F8281A96011161C67EB3A9208E26C423B187EC (void);
// 0x0000043E System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern void AsnEncodedData_set_RawData_mD7FE2383373A6AF578A4983999D677B58BD6B4EC (void);
// 0x0000043F System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void AsnEncodedData_CopyFrom_m3937C7ACC425960B8E48B7D2EB50E9417A7CD4B7 (void);
// 0x00000440 System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern void AsnEncodedData_ToString_m502785F2F8B4D1EBDF5CEE612FD8D0C2044390D7 (void);
// 0x00000441 System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern void AsnEncodedData_Default_mEEA94BA253ED1B8A719466A8152A5333E0E3FF07 (void);
// 0x00000442 System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern void AsnEncodedData_BasicConstraintsExtension_m64D690A2456E16AF39F6F0784CE74BC9533BB182 (void);
// 0x00000443 System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern void AsnEncodedData_EnhancedKeyUsageExtension_mE04DC17ACCBF3850AFBA454D9937EC4713CC5058 (void);
// 0x00000444 System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern void AsnEncodedData_KeyUsageExtension_m4EE74EA5C4A3C0B72C50DEB22A537812997AF590 (void);
// 0x00000445 System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern void AsnEncodedData_SubjectKeyIdentifierExtension_m261D32E7AE226499BA8AD3FBE24FC0E71C9DEB76 (void);
// 0x00000446 System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern void AsnEncodedData_SubjectAltName_m94FE55170A872B3174D5C495A27AD09F3BACAF49 (void);
// 0x00000447 System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern void AsnEncodedData_NetscapeCertType_m9191830C380BEC39DBE09065B2A4134193EA92D4 (void);
// 0x00000448 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfo(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfo_mE43E0522988511319B8B9F69AF7D0A10B4AE8FA2 (void);
// 0x00000449 System.String System.Security.Cryptography.X509Certificates.X509Utils::FindOidInfoWithFallback(System.UInt32,System.String,System.Security.Cryptography.OidGroup)
extern void X509Utils_FindOidInfoWithFallback_m98443176879ABC2054619D4AA491FE086D406950 (void);
// 0x0000044A System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern void PublicKey__ctor_mE8D32598F92B3941B4DC6AC367C7FFD75C7FAE20 (void);
// 0x0000044B System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern void PublicKey_get_EncodedKeyValue_m4BD0975B491E89FFE2A75C1ACDEB1DCCAF586D4F (void);
// 0x0000044C System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern void PublicKey_get_EncodedParameters_m629FF8D7E4EEDED96BC455B7B953DC5A46D26F4F (void);
// 0x0000044D System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern void PublicKey_get_Key_m9690CE02A29978F4F97623CB72361EC3E69935F7 (void);
// 0x0000044E System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern void PublicKey_get_Oid_mB0AD65FDF84716726D5C7756E5B50CEAD1E4C2AE (void);
// 0x0000044F System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern void PublicKey_GetUnsignedBigInteger_mA92B0B30FA75335EFEFE6B5E8580543C387C3785 (void);
// 0x00000450 System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern void PublicKey_DecodeDSA_mFE5301F7BC0E4ED8DF0EBCCAA0D1DA48972BC901 (void);
// 0x00000451 System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern void PublicKey_DecodeRSA_m39565B7B6C8DDB7666D5C3ABF7951DDC93D35965 (void);
// 0x00000452 System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
extern void PublicKey__cctor_m9F739A93AE91AE86889835AAE256410F4DB808CC (void);
// 0x00000453 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern void X509BasicConstraintsExtension__ctor_m1D3F45762EB686500D2195886AD26FF84E5F4B3C (void);
// 0x00000454 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_mEED7AECEE911DF6CE692301F8F6F6B197DC05729 (void);
// 0x00000455 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern void X509BasicConstraintsExtension__ctor_mD08FE3682F4B2EA23450C6609360F45656495780 (void);
// 0x00000456 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern void X509BasicConstraintsExtension_get_CertificateAuthority_m282E5D9E7640A06AF2CE06A0FA374571F25BAB6F (void);
// 0x00000457 System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern void X509BasicConstraintsExtension_get_HasPathLengthConstraint_m463A8B4DF4BEB46A9353309AA5EF3EAA2F7A4D42 (void);
// 0x00000458 System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern void X509BasicConstraintsExtension_get_PathLengthConstraint_m93EF2B2BA6D6AD72DE59D98EB0E40DDD2AB3B49F (void);
// 0x00000459 System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509BasicConstraintsExtension_CopyFrom_mE64F232FB7DF702DCDB6692537B8F1010AA316DC (void);
// 0x0000045A System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern void X509BasicConstraintsExtension_Decode_m40A688DD3A933B24A3E9EFE505299F70AFF32E81 (void);
// 0x0000045B System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern void X509BasicConstraintsExtension_Encode_m04068558E7AF843C57A8BA9C39E251B7B37A1CDF (void);
// 0x0000045C System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern void X509BasicConstraintsExtension_ToString_m75957B2B18A84645897676F0DAC473F022848336 (void);
// 0x0000045D System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Certificate2::get_Impl()
extern void X509Certificate2_get_Impl_m94A4BA63853808B2FAC8DD5E50BF4B2FA7C223F3 (void);
// 0x0000045E System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor()
extern void X509Certificate2__ctor_m97D8E28308096BB3A2500555747B6483F27859FD (void);
// 0x0000045F System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern void X509Certificate2__ctor_m250524B3AB0EECD558BA985D6B411D39F125EF49 (void);
// 0x00000460 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String)
extern void X509Certificate2__ctor_mD1D7DED07A569B3432DC40B40AE4482B0A8C1EAD (void);
// 0x00000461 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void X509Certificate2__ctor_m50D7739EB358531A13410F4A29353D0418F9EE51 (void);
// 0x00000462 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern void X509Certificate2_get_NotAfter_mD2C055B86883353CFB0E8C1D6CE35D785756C624 (void);
// 0x00000463 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern void X509Certificate2_get_NotBefore_mC074732D5C2E74642F1BA1C303B060A381A4A777 (void);
// 0x00000464 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern void X509Certificate2_get_PrivateKey_m91743B42723CF3480CAD698F086CAE1DB7BBD266 (void);
// 0x00000465 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern void X509Certificate2_set_PrivateKey_m88C8F93F732EFB4DA3BAC10765CAF03186750BB2 (void);
// 0x00000466 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern void X509Certificate2_get_PublicKey_m325BCDA2DE132D5B7B2093BCED2942ED657D89E3 (void);
// 0x00000467 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern void X509Certificate2_get_SerialNumber_m19595DBE6522106CAAAFA680EF4CE67698A8F51D (void);
// 0x00000468 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern void X509Certificate2_get_SignatureAlgorithm_mF9BED26F8117E76F230A87F79FD4C19242FAE662 (void);
// 0x00000469 System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern void X509Certificate2_get_Thumbprint_m4C3269CB216BC275CFEA77A808A787B5773E97AA (void);
// 0x0000046A System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern void X509Certificate2_get_Version_m21075DDC00E0FA0C7A9FAA5D561973F720B7BDE3 (void);
// 0x0000046B System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_m5D2E42024D98335D958C3875D188C8F8127299BA (void);
// 0x0000046C System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2_Import_m8687BF7214331468AE004EFE3C65E73B0057F0AC (void);
// 0x0000046D System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern void X509Certificate2_Reset_mEE19ADA2C022461B3DB1F39100997A6F34FFB1D3 (void);
// 0x0000046E System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern void X509Certificate2_ToString_mFEEFBB4A2B5779A9D16F9E2536F1D94F423CA3A8 (void);
// 0x0000046F System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern void X509Certificate2_ToString_m2613DF600F5A88EC6836930FD45D6063251C9391 (void);
// 0x00000470 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2_AppendBuffer_mACE3DD61A1C5C88DEF25BC5C4562B5790ED97312 (void);
// 0x00000471 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern void X509Certificate2__cctor_mABA66D529C24C35091DD9560BC7314F0F3AF979D (void);
// 0x00000472 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.cctor()
extern void X509Certificate2Collection__cctor_m8F5A775DC6302B95D1CA30B5C576AD4907E94516 (void);
// 0x00000473 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PrivateKey()
// 0x00000474 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
// 0x00000475 System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PublicKey()
// 0x00000476 System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_SignatureAlgorithm()
// 0x00000477 System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_Version()
// 0x00000478 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_IntermediateCertificates()
// 0x00000479 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
// 0x0000047A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::Reset()
// 0x0000047B System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
extern void X509Certificate2Impl__ctor_m121B40B8937DAEE3D81BA7577555E09194FF11A2 (void);
// 0x0000047C System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IsValid()
extern void X509Certificate2ImplMono_get_IsValid_m4C590E5F7A23A9F1DD5594A7D88F51474646817C (void);
// 0x0000047D System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
extern void X509Certificate2ImplMono__ctor_m9DE01D05F0A540B906D6F826B51B64FD7FC9E028 (void);
// 0x0000047E System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
extern void X509Certificate2ImplMono__ctor_mEBE15206EC5939F6722168220CB8B110FFD915D2 (void);
// 0x0000047F System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Clone()
extern void X509Certificate2ImplMono_Clone_m1870DF0CF85E284FCA158FD11238F23796354498 (void);
// 0x00000480 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetIssuerName(System.Boolean)
extern void X509Certificate2ImplMono_GetIssuerName_mC61A5CC300E550C2C4C12733D6EE0C5806723233 (void);
// 0x00000481 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSubjectName(System.Boolean)
extern void X509Certificate2ImplMono_GetSubjectName_mCE8064CFCFD15F29ED869C1F552BDA1911944728 (void);
// 0x00000482 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetRawCertData()
extern void X509Certificate2ImplMono_GetRawCertData_mF60B75105FDED073333B0A45D417DC84970CA808 (void);
// 0x00000483 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetCertHash(System.Boolean)
extern void X509Certificate2ImplMono_GetCertHash_m552986EA33DB6FD437358D422E14B5A3BA69092A (void);
// 0x00000484 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidFrom()
extern void X509Certificate2ImplMono_GetValidFrom_m9E27BEDF0995B987B5BBE2074C5626A6092C6AB8 (void);
// 0x00000485 System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetValidUntil()
extern void X509Certificate2ImplMono_GetValidUntil_m221B50B0D2216CD5CCF290C4E37ADECFC723381C (void);
// 0x00000486 System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Equals(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean&)
extern void X509Certificate2ImplMono_Equals_m072C86FBDE9AE37E0AF69E4DA7AD04A8412F7232 (void);
// 0x00000487 System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetSerialNumber()
extern void X509Certificate2ImplMono_GetSerialNumber_m0F23B3F377F4801057A57949E977918166A6DFC3 (void);
// 0x00000488 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor()
extern void X509Certificate2ImplMono__ctor_m6494CD178AF6E96CE4046E4CC1AB68236CCE7399 (void);
// 0x00000489 System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PrivateKey()
extern void X509Certificate2ImplMono_get_PrivateKey_m0F1E05FC97141DEDB3230B4B4B3617DAEBFDCD2C (void);
// 0x0000048A System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern void X509Certificate2ImplMono_set_PrivateKey_mC54B0F8F8FF4B1588C1B61361DA974E8A15FD345 (void);
// 0x0000048B System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PublicKey()
extern void X509Certificate2ImplMono_get_PublicKey_m9FEE1E367B63542EEA2A517C7A4618C163C4B2D7 (void);
// 0x0000048C System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_SignatureAlgorithm()
extern void X509Certificate2ImplMono_get_SignatureAlgorithm_m158A12F7972A7104172BBC8F5FE31186B2758D3C (void);
// 0x0000048D System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Version()
extern void X509Certificate2ImplMono_get_Version_mAF4475ABA5E17ABB6FD9EE9A6BDCB8EA269836CC (void);
// 0x0000048E Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
extern void X509Certificate2ImplMono_ImportPkcs12_m7C9D1CD7EB5D1CBD27E20EB92D494C65BDA240D0 (void);
// 0x0000048F System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern void X509Certificate2ImplMono_Import_mB7A89EF3758EDF0BA2BA0AF78AE2D4BB61D5E0FF (void);
// 0x00000490 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Reset()
extern void X509Certificate2ImplMono_Reset_m91B0462356708973478FC82A9D12EECF56FD4FAE (void);
// 0x00000491 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString()
extern void X509Certificate2ImplMono_ToString_mB5CE336C20BF230C1B0153BF1D2612FD22E0347F (void);
// 0x00000492 System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ToString(System.Boolean)
extern void X509Certificate2ImplMono_ToString_m88CDD1F5BDC5CDB329A872B58AF69CDB10799321 (void);
// 0x00000493 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern void X509Certificate2ImplMono_AppendBuffer_mDB49D80453E139498ABF2BC30ED526A61D2F4F71 (void);
// 0x00000494 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IntermediateCertificates()
extern void X509Certificate2ImplMono_get_IntermediateCertificates_m053FE037CA3747C75B056C11AA56DB1F2EE36809 (void);
// 0x00000495 System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.cctor()
extern void X509Certificate2ImplMono__cctor_m8ABA0491BD741AF08233E6B3B2B4F61420FF4C65 (void);
// 0x00000496 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern void X509CertificateCollection__ctor_m3CEEDA1CDA93234E6E78DFB6563738B050AFF6CA (void);
// 0x00000497 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection__ctor_m24BAA500237577256DCA1BD814ED88D163E702E3 (void);
// 0x00000498 System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern void X509CertificateCollection_get_Item_m799058377874ABF0EEE8AD63AE89B62B930A1E57 (void);
// 0x00000499 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void X509CertificateCollection_Add_mDF43F609EAE240711FCE880E66EE814178AB2E66 (void);
// 0x0000049A System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateCollection_AddRange_m420F91827C84ED68AB81855E07BBF0CA7D150289 (void);
// 0x0000049B System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern void X509CertificateCollection_GetEnumerator_mD28E40E9104E833480FA012B1CE905AC08A7AD4F (void);
// 0x0000049C System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern void X509CertificateCollection_GetHashCode_m383BD6816EEFE8FA5CA81CA4279B5334231EF84D (void);
// 0x0000049D System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509CertificateEnumerator__ctor_m81F0C80052FB25D722E5E66D5121D9F559A2EEB4 (void);
// 0x0000049E System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern void X509CertificateEnumerator_get_Current_mDA87DA5B1CD027E452E22112ED43423F95573BE0 (void);
// 0x0000049F System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m92ACFD522418E3D722E6C723FA93FBFC7A1A3EBC (void);
// 0x000004A0 System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m99B025AB34B4F5CFAD7836A73D01FBE1AEA019F4 (void);
// 0x000004A1 System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m7EC63F5898E3A9881E73EB6205238C31ED4CC323 (void);
// 0x000004A2 System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern void X509CertificateEnumerator_MoveNext_m472F420F968A52D970486D21BFFABCCE5329F714 (void);
// 0x000004A3 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
extern void X509CertificateImplCollection__ctor_mC714F3565563EC51068E2601AE9B9F34E2850876 (void);
// 0x000004A4 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
extern void X509CertificateImplCollection__ctor_mBD6BE41E55AE1A9FF1E6B528638D002209F7BFB0 (void);
// 0x000004A5 System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Count()
extern void X509CertificateImplCollection_get_Count_m1503CBCEDE4650173097C408898F1806582CC77E (void);
// 0x000004A6 System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Item(System.Int32)
extern void X509CertificateImplCollection_get_Item_m24CA14D68946B6E0006B162BA284EB51F826F276 (void);
// 0x000004A7 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
extern void X509CertificateImplCollection_Add_m3A1312DA419D2777C0A5F37ADA482A40C3256BE6 (void);
// 0x000004A8 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
extern void X509CertificateImplCollection_Clone_mFA9129A5042E00B9068B45572B98E83EF3EF7368 (void);
// 0x000004A9 System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose()
extern void X509CertificateImplCollection_Dispose_mF63BF196D21676FD5055763520ABC93F56A4449F (void);
// 0x000004AA System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean)
extern void X509CertificateImplCollection_Dispose_m7C6F7B2BB470BE090CCA19E50C4A6E9004441D67 (void);
// 0x000004AB System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Finalize()
extern void X509CertificateImplCollection_Finalize_mAFC19642C1398BE1591E4628C10179D4D676ED99 (void);
// 0x000004AC System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::get_Impl()
extern void X509Chain_get_Impl_mC8D8FB1BED19A1E40D1DAA7561448ADFA094B740 (void);
// 0x000004AD System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern void X509Chain__ctor_mC6F6E3F01D21638D909E13D151923EB4BF592CAB (void);
// 0x000004AE System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern void X509Chain__ctor_m8273B96D3DA26CDF61C71723A980E09214D1DF36 (void);
// 0x000004AF System.Void System.Security.Cryptography.X509Certificates.X509Chain::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509Chain_set_ChainPolicy_mFFC95743026B78C7B6DA33B51CEBD81FA2215EDD (void);
// 0x000004B0 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
extern void X509Chain_Dispose_m4CC4E701CE9CA80CC1C3787E84D955D6B7632A2E (void);
// 0x000004B1 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
extern void X509Chain_Dispose_m0233872244BD2AA33E6C4D2AE572FFB991909FE9 (void);
// 0x000004B2 System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
extern void X509Chain_Finalize_mC31E8C29EA7A66E5B4D2D41C1CACF7AF5BB94AD3 (void);
// 0x000004B3 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern void X509ChainElementCollection__ctor_m035B6BC8E21811A1536A60FFA9BAB9A4159323E3 (void);
// 0x000004B4 System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern void X509ChainElementCollection_get_Count_m93E1B437A465A5DC0D48F0184EF55370D0E29E2F (void);
// 0x000004B5 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern void X509ChainElementCollection_get_IsSynchronized_m6B3C0432C195CD7A8E963B1B21451FE91B569D32 (void);
// 0x000004B6 System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern void X509ChainElementCollection_get_SyncRoot_m376A94E55300F3C9CC2A37C50774E04FFE4F7776 (void);
// 0x000004B7 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void X509ChainElementCollection_System_Collections_ICollection_CopyTo_mFB0649BFDEA056BF980F17B68DE6B66DF436E3D8 (void);
// 0x000004B8 System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern void X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_mA687F2811DD1F678D629FC166F4288DD340D02F9 (void);
// 0x000004B9 System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
extern void X509ChainElementEnumerator__ctor_mC91FB54A5BD2C0B0E972FBCA193C5A453FC6957A (void);
// 0x000004BA System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
extern void X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mC3EC8EDFD95897AD140B4F680905E65D8B04B49C (void);
// 0x000004BB System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
extern void X509ChainElementEnumerator_MoveNext_mF90FBF977D510F6FCF47D5B8CB34254C2822A775 (void);
// 0x000004BC System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
extern void X509ChainElementEnumerator_Reset_m1D149AB7FF36C6200FB205408D5E856FCE624CCA (void);
// 0x000004BD System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid()
// 0x000004BE System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
// 0x000004BF System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
extern void X509ChainImpl_Dispose_m0018CE8D4317FCAEEA5465425BF5BB5A4A728CBA (void);
// 0x000004C0 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
extern void X509ChainImpl_Dispose_m0F4B69EE7F402C78C833599FB0F4BEC101CB328B (void);
// 0x000004C1 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
extern void X509ChainImpl_Finalize_mD3777623D36204B695026890DAAC789BE8273724 (void);
// 0x000004C2 System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
extern void X509ChainImpl__ctor_m2DC75C34EFF93D4A1DEF14F168489613A557C962 (void);
// 0x000004C3 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
extern void X509ChainImplMono__ctor_m9EEB55A0D2F4EC7D21C5D8FB470A8B9B9094A935 (void);
// 0x000004C4 System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_IsValid()
extern void X509ChainImplMono_get_IsValid_m782E5277F3BEF121956B1C90D56FA275879BD706 (void);
// 0x000004C5 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy)
extern void X509ChainImplMono_set_ChainPolicy_m16F6430F9445BF75D7965A0ED22F8E17E8A4DDF2 (void);
// 0x000004C6 System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.cctor()
extern void X509ChainImplMono__cctor_m95136BE1101C06B64816562118FA9E3502406EB2 (void);
// 0x000004C7 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern void X509ChainPolicy__ctor_m68882C53D2D8D22007332CCA165F650078751ED4 (void);
// 0x000004C8 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern void X509ChainPolicy__ctor_m53AB51FBA21115B866EB0AB6AEE039B6167F6A4D (void);
// 0x000004C9 System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern void X509ChainPolicy_Reset_m651C65C1321FEFE9E3EDFC1BE2706AEFE2C612DA (void);
// 0x000004CA System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509EnhancedKeyUsageExtension__ctor_mC91E46E79086AAFCD611FB3A223797D20BA9C1C2 (void);
// 0x000004CB System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509EnhancedKeyUsageExtension_CopyFrom_mC206A056C8C59401AA01F8C935DDE27D7E34D96A (void);
// 0x000004CC System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern void X509EnhancedKeyUsageExtension_Decode_m1865B86FE190237641C00804A058BF56F125183D (void);
// 0x000004CD System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern void X509EnhancedKeyUsageExtension_ToString_m99085514587961F4AB1CA3FB82E5223801475818 (void);
// 0x000004CE System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern void X509Extension__ctor_m75C6A788965E9C797F3D47DEFEC366EC2F69F384 (void);
// 0x000004CF System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern void X509Extension_get_Critical_m8F4D4C2F0ECBE5CB4C9998CE3E56D5040E2EEBE2 (void);
// 0x000004D0 System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern void X509Extension_set_Critical_mA2B424FF17DE53E01E586015DD1C742773B060B4 (void);
// 0x000004D1 System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509Extension_CopyFrom_m03B3EAD99E076090F01D26FF483E827397903A02 (void);
// 0x000004D2 System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern void X509Extension_FormatUnkownData_mE5BAB7DB56CE215EB704A7E4E6866EBECA18F90A (void);
// 0x000004D3 System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.cctor()
extern void X509ExtensionCollection__cctor_m6411CBA0D4CBA290257D88C740C5FD7E40B209C1 (void);
// 0x000004D4 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::Initialize()
extern void X509Helper2_Initialize_m6FA880503C9B3B72009F718503C6B0A0BF301004 (void);
// 0x000004D5 System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl)
extern void X509Helper2_ThrowIfContextInvalid_mF76EFD9C0DE50B993ABBEDFCFCF4A235435E521E (void);
// 0x000004D6 System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,System.Boolean)
extern void X509Helper2_Import_mF1D23CC497CC19E02E74727315D59A28714FCA92 (void);
// 0x000004D7 System.Security.Cryptography.X509Certificates.X509Certificate2Impl System.Security.Cryptography.X509Certificates.X509Helper2::Import(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean)
extern void X509Helper2_Import_m3DF644063B9FF160B750E5CD056FE06B1AEEDF8C (void);
// 0x000004D8 System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
extern void X509Helper2_CreateChainImpl_m5A5909ADD8809F95E64FC576BB29EF5B5F878D24 (void);
// 0x000004D9 System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_IsValid_mE1C295645E14225C9013A23339E52201C05419F7 (void);
// 0x000004DA System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
extern void X509Helper2_ThrowIfContextInvalid_m2CE36D57CDF7DCD4EDD5586EF5D526386B009DB5 (void);
// 0x000004DB System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
extern void X509Helper2_GetInvalidChainContextException_m6435C6B754A3A3E6A69DCF16C9F962E0205323AC (void);
// 0x000004DC System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::Import(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void MyNativeHelper_Import_m447532D56EE4A4E2FD5B61528D0E5DCABF7CF6B0 (void);
// 0x000004DD System.Void System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper::.ctor()
extern void MyNativeHelper__ctor_m3AF762F0DB59E0F744C69BB9306F39DF6AAE7516 (void);
// 0x000004DE System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern void X509KeyUsageExtension__ctor_mCCDDE2A55EF78832C8117C680FB264CE91893A99 (void);
// 0x000004DF System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509KeyUsageExtension__ctor_mA9DDAD17EA38ABB83CD6CC9A353A0667A9EAC018 (void);
// 0x000004E0 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern void X509KeyUsageExtension__ctor_mBC544E9444992C7883638DB0B4607945F33E7426 (void);
// 0x000004E1 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern void X509KeyUsageExtension_get_KeyUsages_m9544DC0FAAD02C53D6C649E1831176CB54EFE505 (void);
// 0x000004E2 System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509KeyUsageExtension_CopyFrom_m8DA1FA691943CBD4B94E45096E83FC5EA9EEEA3F (void);
// 0x000004E3 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern void X509KeyUsageExtension_GetValidFlags_m7946BD756F14B17D707EE12E7D82878531D115EB (void);
// 0x000004E4 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern void X509KeyUsageExtension_Decode_mDE97A425A199661D89FE252A75C8644D4280F1B2 (void);
// 0x000004E5 System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern void X509KeyUsageExtension_Encode_mBBF95E13B1FE1A0507FD692F770D6E98A68E3360 (void);
// 0x000004E6 System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern void X509KeyUsageExtension_ToString_m4455C1B31C62530B930CFADE55DC0E77C60C7EFC (void);
// 0x000004E7 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern void X509SubjectKeyIdentifierExtension__ctor_mD586705C293A9C27B5B57BF9CF1D8EAD84864B29 (void);
// 0x000004E8 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m45218EE7D32231FA6C44A40FEC2E5052162012D6 (void);
// 0x000004E9 System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m182458124147FFEE402584E6415C2EA407B59C5B (void);
// 0x000004EA System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m95DD08883D5E284C15820274737324063C4E4432 (void);
// 0x000004EB System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_m98571FC543622A4BD3EA7788BB132348D9E0A3E3 (void);
// 0x000004EC System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern void X509SubjectKeyIdentifierExtension__ctor_mF692F46CE97CB60AF86C1A74E709E8276B7D9AB1 (void);
// 0x000004ED System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern void X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m3480A14D8377B6C2D220F99D37AB8B13BEFE76FF (void);
// 0x000004EE System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern void X509SubjectKeyIdentifierExtension_CopyFrom_m45E7EB4E976E4759046077C79FBC4A820C9A95EC (void);
// 0x000004EF System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChar_m7BDBE176CD85DCA3193FECF78D6CF15E349121BC (void);
// 0x000004F0 System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern void X509SubjectKeyIdentifierExtension_FromHexChars_mB2D3EBC7E627D44254A82E5628A2079C1DB24C38 (void);
// 0x000004F1 System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern void X509SubjectKeyIdentifierExtension_FromHex_m654E8BB1D2F9D8C878EF854D7933C6EA825F272B (void);
// 0x000004F2 System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern void X509SubjectKeyIdentifierExtension_Decode_m6EB136D7525F3DFB9FA93F8B3653D2F6FA3B72D1 (void);
// 0x000004F3 System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern void X509SubjectKeyIdentifierExtension_Encode_m11C84A3DCE621526C1FC282E214001D70937D6BD (void);
// 0x000004F4 System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern void X509SubjectKeyIdentifierExtension_ToString_mB22086D5277B22093240BB9841D32D9008D26AFA (void);
// 0x000004F5 System.String System.Net.HttpStatusDescription::Get(System.Int32)
extern void HttpStatusDescription_Get_mAFB12EDE2A87E466FD399A8D246B99A6EC9345F5 (void);
// 0x000004F6 System.Void System.Net.AuthenticationSchemeSelector::.ctor(System.Object,System.IntPtr)
extern void AuthenticationSchemeSelector__ctor_mF1BA87F03767AB9794B4F8F86EF2955393672E06 (void);
// 0x000004F7 System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::Invoke(System.Net.HttpListenerRequest)
extern void AuthenticationSchemeSelector_Invoke_mE57292EBF99538732BF84075F1F9854AC4132407 (void);
// 0x000004F8 System.IAsyncResult System.Net.AuthenticationSchemeSelector::BeginInvoke(System.Net.HttpListenerRequest,System.AsyncCallback,System.Object)
extern void AuthenticationSchemeSelector_BeginInvoke_m487973860B7C17A557BA41612EB3296AC7170E6C (void);
// 0x000004F9 System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::EndInvoke(System.IAsyncResult)
extern void AuthenticationSchemeSelector_EndInvoke_m3FB9ABA28933CF17C959412BDDF345BB0968A9F8 (void);
// 0x000004FA System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern void CredentialCache_get_DefaultCredentials_m669684689D1F69432F33D9B1E0ECF53080BB8CDC (void);
// 0x000004FB System.Void System.Net.SystemNetworkCredential::.ctor()
extern void SystemNetworkCredential__ctor_m51111F468A7CFB7B990C2C618A99EDC7FA7B307A (void);
// 0x000004FC System.Void System.Net.SystemNetworkCredential::.cctor()
extern void SystemNetworkCredential__cctor_m42F0FC8A6A428F7764FC5A86B38469FC032D3340 (void);
// 0x000004FD System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern void EndPoint_get_AddressFamily_m7B7DC3AE75480FCA543AE5434EFA8C8C09450C66 (void);
// 0x000004FE System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern void EndPoint_Serialize_m118001AAA9AC84B4B28E8267055A7173D8C1F376 (void);
// 0x000004FF System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern void EndPoint_Create_m98FBA607C33234AC35DF79DB6494D13AED7A501C (void);
// 0x00000500 System.Void System.Net.EndPoint::.ctor()
extern void EndPoint__ctor_mFCD3A4BB994F59D40A3A94A6F1DEC4A731CC8776 (void);
// 0x00000501 System.Net.IWebProxy System.Net.GlobalProxySelection::get_Select()
extern void GlobalProxySelection_get_Select_mE826A34EB04E3906E699A317417506C89551F54B (void);
// 0x00000502 System.Net.IWebProxy System.Net.GlobalProxySelection::GetEmptyWebProxy()
extern void GlobalProxySelection_GetEmptyWebProxy_m66C1CA6E4480F45F78145DD23AB51A59B5A246AD (void);
// 0x00000503 System.Void System.Net.HttpListenerException::.ctor()
extern void HttpListenerException__ctor_m9BC4BC074F9B7B9D678C057D56A4CFCCB37E2464 (void);
// 0x00000504 System.Void System.Net.HttpListenerException::.ctor(System.Int32,System.String)
extern void HttpListenerException__ctor_m6C470B076D54477CFC20D98E0E38EBFF07C7A878 (void);
// 0x00000505 System.Void System.Net.HttpListenerException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpListenerException__ctor_mB812D3DB9D6A3899809B8A82D70F3D2143300FBC (void);
// 0x00000506 System.Void System.Net.HttpListenerRequestUriBuilder::.cctor()
extern void HttpListenerRequestUriBuilder__cctor_m104F4B27BEA2C76C833192A0F5563A07DFED469E (void);
// 0x00000507 System.Void System.Net.HttpListenerRequestUriBuilder::.ctor(System.String,System.String,System.String,System.String,System.String)
extern void HttpListenerRequestUriBuilder__ctor_mB131B04B2FA97630C9258565DE33111752C5E994 (void);
// 0x00000508 System.Uri System.Net.HttpListenerRequestUriBuilder::GetRequestUri(System.String,System.String,System.String,System.String,System.String)
extern void HttpListenerRequestUriBuilder_GetRequestUri_mDB82A173CA80B73EDD411DFC82B5A31A703E5A7E (void);
// 0x00000509 System.Uri System.Net.HttpListenerRequestUriBuilder::Build()
extern void HttpListenerRequestUriBuilder_Build_mB1CC1A9F3413331412F227BF61F746FC1FA6DA19 (void);
// 0x0000050A System.Void System.Net.HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath()
extern void HttpListenerRequestUriBuilder_BuildRequestUriUsingCookedPath_m70FCDC32D4A7EE40ACE71EEC3AE44FE131889415 (void);
// 0x0000050B System.Void System.Net.HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath()
extern void HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_m0E453F2D4D1D95031CD4DF88ED066E22D8BBB034 (void);
// 0x0000050C System.Text.Encoding System.Net.HttpListenerRequestUriBuilder::GetEncoding(System.Net.HttpListenerRequestUriBuilder/EncodingType)
extern void HttpListenerRequestUriBuilder_GetEncoding_mB17CEA06BA892446D8EEEE2AE099D7A9EE52D1BD (void);
// 0x0000050D System.Net.HttpListenerRequestUriBuilder/ParsingResult System.Net.HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath(System.Text.Encoding)
extern void HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_m819EC39E6F94B9BFD094449FEF47DF777EBBB79A (void);
// 0x0000050E System.Net.HttpListenerRequestUriBuilder/ParsingResult System.Net.HttpListenerRequestUriBuilder::ParseRawPath(System.Text.Encoding)
extern void HttpListenerRequestUriBuilder_ParseRawPath_m2A69E420163F21437CE379DF1337117914056C62 (void);
// 0x0000050F System.Boolean System.Net.HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded(System.String)
extern void HttpListenerRequestUriBuilder_AppendUnicodeCodePointValuePercentEncoded_m4A3489918AADAF645FCB04734A34EC09DB69161A (void);
// 0x00000510 System.Boolean System.Net.HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList(System.Text.Encoding,System.String)
extern void HttpListenerRequestUriBuilder_AddPercentEncodedOctetToRawOctetsList_mFC7200F04648EF2DF3D7A66B63D39BA44D70AEE1 (void);
// 0x00000511 System.Boolean System.Net.HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList(System.Text.Encoding)
extern void HttpListenerRequestUriBuilder_EmptyDecodeAndAppendRawOctetsList_mC17513EEC8F7BC45957D0102E8A37E59261D68FD (void);
// 0x00000512 System.Void System.Net.HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded(System.Text.StringBuilder,System.Collections.Generic.IEnumerable`1<System.Byte>)
extern void HttpListenerRequestUriBuilder_AppendOctetsPercentEncoded_m2E001B9A8DA251D3108F15BF1C54F0489BABC4C0 (void);
// 0x00000513 System.String System.Net.HttpListenerRequestUriBuilder::GetOctetsAsString(System.Collections.Generic.IEnumerable`1<System.Byte>)
extern void HttpListenerRequestUriBuilder_GetOctetsAsString_mD0A57ADD1236B1A0384A9BB37D7D30CBBCFFFE86 (void);
// 0x00000514 System.String System.Net.HttpListenerRequestUriBuilder::GetPath(System.String)
extern void HttpListenerRequestUriBuilder_GetPath_mB084C11F2138AB64E91DD4C1AC28705AC1FE3F16 (void);
// 0x00000515 System.String System.Net.HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath(System.String)
extern void HttpListenerRequestUriBuilder_AddSlashToAsteriskOnlyPath_m17DA8197FC3F43E2FA74F9A7AA2698C7317CC71F (void);
// 0x00000516 System.Void System.Net.HttpListenerRequestUriBuilder::LogWarning(System.String,System.String,System.Object[])
extern void HttpListenerRequestUriBuilder_LogWarning_mA13DF789A9FEEAA85BCD4F58C580E706296D128C (void);
// 0x00000517 System.Void System.Net.HttpVersion::.cctor()
extern void HttpVersion__cctor_m19EB2E84E83F160B93594A35BB6C96C5B50D6856 (void);
// 0x00000518 System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
// 0x00000519 System.Void System.Net.IPAddress::.ctor(System.Int64)
extern void IPAddress__ctor_mFD0AF2F6A282D1158DF3C34EF2E63B73814E7748 (void);
// 0x0000051A System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern void IPAddress__ctor_m373D3930BEEA00EC628E98C5A13AE9BE2B2CEC84 (void);
// 0x0000051B System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.UInt32)
extern void IPAddress__ctor_m7A866EC7E9B1A8F89158C0EA1AC0A966CFE819ED (void);
// 0x0000051C System.Void System.Net.IPAddress::.ctor(System.Int32)
extern void IPAddress__ctor_mCC321EEDA0750DA97447EB60529BCBCB4EA0249D (void);
// 0x0000051D System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern void IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA (void);
// 0x0000051E System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern void IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (void);
// 0x0000051F System.Net.IPAddress System.Net.IPAddress::InternalParse(System.String,System.Boolean)
extern void IPAddress_InternalParse_m69E95769392647AE9B82AFEC6D7E74C4F7CCFD47 (void);
// 0x00000520 System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern void IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2 (void);
// 0x00000521 System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern void IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693 (void);
// 0x00000522 System.Int64 System.Net.IPAddress::get_ScopeId()
extern void IPAddress_get_ScopeId_m941461DEBDECCD858F8D3165F3CA366A318064D9 (void);
// 0x00000523 System.String System.Net.IPAddress::ToString()
extern void IPAddress_ToString_m0CAEDDAF2A42F23EB1BE3BB353ABE741486710BF (void);
// 0x00000524 System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern void IPAddress_IsLoopback_m84B87F0732723BE939EB9534E8271A13EE599027 (void);
// 0x00000525 System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
extern void IPAddress_Equals_mADA54686760DE75E2C31B8651224FFEB019316D6 (void);
// 0x00000526 System.Boolean System.Net.IPAddress::Equals(System.Object)
extern void IPAddress_Equals_mB38BAC1A15885A3181507BC9FD4E8F5765FA6678 (void);
// 0x00000527 System.Int32 System.Net.IPAddress::GetHashCode()
extern void IPAddress_GetHashCode_m36CE850AFAAD382A29B7D72844989A3105565D7C (void);
// 0x00000528 System.Net.IPAddress System.Net.IPAddress::MapToIPv6()
extern void IPAddress_MapToIPv6_mC852A3F6831381331095C81AB75B0A70ABD2498B (void);
// 0x00000529 System.Void System.Net.IPAddress::.cctor()
extern void IPAddress__cctor_m4DF372012DF900E7BB489931296D0BFE4EBD4AEA (void);
// 0x0000052A System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern void IPEndPoint_get_AddressFamily_m53CEE40486A2F3615571B5255CA6D4C28387703A (void);
// 0x0000052B System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (void);
// 0x0000052C System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern void IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4 (void);
// 0x0000052D System.Int32 System.Net.IPEndPoint::get_Port()
extern void IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9 (void);
// 0x0000052E System.String System.Net.IPEndPoint::ToString()
extern void IPEndPoint_ToString_mB132354BB333FA5FD9CA5B6B86F751AAA87AFEC2 (void);
// 0x0000052F System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern void IPEndPoint_Serialize_mE4201DDF2EB6D872A31A2620D20C718DC1F28962 (void);
// 0x00000530 System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern void IPEndPoint_Create_m1B1932CCD58627047FAEDC2402C333BF6468A3D7 (void);
// 0x00000531 System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern void IPEndPoint_Equals_mBD402EE46BB0C0922C25E2DEFB64412E4666EC6D (void);
// 0x00000532 System.Int32 System.Net.IPEndPoint::GetHashCode()
extern void IPEndPoint_GetHashCode_m52D8AEEDB5B1409EDD08F18B2018CEB1712266C0 (void);
// 0x00000533 System.Void System.Net.IPEndPoint::.cctor()
extern void IPEndPoint__cctor_mD88387D86BAE58328D7BA158704E91B0415F9B81 (void);
// 0x00000534 System.String System.Net.IPHostEntry::get_HostName()
extern void IPHostEntry_get_HostName_m58DC3A2664BA86513E055ECA103214D00EFD1605 (void);
// 0x00000535 System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern void IPHostEntry_set_HostName_mE132ABF58C3C4C28A58A48132698FA99F55C328D (void);
// 0x00000536 System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern void IPHostEntry_set_Aliases_m4D05E9F3D5C6FD0996C86816B36B1DF9BE79D8ED (void);
// 0x00000537 System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern void IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56 (void);
// 0x00000538 System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern void IPHostEntry_set_AddressList_m057A9B8FA93A129A0DAF5222231BD155B774B50B (void);
// 0x00000539 System.Void System.Net.IPHostEntry::.ctor()
extern void IPHostEntry__ctor_m539B6CE87B29D7B23A4F46C73BF7D6BB74D0331F (void);
// 0x0000053A System.Void System.Net.InternalException::.ctor()
extern void InternalException__ctor_m4963B2F0FC3F351663C67F3F71CAC601D73DF499 (void);
// 0x0000053B System.Boolean System.Net.NclUtilities::IsAddressLocal(System.Net.IPAddress)
extern void NclUtilities_IsAddressLocal_m15E0BC8FA72FF335F31D5377AC1ED599FA5966DC (void);
// 0x0000053C System.Net.IPHostEntry System.Net.NclUtilities::GetLocalHost()
extern void NclUtilities_GetLocalHost_m05F1444B07A59C035365C4F17DD28959EA8843BD (void);
// 0x0000053D System.Net.IPAddress[] System.Net.NclUtilities::get_LocalAddresses()
extern void NclUtilities_get_LocalAddresses_mCD150C4D4468FA5A5841F1A9DEA23779221321D8 (void);
// 0x0000053E System.Object System.Net.NclUtilities::get_LocalAddressesLock()
extern void NclUtilities_get_LocalAddressesLock_m873FF32D6C0398541CBB1CE734A5A66A8ED1A2C2 (void);
// 0x0000053F System.Boolean System.Net.ValidationHelper::IsBlankString(System.String)
extern void ValidationHelper_IsBlankString_m78C3603B0E8C93CAD3FB945CA57C3E4729A09B89 (void);
// 0x00000540 System.Boolean System.Net.ValidationHelper::ValidateTcpPort(System.Int32)
extern void ValidationHelper_ValidateTcpPort_m899B89B4810C6531306EC6C34FF452732D41979D (void);
// 0x00000541 System.Void System.Net.ValidationHelper::.cctor()
extern void ValidationHelper__cctor_mE5C7F68FC003121FE3AC2039FFA9B2E88500E16A (void);
// 0x00000542 System.NotImplementedException System.Net.ExceptionHelper::get_MethodNotImplementedException()
extern void ExceptionHelper_get_MethodNotImplementedException_m607FF8B70BAE0BB51B306CC3282A08B59C657D84 (void);
// 0x00000543 System.NotImplementedException System.Net.ExceptionHelper::get_PropertyNotImplementedException()
extern void ExceptionHelper_get_PropertyNotImplementedException_m7A641AB1C2BDAB3199A4A2674561E23302FB637B (void);
// 0x00000544 System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern void NetworkCredential__ctor_m6FAE0A13FFBFC74F1E810399223B5297DF9B4C76 (void);
// 0x00000545 System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern void NetworkCredential__ctor_mFAFA0E2205D5A144C0EAB9420F7FBBE71ED677D4 (void);
// 0x00000546 System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern void NetworkCredential_set_UserName_m17D8E6ABE7EDA733A8E01967698669293FCF2E22 (void);
// 0x00000547 System.Void System.Net.NetworkCredential::set_Password(System.String)
extern void NetworkCredential_set_Password_mEEF6A7577788282996C4A5A989D9BA47B13D882E (void);
// 0x00000548 System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern void NetworkCredential_set_Domain_m5046BA97B0F1D839ABB6F928C1DF2FA2387DBA9C (void);
// 0x00000549 System.Void System.Net.ProtocolViolationException::.ctor()
extern void ProtocolViolationException__ctor_m9E1CE4D0A1DBB0EAE0BE6C7C026154C789F41A49 (void);
// 0x0000054A System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern void ProtocolViolationException__ctor_m36E802912D318858D2D98F929722AACA1A2EC38C (void);
// 0x0000054B System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException__ctor_m63A4EA715BBFE3D72929AD3FEDB1E398B75C41F5 (void);
// 0x0000054C System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m044186C620380DB9812441EE011806354C23D0B6 (void);
// 0x0000054D System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void ProtocolViolationException_GetObjectData_m37E19ADFB1B9FA924D562BDFE0D57728AD5F2A37 (void);
// 0x0000054E System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern void SocketAddress_get_Family_mA5C74070602CE88CF4E8C77A06B7B60D73BC736D (void);
// 0x0000054F System.Int32 System.Net.SocketAddress::get_Size()
extern void SocketAddress_get_Size_mF4849EFEEA3BA3E2109D3E05E635072F89DE57CB (void);
// 0x00000550 System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern void SocketAddress_get_Item_m9B0A7BADAFEC83332452472EFB0F2B2A8AF7C442 (void);
// 0x00000551 System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern void SocketAddress__ctor_m8ACFF855B4B34E64D63221D8964F67393AC5C2C0 (void);
// 0x00000552 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress)
extern void SocketAddress__ctor_mBD53CC91765543655C8A685599BF9E83CBD7EDA1 (void);
// 0x00000553 System.Void System.Net.SocketAddress::.ctor(System.Net.IPAddress,System.Int32)
extern void SocketAddress__ctor_m727264D4E76104274842A01FCA0C42F424463B5B (void);
// 0x00000554 System.Net.IPAddress System.Net.SocketAddress::GetIPAddress()
extern void SocketAddress_GetIPAddress_mB6CBFAEAD75170561033660215DAA67EE91E6A85 (void);
// 0x00000555 System.Net.IPEndPoint System.Net.SocketAddress::GetIPEndPoint()
extern void SocketAddress_GetIPEndPoint_mDB28840AEBFA9C37CC41BEC66E67BA9EDCEC2700 (void);
// 0x00000556 System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern void SocketAddress_Equals_m51EE0D3DF560D78987904A2F7D449D9008B7F4E7 (void);
// 0x00000557 System.Int32 System.Net.SocketAddress::GetHashCode()
extern void SocketAddress_GetHashCode_mD765A06DB2C807684567958F8B82266A72A51B63 (void);
// 0x00000558 System.String System.Net.SocketAddress::ToString()
extern void SocketAddress_ToString_mDF5B4B0AF200471C84B09D553EB33BC4F0EE20EB (void);
// 0x00000559 System.Void System.Net.WebException::.ctor()
extern void WebException__ctor_m3CC3B7531100A92762AB2A131B85742D403D6370 (void);
// 0x0000055A System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern void WebException__ctor_m864B9642C3D47B5ED0CDA9397ACB8CC70D2B9E4E (void);
// 0x0000055B System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern void WebException__ctor_mABBCD10936CE582BDF68BA0204ECBDA253119AFE (void);
// 0x0000055C System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_mC093D93CFCE3064622C7AF755BC3D3150E5A8D2D (void);
// 0x0000055D System.Void System.Net.WebException::.ctor(System.String,System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern void WebException__ctor_m5363C3AC28BABD353ABD5295C3A4FD44724D9407 (void);
// 0x0000055E System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException__ctor_m4BFDADE5C6613BE14CE11DE30B350A671DDA7C16 (void);
// 0x0000055F System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mE242FB2EA4DB6AAC3C6C08DBEFD8F3A7D8C9E2DF (void);
// 0x00000560 System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebException_GetObjectData_m72AC26432F46DEC77E8BEE3B60150CA524EB8D43 (void);
// 0x00000561 System.String System.Net.WebExceptionMapping::GetWebStatusString(System.Net.WebExceptionStatus)
extern void WebExceptionMapping_GetWebStatusString_mEB4A50FC87E40382A86D007C2E80FCCDEFCB5B91 (void);
// 0x00000562 System.Void System.Net.WebExceptionMapping::.cctor()
extern void WebExceptionMapping__cctor_m25DD11B1F6D1AFB6D3DCD727B6D0D0F9C551EDE6 (void);
// 0x00000563 System.Void System.Net.WebHeaderCollection::NormalizeCommonHeaders()
extern void WebHeaderCollection_NormalizeCommonHeaders_m3FE2945857B86D96E0B495218D61593CC6AD1991 (void);
// 0x00000564 System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::get_InnerCollection()
extern void WebHeaderCollection_get_InnerCollection_m74FAC0EF1815ABEA9D44E817BA54B413A7D21645 (void);
// 0x00000565 System.Boolean System.Net.WebHeaderCollection::AllowMultiValues(System.String)
extern void WebHeaderCollection_AllowMultiValues_m078D979B7DBF77A8640B1DFAAAAAA280065567EE (void);
// 0x00000566 System.Void System.Net.WebHeaderCollection::AddInternal(System.String,System.String)
extern void WebHeaderCollection_AddInternal_m6D3C568730974B187804895F8F3DAA50AB37C6A8 (void);
// 0x00000567 System.String System.Net.WebHeaderCollection::CheckBadChars(System.String,System.Boolean)
extern void WebHeaderCollection_CheckBadChars_mDBB3AA0A529389E24E9DFBD08C259F34412C0523 (void);
// 0x00000568 System.Boolean System.Net.WebHeaderCollection::ContainsNonAsciiChars(System.String)
extern void WebHeaderCollection_ContainsNonAsciiChars_mA89278F21B4B5F507898C91472747092C3E152BE (void);
// 0x00000569 System.Void System.Net.WebHeaderCollection::ThrowOnRestrictedHeader(System.String)
extern void WebHeaderCollection_ThrowOnRestrictedHeader_mD66B7AB428CEE7686AA15963F42F6645880A7A6B (void);
// 0x0000056A System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern void WebHeaderCollection_Add_mB254E228D958CFE984049FBFA75815196B1BB993 (void);
// 0x0000056B System.Void System.Net.WebHeaderCollection::Add(System.String)
extern void WebHeaderCollection_Add_mAAA624D792BE679F4583C3413A249F3BC6302175 (void);
// 0x0000056C System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern void WebHeaderCollection_Set_m113A8E6210BA3E7D4B3B33E378FF3EBEF757F07C (void);
// 0x0000056D System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern void WebHeaderCollection_SetInternal_mFB16D4B140F7B3136B1B9AB8785DD3FD9A83FA90 (void);
// 0x0000056E System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern void WebHeaderCollection_GetValues_m38ADF029537D145653A9CB8ECA1AB60A0CCC7E5F (void);
// 0x0000056F System.String System.Net.WebHeaderCollection::ToString()
extern void WebHeaderCollection_ToString_mAF0DD5057B67B6D935F9F81254FE4EF3816AE1F5 (void);
// 0x00000570 System.String System.Net.WebHeaderCollection::GetAsString(System.Collections.Specialized.NameValueCollection,System.Boolean,System.Boolean)
extern void WebHeaderCollection_GetAsString_m2446E221F9367C3C2D0FCC9E1686E3E5292B6932 (void);
// 0x00000571 System.Void System.Net.WebHeaderCollection::.ctor()
extern void WebHeaderCollection__ctor_mDE789C8E11131B5FB1FD5FF79382893DE73E8752 (void);
// 0x00000572 System.Void System.Net.WebHeaderCollection::.ctor(System.Net.WebHeaderCollectionType)
extern void WebHeaderCollection__ctor_mD9851B680C175978BABED32CA813D66553B5DB48 (void);
// 0x00000573 System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection__ctor_mA6673D3256664909BD3B6BA1DED72901CBF302DD (void);
// 0x00000574 System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern void WebHeaderCollection_OnDeserialization_mFD1302BFFB2508360BB2241B4F6AEBF47F6FB53E (void);
// 0x00000575 System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_GetObjectData_mBDBD7A68D3851F96DCFE6819ECE1FB5B7B733D50 (void);
// 0x00000576 System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mF606120A9A8D480A73ECC80F3134437CC170DACC (void);
// 0x00000577 System.String System.Net.WebHeaderCollection::Get(System.String)
extern void WebHeaderCollection_Get_mBAE90C4839B7748D8889C011ADE5E8CD9ABADD7C (void);
// 0x00000578 System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern void WebHeaderCollection_GetEnumerator_m3B38A75F803A0EA365EC3A5FB2E71F85B784B71C (void);
// 0x00000579 System.Int32 System.Net.WebHeaderCollection::get_Count()
extern void WebHeaderCollection_get_Count_mF4776644017CCC37A364707BC35BD4431BB66C80 (void);
// 0x0000057A System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern void WebHeaderCollection_Get_mB4CF6863B19E3815EEBE1A86F1881B6F744A47B2 (void);
// 0x0000057B System.String[] System.Net.WebHeaderCollection::GetValues(System.Int32)
extern void WebHeaderCollection_GetValues_m5A28C9A66037695AF2FE3FAEE61567D5E415BCBB (void);
// 0x0000057C System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern void WebHeaderCollection_GetKey_mC4DBE9E8F0044B4F1AA95F5DF76955E8692655F0 (void);
// 0x0000057D System.String[] System.Net.WebHeaderCollection::get_AllKeys()
extern void WebHeaderCollection_get_AllKeys_mB5C074D07B937C684FCC6B1D1A4D9A523E7EA7B1 (void);
// 0x0000057E System.Void System.Net.WebHeaderCollection::.cctor()
extern void WebHeaderCollection__cctor_m779CABD05DE263A98071763B54A53757E33B9A6A (void);
// 0x0000057F System.Int32 System.Net.CaseInsensitiveAscii::GetHashCode(System.Object)
extern void CaseInsensitiveAscii_GetHashCode_mEDEDA9FD6885627614E710E60A2EA06D69F6D436 (void);
// 0x00000580 System.Int32 System.Net.CaseInsensitiveAscii::Compare(System.Object,System.Object)
extern void CaseInsensitiveAscii_Compare_m89633B3A475AC918C505843E6F7824FE789A6E4B (void);
// 0x00000581 System.Int32 System.Net.CaseInsensitiveAscii::FastGetHashCode(System.String)
extern void CaseInsensitiveAscii_FastGetHashCode_m3718D0BF4E0D19D8DBBD9E3177B8B1479EEB7090 (void);
// 0x00000582 System.Boolean System.Net.CaseInsensitiveAscii::Equals(System.Object,System.Object)
extern void CaseInsensitiveAscii_Equals_m31D348231E3122FF20FA5BDEFC6BC3A8B65CB9C0 (void);
// 0x00000583 System.Void System.Net.CaseInsensitiveAscii::.ctor()
extern void CaseInsensitiveAscii__ctor_m3C5EA0D73AE6F2E60CC2335DFC861C64B2FCEEBA (void);
// 0x00000584 System.Void System.Net.CaseInsensitiveAscii::.cctor()
extern void CaseInsensitiveAscii__cctor_m759446C030AB0E794F53B4D3E38A5813361A7886 (void);
// 0x00000585 System.Object System.Net.WebRequest::get_InternalSyncObject()
extern void WebRequest_get_InternalSyncObject_m80BB55BB5C09059A46F4E10599FA455F41286330 (void);
// 0x00000586 System.Void System.Net.WebRequest::.ctor()
extern void WebRequest__ctor_mFF46D19A613D1A8E5E9318DEFA794B18AC206D57 (void);
// 0x00000587 System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest__ctor_mD4C70AB50E522A71C1B47263DD8714FC3B52A3C1 (void);
// 0x00000588 System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_mA128ED1898FD0A9943A96190103BE40F418BAB03 (void);
// 0x00000589 System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebRequest_GetObjectData_m06BD9D15936178B48D44F18C02CD94EE21DD1CF0 (void);
// 0x0000058A System.Net.IWebProxy System.Net.WebRequest::get_InternalDefaultWebProxy()
extern void WebRequest_get_InternalDefaultWebProxy_m13E2CAB3FE298CF26023A3626454FE989CF687C7 (void);
// 0x0000058B System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern void WebRequest_get_DefaultWebProxy_m65F367761268F3797F96B8BE99F85FF8CB1C117A (void);
// 0x0000058C System.Void System.Net.WebRequest::.cctor()
extern void WebRequest__cctor_mF114B4DA7976F2211658435221ABC2968FF13798 (void);
// 0x0000058D System.Void System.Net.WebRequest/DesignerWebRequestCreate::.ctor()
extern void DesignerWebRequestCreate__ctor_m57F5ADABDB3D9A8F8617EBFD5F40FB0D8A9DF7D3 (void);
// 0x0000058E System.Uri System.Net.WebRequest/WebProxyWrapperOpaque::GetProxy(System.Uri)
extern void WebProxyWrapperOpaque_GetProxy_m1A8A0E96628ABA4A57B401AC2D60016808BA840D (void);
// 0x0000058F System.Boolean System.Net.WebRequest/WebProxyWrapperOpaque::IsBypassed(System.Uri)
extern void WebProxyWrapperOpaque_IsBypassed_mAB04ED8FC80CF3E3045042D4F618C3189ABBF07C (void);
// 0x00000590 System.Net.WebProxy System.Net.WebRequest/WebProxyWrapper::get_WebProxy()
extern void WebProxyWrapper_get_WebProxy_m64892D5D4C1D1C4A11188F1549D2762AF50A5EE8 (void);
// 0x00000591 System.Void System.Net.WebResponse::.ctor()
extern void WebResponse__ctor_m0A254FF1607AEACDAA102A8ABA8941A42B2929A6 (void);
// 0x00000592 System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse__ctor_mC4FCBBBB946A8703F5279A1390D56A50CBE7164B (void);
// 0x00000593 System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_mE662B42630016B991CFC1E861F774DC1CDDD00DA (void);
// 0x00000594 System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebResponse_GetObjectData_m52CD293C2D47F35D8FF1EA2769D272E48398EB4A (void);
// 0x00000595 System.Void System.Net.WebResponse::Close()
extern void WebResponse_Close_m970DECB5745AACAC9CA7B88FB818066A0DFC4998 (void);
// 0x00000596 System.Void System.Net.WebResponse::Dispose()
extern void WebResponse_Dispose_mC0C80BE4CDA26A6A26EEAE961C588A461FEE9FE4 (void);
// 0x00000597 System.Void System.Net.WebResponse::Dispose(System.Boolean)
extern void WebResponse_Dispose_mD37AF3FE467717A008830A34E72215D3DBC244EC (void);
// 0x00000598 System.String System.Net.WebUtility::HtmlEncode(System.String)
extern void WebUtility_HtmlEncode_mC07FA9A01485BDFE784053F14C093CBD65FA08D7 (void);
// 0x00000599 System.Void System.Net.WebUtility::HtmlEncode(System.String,System.IO.TextWriter)
extern void WebUtility_HtmlEncode_mE3B0D23B992B904F7BD4F9C4A9F0BB548F3263A8 (void);
// 0x0000059A System.Int32 System.Net.WebUtility::IndexOfHtmlEncodingChars(System.String,System.Int32)
extern void WebUtility_IndexOfHtmlEncodingChars_mC8DE0713C0407BB3B402359BAB1A7E629C86852B (void);
// 0x0000059B System.Net.Configuration.UnicodeEncodingConformance System.Net.WebUtility::get_HtmlEncodeConformance()
extern void WebUtility_get_HtmlEncodeConformance_m3B04A7783AD7F067FCB195544FA750DC2E5BC191 (void);
// 0x0000059C System.String System.Net.WebUtility::UrlDecodeInternal(System.String,System.Text.Encoding)
extern void WebUtility_UrlDecodeInternal_m0BEED16B1B04C06F4552F5586179290B64199D35 (void);
// 0x0000059D System.String System.Net.WebUtility::UrlDecode(System.String)
extern void WebUtility_UrlDecode_m5A955DBE636F9E3058F7C66E9A3379CD531AC7CF (void);
// 0x0000059E System.Int32 System.Net.WebUtility::GetNextUnicodeScalarValueFromUtf16Surrogate(System.Char*&,System.Int32&)
extern void WebUtility_GetNextUnicodeScalarValueFromUtf16Surrogate_m238FB369923DAB313E950CF99EFBB162BA4F69D6 (void);
// 0x0000059F System.Int32 System.Net.WebUtility::HexToInt(System.Char)
extern void WebUtility_HexToInt_m068D8AD6D40D404E4098C1DD87D6D612FA86779D (void);
// 0x000005A0 System.Void System.Net.WebUtility::.cctor()
extern void WebUtility__cctor_m9AA0F4E8EE017CC44615DC945E7C16E0A00D863E (void);
// 0x000005A1 System.Void System.Net.WebUtility/UrlDecoder::FlushBytes()
extern void UrlDecoder_FlushBytes_mAFD14D4BDFF7772D27C4586780A60F552789880A (void);
// 0x000005A2 System.Void System.Net.WebUtility/UrlDecoder::.ctor(System.Int32,System.Text.Encoding)
extern void UrlDecoder__ctor_m2B5D57D1C2AE5272B5AC08B537C9FD4E09710F11 (void);
// 0x000005A3 System.Void System.Net.WebUtility/UrlDecoder::AddChar(System.Char)
extern void UrlDecoder_AddChar_m89D9F2E86F612C9768AB05982E02785283826EA9 (void);
// 0x000005A4 System.Void System.Net.WebUtility/UrlDecoder::AddByte(System.Byte)
extern void UrlDecoder_AddByte_m936E7648F5846D98D36148AF23F34CB0DF08C0A3 (void);
// 0x000005A5 System.String System.Net.WebUtility/UrlDecoder::GetString()
extern void UrlDecoder_GetString_mF1C119F237D06847A3C03ACF4A2F7278509931A4 (void);
// 0x000005A6 System.Void System.Net.HeaderParser::.ctor(System.Object,System.IntPtr)
extern void HeaderParser__ctor_m3505961B694DA7A327216C93C9ECF14883F0FD76 (void);
// 0x000005A7 System.String[] System.Net.HeaderParser::Invoke(System.String)
extern void HeaderParser_Invoke_m9B1C027C8642CE3AA54366690471A23E181D41B6 (void);
// 0x000005A8 System.IAsyncResult System.Net.HeaderParser::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void HeaderParser_BeginInvoke_m9FD2F44038291DA86379F725BB39C636E9442D6E (void);
// 0x000005A9 System.String[] System.Net.HeaderParser::EndInvoke(System.IAsyncResult)
extern void HeaderParser_EndInvoke_m357E4BCDE566A5DCB07B1F07F6EEC3F0BBD05E8A (void);
// 0x000005AA System.Void System.Net.HeaderInfo::.ctor(System.String,System.Boolean,System.Boolean,System.Boolean,System.Net.HeaderParser)
extern void HeaderInfo__ctor_m0A21C755086755564093EE140BB76B17BF19D119 (void);
// 0x000005AB System.String[] System.Net.HeaderInfoTable::ParseSingleValue(System.String)
extern void HeaderInfoTable_ParseSingleValue_mCE6140F9CE345D6AF51B89C7D8C42E6C7AC41EA0 (void);
// 0x000005AC System.String[] System.Net.HeaderInfoTable::ParseMultiValue(System.String)
extern void HeaderInfoTable_ParseMultiValue_mF581CA5C6C9D338CC17232EC49C4471DB5DFC014 (void);
// 0x000005AD System.Void System.Net.HeaderInfoTable::.cctor()
extern void HeaderInfoTable__cctor_mE96A69FD8B8F938623442DCD661EA5FB8E608B16 (void);
// 0x000005AE System.Net.HeaderInfo System.Net.HeaderInfoTable::get_Item(System.String)
extern void HeaderInfoTable_get_Item_m87D6C7DCC3A5EA433F038365677E93B311A41885 (void);
// 0x000005AF System.Void System.Net.HeaderInfoTable::.ctor()
extern void HeaderInfoTable__ctor_m7CAFD794EF41A0799F26DF974DBC848A03275531 (void);
// 0x000005B0 System.Void System.Net.ICloseEx::CloseEx(System.Net.CloseExState)
// 0x000005B1 System.Net.LazyAsyncResult/ThreadContext System.Net.LazyAsyncResult::get_CurrentThreadContext()
extern void LazyAsyncResult_get_CurrentThreadContext_m72EA4FF3D8FA7A473BABC9CB6C74D197BC1CCD98 (void);
// 0x000005B2 System.Object System.Net.LazyAsyncResult::get_AsyncObject()
extern void LazyAsyncResult_get_AsyncObject_mA91273208B3DCE1E9830B3CB028298D40C635059 (void);
// 0x000005B3 System.Void System.Net.LazyAsyncResult::ProtectedInvokeCallback(System.Object,System.IntPtr)
extern void LazyAsyncResult_ProtectedInvokeCallback_mE4BFC9A8F54A60F45DC23A775D75E7F9B3BE61AE (void);
// 0x000005B4 System.Void System.Net.LazyAsyncResult::InvokeCallback(System.Object)
extern void LazyAsyncResult_InvokeCallback_m61F2403E47B10A03CA2CCE45D5DB1C5033A57C8B (void);
// 0x000005B5 System.Void System.Net.LazyAsyncResult::Complete(System.IntPtr)
extern void LazyAsyncResult_Complete_m1149B1B2741B4B2D22775A68D74B955BC3EA4A64 (void);
// 0x000005B6 System.Void System.Net.LazyAsyncResult::WorkerThreadComplete(System.Object)
extern void LazyAsyncResult_WorkerThreadComplete_m9144EAFE34F64C805224410D61F45300D854A6BD (void);
// 0x000005B7 System.Void System.Net.LazyAsyncResult::Cleanup()
extern void LazyAsyncResult_Cleanup_m60696D3703963856A2069A821F8F68DEE1F81D4F (void);
// 0x000005B8 System.Void System.Net.LazyAsyncResult/ThreadContext::.ctor()
extern void ThreadContext__ctor_mA7A43774615EA8E5A20D406F33EFE2004B9944E2 (void);
// 0x000005B9 System.String System.Net.NetRes::GetWebStatusString(System.String,System.Net.WebExceptionStatus)
extern void NetRes_GetWebStatusString_m507D1110F525757C699C6F95A3AA4B8AD41BED81 (void);
// 0x000005BA System.Void System.Net.ServiceNameStore::.ctor()
extern void ServiceNameStore__ctor_m4838CDA22690B3A0975C7B32C2EDA15853A28F89 (void);
// 0x000005BB System.Void System.Net.TimerThread::.cctor()
extern void TimerThread__cctor_m92260B88BACC7706E288A0AD202FA71CD0696199 (void);
// 0x000005BC System.Net.TimerThread/Queue System.Net.TimerThread::CreateQueue(System.Int32)
extern void TimerThread_CreateQueue_m38F306BCB0D055ADBC36F3D8F2B77EBE4BFF8C82 (void);
// 0x000005BD System.Void System.Net.TimerThread::StopTimerThread()
extern void TimerThread_StopTimerThread_m5D33E7D7EAAB667AEE1ABC6E0F832DA361BA83CB (void);
// 0x000005BE System.Void System.Net.TimerThread::OnDomainUnload(System.Object,System.EventArgs)
extern void TimerThread_OnDomainUnload_m3CA503B871CEE33D278B6995FBF8ED5B92001E1D (void);
// 0x000005BF System.Void System.Net.TimerThread/Queue::.ctor(System.Int32)
extern void Queue__ctor_mED7AD466F7A2AD32777D05229BE4E7A6BC358C06 (void);
// 0x000005C0 System.Void System.Net.TimerThread/Timer::.ctor(System.Int32)
extern void Timer__ctor_mF6B46FBB94C7B044423D0931A24646947612D40E (void);
// 0x000005C1 System.Boolean System.Net.TimerThread/Timer::Cancel()
// 0x000005C2 System.Void System.Net.TimerThread/Timer::Dispose()
extern void Timer_Dispose_mCB85185EBA6CE836BDAA5CB5B5D98326E0279F0D (void);
// 0x000005C3 System.Void System.Net.TimerThread/Callback::.ctor(System.Object,System.IntPtr)
extern void Callback__ctor_m4E3A7A3D8252FA436373FF975A78C11BFE218BEF (void);
// 0x000005C4 System.Void System.Net.TimerThread/Callback::Invoke(System.Net.TimerThread/Timer,System.Int32,System.Object)
extern void Callback_Invoke_m429C63F5BE16B526F6875846B107639638CF2F75 (void);
// 0x000005C5 System.IAsyncResult System.Net.TimerThread/Callback::BeginInvoke(System.Net.TimerThread/Timer,System.Int32,System.Object,System.AsyncCallback,System.Object)
extern void Callback_BeginInvoke_m41DDA2A728FAF5D8FC7BDD6BAF1E5A5FAA44067A (void);
// 0x000005C6 System.Void System.Net.TimerThread/Callback::EndInvoke(System.IAsyncResult)
extern void Callback_EndInvoke_mCA87962B7FC7ACCD1BD62977C8A1DF1F2ECC8D1F (void);
// 0x000005C7 System.Void System.Net.TimerThread/TimerQueue::.ctor(System.Int32)
extern void TimerQueue__ctor_m0AE128C18B38F02F946242A6D18C788B83CF4A0F (void);
// 0x000005C8 System.Void System.Net.TimerThread/InfiniteTimerQueue::.ctor()
extern void InfiniteTimerQueue__ctor_m9399FB8D3AF6FCE71EB29A97665E871E9D13C5E7 (void);
// 0x000005C9 System.Void System.Net.TimerThread/TimerNode::.ctor()
extern void TimerNode__ctor_m18DCD26BDC1FE8F661FE7C056F59785CB48F09E7 (void);
// 0x000005CA System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Next()
extern void TimerNode_get_Next_m91904310F38E6EF8D94261890F86387942EA81DE (void);
// 0x000005CB System.Void System.Net.TimerThread/TimerNode::set_Next(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Next_m6A6F1ACDE24E867EA3D88F2C889C677AE7AAC3BD (void);
// 0x000005CC System.Net.TimerThread/TimerNode System.Net.TimerThread/TimerNode::get_Prev()
extern void TimerNode_get_Prev_m694B4D7BD49FE9A47B961DE0E12FF036B940CEE5 (void);
// 0x000005CD System.Void System.Net.TimerThread/TimerNode::set_Prev(System.Net.TimerThread/TimerNode)
extern void TimerNode_set_Prev_m6AE80A4996048AADCBD43D8CFEB5DDB8CAAC1B8E (void);
// 0x000005CE System.Boolean System.Net.TimerThread/TimerNode::Cancel()
extern void TimerNode_Cancel_m691597518E9CAF2719C10B63577E24DC65A4B974 (void);
// 0x000005CF System.Void System.Net.EmptyWebProxy::.ctor()
extern void EmptyWebProxy__ctor_m1087116F8816BF3AD6D7ADE134F1579659AA00A5 (void);
// 0x000005D0 System.Uri System.Net.EmptyWebProxy::GetProxy(System.Uri)
extern void EmptyWebProxy_GetProxy_m41932E59E773523BF705A1FDFD168CAB61F9C4FC (void);
// 0x000005D1 System.Boolean System.Net.EmptyWebProxy::IsBypassed(System.Uri)
extern void EmptyWebProxy_IsBypassed_m91E4C131B35CBE9CE062B93710BC938A608CC445 (void);
// 0x000005D2 System.Void System.Net.Cookie::.ctor()
extern void Cookie__ctor_m4C6213C74DBEE7EA95551715F3121F0F59169D16 (void);
// 0x000005D3 System.String System.Net.Cookie::get_Domain()
extern void Cookie_get_Domain_m69CE1A4F6A72175C911F5E7137543D8633EDDF8A (void);
// 0x000005D4 System.Void System.Net.Cookie::set_Domain(System.String)
extern void Cookie_set_Domain_m22FD40A6FA2856E7F8B2B4871951C7DD8CB91E65 (void);
// 0x000005D5 System.String System.Net.Cookie::get__Domain()
extern void Cookie_get__Domain_m87C0AA28DF5C3EFA7EC6A84D1D648A6AB7B65A15 (void);
// 0x000005D6 System.String System.Net.Cookie::get_Name()
extern void Cookie_get_Name_mB5D7C54A81F9DE0CC2A28C34A8E1A6728706CF1F (void);
// 0x000005D7 System.Void System.Net.Cookie::set_Name(System.String)
extern void Cookie_set_Name_m8CD087B7EAC9BBB3102588927D537E47DC8E854C (void);
// 0x000005D8 System.Boolean System.Net.Cookie::InternalSetName(System.String)
extern void Cookie_InternalSetName_m119BC4E6C4D01CCF3E10E00D1D0E1A9B3F7F418F (void);
// 0x000005D9 System.String System.Net.Cookie::get_Path()
extern void Cookie_get_Path_m23B2078A5FEF68D1DF767270BE7F654A730DB7D6 (void);
// 0x000005DA System.Void System.Net.Cookie::set_Path(System.String)
extern void Cookie_set_Path_mA51AE39D41EA9A1A6B47C6A735EE9C490CAB02FD (void);
// 0x000005DB System.String System.Net.Cookie::get__Path()
extern void Cookie_get__Path_m3BC69BAA03E72DE447FD41AD437B8E4AECE105AC (void);
// 0x000005DC System.Boolean System.Net.Cookie::get_Plain()
extern void Cookie_get_Plain_mE690884D12C79ABE5CB6C196CB9DEF3E2DF04C78 (void);
// 0x000005DD System.String System.Net.Cookie::get_Port()
extern void Cookie_get_Port_m1C41A0A7C2A95B29D82FA11B383B4AA84AE1FE9C (void);
// 0x000005DE System.Void System.Net.Cookie::set_Port(System.String)
extern void Cookie_set_Port_mFB8C36FFE4B7D5F19D21A7285D209B3CD44C0DDC (void);
// 0x000005DF System.String System.Net.Cookie::get__Port()
extern void Cookie_get__Port_m2842F50E250F1263917F5C9F9EEF4EDA74E578E5 (void);
// 0x000005E0 System.String System.Net.Cookie::get_Value()
extern void Cookie_get_Value_m5DF850D18AEA9A7CA9F9F5B4B1B320263B7F13C1 (void);
// 0x000005E1 System.Void System.Net.Cookie::set_Value(System.String)
extern void Cookie_set_Value_mD408DC9C452695090A5BFDA8D7977E49868408FC (void);
// 0x000005E2 System.Net.CookieVariant System.Net.Cookie::get_Variant()
extern void Cookie_get_Variant_m6FDA5BC7A2071B73CA7163197349952BC959272B (void);
// 0x000005E3 System.Int32 System.Net.Cookie::get_Version()
extern void Cookie_get_Version_m99362C7681CD66CFD1B4E379144A55511C1678AB (void);
// 0x000005E4 System.Void System.Net.Cookie::set_Version(System.Int32)
extern void Cookie_set_Version_m4059439CDC5C879D40FB23F89ED92872CB1C8E13 (void);
// 0x000005E5 System.String System.Net.Cookie::get__Version()
extern void Cookie_get__Version_mE3373F85D5CDF535705977B029D34D742076FBB3 (void);
// 0x000005E6 System.Collections.IComparer System.Net.Cookie::GetComparer()
extern void Cookie_GetComparer_m82EFA0E1AD44C930482B4B82E5E3A7E811B35724 (void);
// 0x000005E7 System.Boolean System.Net.Cookie::Equals(System.Object)
extern void Cookie_Equals_m74305F8EA7C93F817EC69275DC908E47FB301BF6 (void);
// 0x000005E8 System.Int32 System.Net.Cookie::GetHashCode()
extern void Cookie_GetHashCode_mF39EC56666F1E0C0233FE18131B00E5607A95150 (void);
// 0x000005E9 System.String System.Net.Cookie::ToString()
extern void Cookie_ToString_mFC5C73DC436E950266395CBEDAD0A11A810B938F (void);
// 0x000005EA System.Void System.Net.Cookie::.cctor()
extern void Cookie__cctor_m650C2BB9FCA1DDF4624BA3C89FAAEB77D8815A87 (void);
// 0x000005EB System.Int32 System.Net.Comparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern void Comparer_System_Collections_IComparer_Compare_m5F0251A5FB72061E6E62456AD2EFFC72EC38ADD9 (void);
// 0x000005EC System.Void System.Net.Comparer::.ctor()
extern void Comparer__ctor_mF8BEE6E98AA318C038B7E523C70590B404EE4CA4 (void);
// 0x000005ED System.Void System.Net.CookieCollection::.ctor()
extern void CookieCollection__ctor_m3742A309F3C387A152B388E2A46E8EB3D820131E (void);
// 0x000005EE System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern void CookieCollection_get_Item_mB4DA63640CCA0D270DBF03376BCF0CA3CF3F0D0E (void);
// 0x000005EF System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern void CookieCollection_Add_m79F761F0B6996E16AE9C0E14FE2F89CE6A57E744 (void);
// 0x000005F0 System.Int32 System.Net.CookieCollection::get_Count()
extern void CookieCollection_get_Count_mD446FFA03292CE8B411EF6F749E9EDC504F415FA (void);
// 0x000005F1 System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern void CookieCollection_get_IsSynchronized_m83B74F498AF726EE70F05844578A0DE6A547937D (void);
// 0x000005F2 System.Object System.Net.CookieCollection::get_SyncRoot()
extern void CookieCollection_get_SyncRoot_mDD065ED6344025A5FBB2E02C19E7153E259CFA5F (void);
// 0x000005F3 System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern void CookieCollection_CopyTo_m0C63CDBC3A59242D48DCCADB513AA13EF3AA284C (void);
// 0x000005F4 System.Int32 System.Net.CookieCollection::IndexOf(System.Net.Cookie)
extern void CookieCollection_IndexOf_m919B3286409A7C63D5AD9C1D3048257B8066FD6F (void);
// 0x000005F5 System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern void CookieCollection_GetEnumerator_m744F05CAE90510145E97197016AD7DA9EAF85687 (void);
// 0x000005F6 System.Void System.Net.CookieCollection/CookieCollectionEnumerator::.ctor(System.Net.CookieCollection)
extern void CookieCollectionEnumerator__ctor_m8C55845548C7E5591CC2F53838F3117A635911CB (void);
// 0x000005F7 System.Object System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.get_Current()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_mA14163AE9BDD398876E89ABAA64BB74E3B8FA191 (void);
// 0x000005F8 System.Boolean System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.MoveNext()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m8136554DDFD93AA8E272ED8D736C5F999AF5D013 (void);
// 0x000005F9 System.Void System.Net.CookieCollection/CookieCollectionEnumerator::System.Collections.IEnumerator.Reset()
extern void CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_mB2ABB3AC007745755ED5B2E1A453F1A83465B1CB (void);
// 0x000005FA System.Void System.Net.CookieException::.ctor()
extern void CookieException__ctor_m75DDC43119C2CC7281EE61CF116B4B6CA7C0A35E (void);
// 0x000005FB System.Void System.Net.CookieException::.ctor(System.String)
extern void CookieException__ctor_mF0D16BDBAD5FBFB8C985756860566CEF64D4F58E (void);
// 0x000005FC System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException__ctor_m06B64C33C3BED301B52C09B59C59B0C6933F8495 (void);
// 0x000005FD System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m8DF4F39BFE904F6E496ACDCB30D29E1AC231C09F (void);
// 0x000005FE System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void CookieException_GetObjectData_m14EBAD80E96AF641B838F61E498562E8C12CC1EB (void);
// 0x000005FF System.Void System.Net.FileWebRequest::.ctor(System.Uri)
extern void FileWebRequest__ctor_m6BF9BF0E17060D4E719795DE5742BFFC65D34C6B (void);
// 0x00000600 System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest__ctor_m1FFFB33A0414E016669B3179FF16F141FA6E838D (void);
// 0x00000601 System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m9B6440775FE50243D85010EB8F8D6DDBFE8A3BE4 (void);
// 0x00000602 System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebRequest_GetObjectData_mC8A7DDCA00C0E3ADADB267284F196C4EE9E8D3BB (void);
// 0x00000603 System.Boolean System.Net.FileWebRequest::get_Aborted()
extern void FileWebRequest_get_Aborted_mD504D723802D217E3F741C68EF2576AFC2C0006F (void);
// 0x00000604 System.Void System.Net.FileWebRequest::GetRequestStreamCallback(System.Object)
extern void FileWebRequest_GetRequestStreamCallback_mCC6AEA46D613AA7B5035F4C5C27E848DC601951C (void);
// 0x00000605 System.Void System.Net.FileWebRequest::GetResponseCallback(System.Object)
extern void FileWebRequest_GetResponseCallback_m1C0A747466A03A05FF9D6D45456DFAFEEA38BF48 (void);
// 0x00000606 System.Void System.Net.FileWebRequest::UnblockReader()
extern void FileWebRequest_UnblockReader_m9E687E8F4413F2727339A41C3DE03A7D8ADBEDE3 (void);
// 0x00000607 System.Void System.Net.FileWebRequest::.cctor()
extern void FileWebRequest__cctor_m98058ED26B0744413A32327D2FF6778E4B52D5F4 (void);
// 0x00000608 System.Void System.Net.FileWebRequestCreator::.ctor()
extern void FileWebRequestCreator__ctor_m550EAB9632992C942E14D5B34C48FA6196595B9B (void);
// 0x00000609 System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern void FileWebRequestCreator_Create_m5A5314BCF6AA30E63196C05A64ECE6EA11D4E545 (void);
// 0x0000060A System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern void FileWebStream__ctor_m80D7CF5508F845D57EF371DD820A480A53D5C27C (void);
// 0x0000060B System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
extern void FileWebStream__ctor_m087F956637DD4C2FCE8247EC13021B1E75B35609 (void);
// 0x0000060C System.Void System.Net.FileWebStream::Dispose(System.Boolean)
extern void FileWebStream_Dispose_mC797EE18FAAF3613C73EF95AB81D1E9C0EE9A40A (void);
// 0x0000060D System.Void System.Net.FileWebStream::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebStream_System_Net_ICloseEx_CloseEx_mDB04D260B47E82C6161F2D65EA9EE8A832D03D18 (void);
// 0x0000060E System.Int32 System.Net.FileWebStream::Read(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Read_mBA56658D84F3C5742FE812D1A7AD58116541C779 (void);
// 0x0000060F System.Void System.Net.FileWebStream::Write(System.Byte[],System.Int32,System.Int32)
extern void FileWebStream_Write_m79C3CB2CE195D5348D313E6CFA6C8F4394E9681F (void);
// 0x00000610 System.IAsyncResult System.Net.FileWebStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginRead_m1E98F98D1956A77B4CBD4F111EC895A855C291D8 (void);
// 0x00000611 System.Int32 System.Net.FileWebStream::EndRead(System.IAsyncResult)
extern void FileWebStream_EndRead_mD4F843221DB3767E3CFB3E052E24E9CC94135302 (void);
// 0x00000612 System.IAsyncResult System.Net.FileWebStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void FileWebStream_BeginWrite_mD2E9B62CE8C7FF3A16763BB128E6AC9E31C985D0 (void);
// 0x00000613 System.Void System.Net.FileWebStream::EndWrite(System.IAsyncResult)
extern void FileWebStream_EndWrite_m9505A80B585F611DE18E22C9ACC319FB901E6A94 (void);
// 0x00000614 System.Void System.Net.FileWebStream::CheckError()
extern void FileWebStream_CheckError_m70F0ABB558C83EB00CB830DC1B449E7254B561D7 (void);
// 0x00000615 System.Void System.Net.FileWebResponse::.ctor(System.Net.FileWebRequest,System.Uri,System.IO.FileAccess,System.Boolean)
extern void FileWebResponse__ctor_mD521D067A1815BD4E42DE18E13B82FC6EAB58379 (void);
// 0x00000616 System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse__ctor_m8596AAABC73AFAF749351F4B0D2CBFB9214726C1 (void);
// 0x00000617 System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m1A6DD095E9F848AD3951E80A670DA080CED12BCB (void);
// 0x00000618 System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void FileWebResponse_GetObjectData_m1553AB318AB78A871A047F1D842356776B283E4F (void);
// 0x00000619 System.Void System.Net.FileWebResponse::Close()
extern void FileWebResponse_Close_mBD2FC4D7E4EDE7C10648E463201E1A1DDEE7D551 (void);
// 0x0000061A System.Void System.Net.FileWebResponse::System.Net.ICloseEx.CloseEx(System.Net.CloseExState)
extern void FileWebResponse_System_Net_ICloseEx_CloseEx_mEB324E8E15B8A2D26F34220B88A2667EEBB02C8A (void);
// 0x0000061B System.Uri System.Net.IWebProxy::GetProxy(System.Uri)
// 0x0000061C System.Boolean System.Net.IWebProxy::IsBypassed(System.Uri)
// 0x0000061D System.Void System.Net.WebProxy::.ctor()
extern void WebProxy__ctor_mD47326CF9857B797EFCC3CA369F83D51D19317CE (void);
// 0x0000061E System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern void WebProxy__ctor_m2354821664C2380AF107CBC5C66F0325068C5DA7 (void);
// 0x0000061F System.Net.ICredentials System.Net.WebProxy::get_Credentials()
extern void WebProxy_get_Credentials_mF546D5D8441F10F4A46A9A3C5D52BFFBE7D735B0 (void);
// 0x00000620 System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern void WebProxy_get_UseDefaultCredentials_m661B51178D8050D605835FCB034A166BF33B009B (void);
// 0x00000621 System.Void System.Net.WebProxy::set_UseDefaultCredentials(System.Boolean)
extern void WebProxy_set_UseDefaultCredentials_m53AF92FFC63A223541B629E01D939AF2A75BB4E7 (void);
// 0x00000622 System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern void WebProxy_GetProxy_m59215526173C7FD907EC86C35C44AF4FC4EFF28A (void);
// 0x00000623 System.Void System.Net.WebProxy::UpdateRegExList(System.Boolean)
extern void WebProxy_UpdateRegExList_mEAE558ABD241391C3AAD19D62066AB67EC3AE46B (void);
// 0x00000624 System.Boolean System.Net.WebProxy::IsMatchInBypassList(System.Uri)
extern void WebProxy_IsMatchInBypassList_m6B8C5DA8C56E6D50B0C84CCD094DB8FFBECDCC93 (void);
// 0x00000625 System.Boolean System.Net.WebProxy::IsLocal(System.Uri)
extern void WebProxy_IsLocal_m22583E899743095130F899378336361304BE71AC (void);
// 0x00000626 System.Boolean System.Net.WebProxy::IsLocalInProxyHash(System.Uri)
extern void WebProxy_IsLocalInProxyHash_mB4C405FEB5AFC01644FFE81AA3CB76918A7D45A5 (void);
// 0x00000627 System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern void WebProxy_IsBypassed_m1DB51D78C18C700F26EEE00938F4A202EF944B5E (void);
// 0x00000628 System.Boolean System.Net.WebProxy::IsBypassedManual(System.Uri)
extern void WebProxy_IsBypassedManual_m96199F172C51F06EE36CCE5D937BDD7BF873FEFC (void);
// 0x00000629 System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy__ctor_mC76DA2892292BF1609EE4874C11206819F96899E (void);
// 0x0000062A System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_mB855266F0AA17F2652B6BF6286A749097A9455E2 (void);
// 0x0000062B System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void WebProxy_GetObjectData_mF4C20C0FADD55674E00C1E13A16F4A14B2777D6B (void);
// 0x0000062C System.Net.AutoWebProxyScriptEngine System.Net.WebProxy::get_ScriptEngine()
extern void WebProxy_get_ScriptEngine_m6E040080EC0330E0C15849B1BB6469DBFE92A057 (void);
// 0x0000062D System.Net.IWebProxy System.Net.WebProxy::CreateDefaultProxy()
extern void WebProxy_CreateDefaultProxy_m0F1C8D957370920707869349941412B6BC3323A5 (void);
// 0x0000062E System.Void System.Net.WebProxy::.ctor(System.Boolean)
extern void WebProxy__ctor_m387E8EB6694953D1FA4E77E00D449B20E2C0B84F (void);
// 0x0000062F System.Void System.Net.WebProxy::UnsafeUpdateFromRegistry()
extern void WebProxy_UnsafeUpdateFromRegistry_mDFB67EA19AAD6F1D5BCF9B7D585B33A84D14DC4E (void);
// 0x00000630 System.Boolean System.Net.WebProxy::GetProxyAuto(System.Uri,System.Uri&)
extern void WebProxy_GetProxyAuto_m1EACF0FDED5E764C7B3EAF243F39A73646B94CD2 (void);
// 0x00000631 System.Boolean System.Net.WebProxy::IsBypassedAuto(System.Uri,System.Boolean&)
extern void WebProxy_IsBypassedAuto_m96DE81A96B947F6F6A25A49D5F5D8430346809C0 (void);
// 0x00000632 System.Boolean System.Net.WebProxy::AreAllBypassed(System.Collections.Generic.IEnumerable`1<System.String>,System.Boolean)
extern void WebProxy_AreAllBypassed_m6E869A92B478E61C29F0B9D9085E2AC6A075B59E (void);
// 0x00000633 System.Uri System.Net.WebProxy::ProxyUri(System.String)
extern void WebProxy_ProxyUri_mE09DD6D37536E7D5AC20A9519DFABCDB974F2B42 (void);
// 0x00000634 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&)
extern void AutoWebProxyScriptEngine_GetProxies_mCBAD00EC0BE65DF947C48B1DBC377EB80F075902 (void);
// 0x00000635 System.Boolean System.Net.AutoWebProxyScriptEngine::GetProxies(System.Uri,System.Collections.Generic.IList`1<System.String>&,System.Int32&)
extern void AutoWebProxyScriptEngine_GetProxies_m228520D18B1350998E32FCACF796316DBBBA111A (void);
// 0x00000636 System.Security.SecureString System.Net.UnsafeNclNativeMethods/SecureStringHelper::CreateSecureString(System.String)
extern void SecureStringHelper_CreateSecureString_m36F065E59FF9B8AC79289E4B2A42F96C23BD4F0C (void);
// 0x00000637 System.Void System.Net.ServerCertValidationCallback::.ctor(System.Net.Security.RemoteCertificateValidationCallback)
extern void ServerCertValidationCallback__ctor_m01DC1DC5935B7807EA9D35D50BDF9F00B68E1A23 (void);
// 0x00000638 System.Void System.Net.ServerCertValidationCallback::Callback(System.Object)
extern void ServerCertValidationCallback_Callback_m2F51ACBBF63B010C39B4C415ECD209BFB4243733 (void);
// 0x00000639 System.Boolean System.Net.ServerCertValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void ServerCertValidationCallback_Invoke_m9A3D9984E12278ACD7DEEE5E4B039A3250D6A8D0 (void);
// 0x0000063A System.Void System.Net.ServerCertValidationCallback/CallbackContext::.ctor(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void CallbackContext__ctor_m98617E58A5FC792C785185C96D2AACADB98B89CB (void);
// 0x0000063B System.Void System.Net.ChunkedInputStream::.ctor(System.Net.HttpListenerContext,System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void ChunkedInputStream__ctor_m2DE712FA7423338EF880394909919394664ABACD (void);
// 0x0000063C System.Int32 System.Net.ChunkedInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern void ChunkedInputStream_Read_m59B92BEB22D6F208AC0C0EFD36BDD1A09F9D99C0 (void);
// 0x0000063D System.IAsyncResult System.Net.ChunkedInputStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ChunkedInputStream_BeginRead_m68675B92B4D743BFE4B70DAA940DBB2C324600C6 (void);
// 0x0000063E System.Void System.Net.ChunkedInputStream::OnRead(System.IAsyncResult)
extern void ChunkedInputStream_OnRead_m97AE0F11FDE54199C9EA9A27615906EED3FA4867 (void);
// 0x0000063F System.Int32 System.Net.ChunkedInputStream::EndRead(System.IAsyncResult)
extern void ChunkedInputStream_EndRead_mE864CF4F961A8BFF84BB85AEB7F9A5A3190109DE (void);
// 0x00000640 System.Void System.Net.ChunkedInputStream::Close()
extern void ChunkedInputStream_Close_mBB8EBFC866444C7F7CE3B6FD34D78D960A34F668 (void);
// 0x00000641 System.Void System.Net.ChunkedInputStream/ReadBufferState::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.HttpStreamAsyncResult)
extern void ReadBufferState__ctor_mA8A380510054E0DCC95284E6DBEB22BECACCE83C (void);
// 0x00000642 System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&,System.Int32)
extern void Dns_GetHostByName_internal_mFEA5DFFBD99C1E7364B146B0F95FDE3F5DA67EC8 (void);
// 0x00000643 System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern void Dns_GetHostName_internal_m69BF784F0F6C595AFC4B0027E8EB0D465B6845F6 (void);
// 0x00000644 System.Void System.Net.Dns::Error_11001(System.String)
extern void Dns_Error_11001_m783146DF96023BA4CAD30F55D8DC527D2ABBCB72 (void);
// 0x00000645 System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String,System.String[],System.String[])
extern void Dns_hostent_to_IPHostEntry_mCD03D1D4689BF1B272CB8212506C4C853C6D06C3 (void);
// 0x00000646 System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern void Dns_GetHostByName_m1DD689606F93DAAB12896C4D3CA6A33731A4CE62 (void);
// 0x00000647 System.String System.Net.Dns::GetHostName()
extern void Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2 (void);
// 0x00000648 System.Void System.Net.EndPointListener::.ctor(System.Net.HttpListener,System.Net.IPAddress,System.Int32,System.Boolean)
extern void EndPointListener__ctor_m54C31D3CBFD441298FF6A9EC24A0321F8D38ED12 (void);
// 0x00000649 System.Net.HttpListener System.Net.EndPointListener::get_Listener()
extern void EndPointListener_get_Listener_m2CA93971A1BA3BDBFE9DFAE5DA0A1DC9BDB170A6 (void);
// 0x0000064A System.Void System.Net.EndPointListener::Accept(System.Net.Sockets.Socket,System.Net.Sockets.SocketAsyncEventArgs,System.Net.Sockets.Socket&)
extern void EndPointListener_Accept_mD8F52B46ED8860B598BFCD3258E6487B3638416D (void);
// 0x0000064B System.Void System.Net.EndPointListener::ProcessAccept(System.Net.Sockets.SocketAsyncEventArgs)
extern void EndPointListener_ProcessAccept_mE8F096F5DEFE9260A1E130BB0E9A27EDFEDEAA9E (void);
// 0x0000064C System.Void System.Net.EndPointListener::OnAccept(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
extern void EndPointListener_OnAccept_mA1AF3044F6DD5EEAA1B86DF722CD2363EB9769B2 (void);
// 0x0000064D System.Void System.Net.EndPointListener::RemoveConnection(System.Net.HttpConnection)
extern void EndPointListener_RemoveConnection_m7742B882C4F715B2F4F665CA40C6B0B363A3D4DB (void);
// 0x0000064E System.Boolean System.Net.EndPointListener::BindContext(System.Net.HttpListenerContext)
extern void EndPointListener_BindContext_m05EB3B7D9258B12EE03EC62EC8451B4BCD6D7A3C (void);
// 0x0000064F System.Void System.Net.EndPointListener::UnbindContext(System.Net.HttpListenerContext)
extern void EndPointListener_UnbindContext_mA6A15B7443628157D0201F10BEBC075A0187006E (void);
// 0x00000650 System.Net.HttpListener System.Net.EndPointListener::SearchListener(System.Uri,System.Net.ListenerPrefix&)
extern void EndPointListener_SearchListener_m93F8A0611DDE2E400DCCB1801AE56033213E9992 (void);
// 0x00000651 System.Net.HttpListener System.Net.EndPointListener::MatchFromList(System.String,System.String,System.Collections.ArrayList,System.Net.ListenerPrefix&)
extern void EndPointListener_MatchFromList_m5CC12177B69E44E9A45D0C32877FCF28CD6A5B6B (void);
// 0x00000652 System.Void System.Net.EndPointListener::AddSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern void EndPointListener_AddSpecial_m4D0E9F6B90ADC8786D8EC0B46335C2CBE5A96A17 (void);
// 0x00000653 System.Boolean System.Net.EndPointListener::RemoveSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern void EndPointListener_RemoveSpecial_m5E9261172CA43199B70BB440BD4520B09A8C8EFC (void);
// 0x00000654 System.Void System.Net.EndPointListener::CheckIfRemove()
extern void EndPointListener_CheckIfRemove_mD62FEF6EE0CD6548E66098B4DF983EC5850C67FC (void);
// 0x00000655 System.Void System.Net.EndPointListener::Close()
extern void EndPointListener_Close_mA522B3A4C420D3262951C8CC0B054775E7B1B282 (void);
// 0x00000656 System.Void System.Net.EndPointListener::AddPrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern void EndPointListener_AddPrefix_mF0DD3A430CCD8F6A320B64439B28A7650AC90D1F (void);
// 0x00000657 System.Void System.Net.EndPointListener::RemovePrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern void EndPointListener_RemovePrefix_mA0C980601BB75FC311C21125BF9D5FCA6A6B836F (void);
// 0x00000658 System.Void System.Net.EndPointManager::AddListener(System.Net.HttpListener)
extern void EndPointManager_AddListener_m3C1EC5A14C176F471E0A80FCDC998B514A00147D (void);
// 0x00000659 System.Void System.Net.EndPointManager::AddPrefix(System.String,System.Net.HttpListener)
extern void EndPointManager_AddPrefix_mA5662947912D99CBE026EDFCCBFDBD11A1A42FD7 (void);
// 0x0000065A System.Void System.Net.EndPointManager::AddPrefixInternal(System.String,System.Net.HttpListener)
extern void EndPointManager_AddPrefixInternal_m73BD9CE096BAEE46D79410CEF14B1ABC03B757FE (void);
// 0x0000065B System.Net.EndPointListener System.Net.EndPointManager::GetEPListener(System.String,System.Int32,System.Net.HttpListener,System.Boolean)
extern void EndPointManager_GetEPListener_mA47783DB52E13ECDD39BCDD994D90DB23CF8591D (void);
// 0x0000065C System.Void System.Net.EndPointManager::RemoveEndPoint(System.Net.EndPointListener,System.Net.IPEndPoint)
extern void EndPointManager_RemoveEndPoint_mCE275FC1DA33EAA113BA3C56D9B9DC35DE020BF1 (void);
// 0x0000065D System.Void System.Net.EndPointManager::RemoveListener(System.Net.HttpListener)
extern void EndPointManager_RemoveListener_m7464BB72956341252E1F2BD4D4F216532423D432 (void);
// 0x0000065E System.Void System.Net.EndPointManager::RemovePrefix(System.String,System.Net.HttpListener)
extern void EndPointManager_RemovePrefix_m2E92AEE8CDED69211E11C510E34004F30CB75D21 (void);
// 0x0000065F System.Void System.Net.EndPointManager::RemovePrefixInternal(System.String,System.Net.HttpListener)
extern void EndPointManager_RemovePrefixInternal_m140D5617E211EFF83619F1EBD2D586A2ED303A91 (void);
// 0x00000660 System.Void System.Net.EndPointManager::.cctor()
extern void EndPointManager__cctor_m1E711681C1B32404C007186BD6480962BF319A42 (void);
// 0x00000661 System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern void FtpRequestCreator_Create_mB9CD950EDF1B3F06F7C928E490806C12FB1D7306 (void);
// 0x00000662 System.Void System.Net.FtpRequestCreator::.ctor()
extern void FtpRequestCreator__ctor_m0DACF33EF40A75AE489FEF288DC61837FFFA8BEF (void);
// 0x00000663 System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern void FtpWebRequest__ctor_mEB166EB5A1F20FC008DA66D46AADE550EE176892 (void);
// 0x00000664 System.Void System.Net.FtpWebRequest::.cctor()
extern void FtpWebRequest__cctor_m3652EDD67F0C55207C33B710F1DA9808E1D31AFB (void);
// 0x00000665 System.Void System.Net.HttpConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPointListener,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern void HttpConnection__ctor_mC89B8E8ABF3FBD49061C8815E4C684903F615E33 (void);
// 0x00000666 System.Void System.Net.HttpConnection::Init()
extern void HttpConnection_Init_m5E016F01121112486E95B008DE64DED3D576227B (void);
// 0x00000667 System.Int32 System.Net.HttpConnection::get_Reuses()
extern void HttpConnection_get_Reuses_mE082676455201FFE36A8AC8CFFDE303261E50262 (void);
// 0x00000668 System.Net.IPEndPoint System.Net.HttpConnection::get_LocalEndPoint()
extern void HttpConnection_get_LocalEndPoint_mAA7194231A0274AF6B272FB592C73AFA68B35EC8 (void);
// 0x00000669 System.Boolean System.Net.HttpConnection::get_IsSecure()
extern void HttpConnection_get_IsSecure_m37AADCAD76AAF8EF8D43C9F81B7F03198F88A070 (void);
// 0x0000066A System.Void System.Net.HttpConnection::set_Prefix(System.Net.ListenerPrefix)
extern void HttpConnection_set_Prefix_mEED0A522D359C7063D523774E6FDC400DCE9D5F4 (void);
// 0x0000066B System.Void System.Net.HttpConnection::OnTimeout(System.Object)
extern void HttpConnection_OnTimeout_m995D49B1EF3B50A765E6923361214F1E2F1D44B8 (void);
// 0x0000066C System.Void System.Net.HttpConnection::BeginReadRequest()
extern void HttpConnection_BeginReadRequest_m49E9C5419554CDFDFD015538D4E7DB451F995ECA (void);
// 0x0000066D System.Net.RequestStream System.Net.HttpConnection::GetRequestStream(System.Boolean,System.Int64)
extern void HttpConnection_GetRequestStream_mD0B9231D2AD11FA79DBEB76BCF4A5E001DD18387 (void);
// 0x0000066E System.Net.ResponseStream System.Net.HttpConnection::GetResponseStream()
extern void HttpConnection_GetResponseStream_m8D1FF7A2F3E7418B0423BBF8840A88D26E3FB85A (void);
// 0x0000066F System.Void System.Net.HttpConnection::OnRead(System.IAsyncResult)
extern void HttpConnection_OnRead_m25FCD298724C68C39C38A6E1413DAE5200A4B4A5 (void);
// 0x00000670 System.Void System.Net.HttpConnection::OnReadInternal(System.IAsyncResult)
extern void HttpConnection_OnReadInternal_m21F283ABFFE293CB1CF316C1AFA644F9DC0B5433 (void);
// 0x00000671 System.Void System.Net.HttpConnection::RemoveConnection()
extern void HttpConnection_RemoveConnection_m825DFD965E0DD9F3FBAF0E602BC4C1F5009BE8AC (void);
// 0x00000672 System.Boolean System.Net.HttpConnection::ProcessInput(System.IO.MemoryStream)
extern void HttpConnection_ProcessInput_mC775E5BF8EA69F9655B166D26AADE38D991ECAA1 (void);
// 0x00000673 System.String System.Net.HttpConnection::ReadLine(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern void HttpConnection_ReadLine_m37DD80AC98202982E34432F40E43785C3490CA2D (void);
// 0x00000674 System.Void System.Net.HttpConnection::SendError(System.String,System.Int32)
extern void HttpConnection_SendError_m35C1F2F213A5F9099F4C65FFCC70B7E435005C22 (void);
// 0x00000675 System.Void System.Net.HttpConnection::SendError()
extern void HttpConnection_SendError_m5E862B9B410A7A66A8EC0BB071BACC10901A3FE6 (void);
// 0x00000676 System.Void System.Net.HttpConnection::Unbind()
extern void HttpConnection_Unbind_m377518619413A3C578AF4AF3FB18BAB3EDE7BDB0 (void);
// 0x00000677 System.Void System.Net.HttpConnection::CloseSocket()
extern void HttpConnection_CloseSocket_m027C057CDCB8A9C13A4CE0938207CCCC30ACDE12 (void);
// 0x00000678 System.Void System.Net.HttpConnection::Close(System.Boolean)
extern void HttpConnection_Close_mCA444D5DFFA3D155AB639B5446AAB3A2831289C1 (void);
// 0x00000679 System.Void System.Net.HttpConnection::.cctor()
extern void HttpConnection__cctor_m706E6BF3D3307F00707F3D521175B2C3A28F3D47 (void);
// 0x0000067A System.Boolean System.Net.HttpConnection::<.ctor>b__24_0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void HttpConnection_U3C_ctorU3Eb__24_0_m579DB39285B169C68A29571D00577071265335B7 (void);
// 0x0000067B System.Security.Cryptography.X509Certificates.X509Certificate System.Net.HttpListener::LoadCertificateAndKey(System.Net.IPAddress,System.Int32)
extern void HttpListener_LoadCertificateAndKey_mE776961752BF6408CD74C8DCE60A50F3A58923B6 (void);
// 0x0000067C System.Net.Security.SslStream System.Net.HttpListener::CreateSslStream(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern void HttpListener_CreateSslStream_m317FFED208849D80505030EADECD5A8D3F1C4B10 (void);
// 0x0000067D System.Void System.Net.HttpListener::.ctor()
extern void HttpListener__ctor_m59C511B3E5BDB0D23075C4340C860D1126D0453C (void);
// 0x0000067E System.Net.AuthenticationSchemes System.Net.HttpListener::get_AuthenticationSchemes()
extern void HttpListener_get_AuthenticationSchemes_m294558B2F1C001485D4E9906D5678045A66C3F56 (void);
// 0x0000067F System.Void System.Net.HttpListener::set_AuthenticationSchemes(System.Net.AuthenticationSchemes)
extern void HttpListener_set_AuthenticationSchemes_m6951DB842EC8A0BCAD513D393FF10A1F615EBC1B (void);
// 0x00000680 System.Net.AuthenticationSchemeSelector System.Net.HttpListener::get_AuthenticationSchemeSelectorDelegate()
extern void HttpListener_get_AuthenticationSchemeSelectorDelegate_m0ACF2E7E170954F70E19941F3FFA40503D27A864 (void);
// 0x00000681 System.Boolean System.Net.HttpListener::get_IgnoreWriteExceptions()
extern void HttpListener_get_IgnoreWriteExceptions_m2046086D2E972DB9E30242023F4029091A597621 (void);
// 0x00000682 System.Boolean System.Net.HttpListener::get_IsListening()
extern void HttpListener_get_IsListening_mD5CECF2E549AB93219ECB920A005C3582D5C35F3 (void);
// 0x00000683 System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
extern void HttpListener_get_Prefixes_mA88067E63B7DB286AA7100BC37AB146F60D0E2E3 (void);
// 0x00000684 System.String System.Net.HttpListener::get_Realm()
extern void HttpListener_get_Realm_m82C2D05926740AB57E934D7D59BE5D3B055A8798 (void);
// 0x00000685 System.Void System.Net.HttpListener::Close(System.Boolean)
extern void HttpListener_Close_mC91CB50428FAEDFD0F54FCEFA68916D3C85E9B23 (void);
// 0x00000686 System.Void System.Net.HttpListener::Cleanup(System.Boolean)
extern void HttpListener_Cleanup_mF6730F2869A448F0552CCB0F352F8FAFBCCB3A9B (void);
// 0x00000687 System.IAsyncResult System.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern void HttpListener_BeginGetContext_m0830C8243AF34181A120D719329696659640385D (void);
// 0x00000688 System.Net.HttpListenerContext System.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern void HttpListener_EndGetContext_m6745B6B41D204243343F344EFD35BE7CE512D6AA (void);
// 0x00000689 System.Net.AuthenticationSchemes System.Net.HttpListener::SelectAuthenticationScheme(System.Net.HttpListenerContext)
extern void HttpListener_SelectAuthenticationScheme_m74CC9D17A6DD6D98E97643AEF65B555FCAFCB013 (void);
// 0x0000068A System.Void System.Net.HttpListener::Start()
extern void HttpListener_Start_m0E024DAFAD85BCF05C8D3EBD27B2A13DC8A0CE5D (void);
// 0x0000068B System.Void System.Net.HttpListener::System.IDisposable.Dispose()
extern void HttpListener_System_IDisposable_Dispose_m83461203F6F2EFD10F40FA8784A0B3894CB3C26F (void);
// 0x0000068C System.Void System.Net.HttpListener::CheckDisposed()
extern void HttpListener_CheckDisposed_mB5B9D9C1CB58A767A8C2E7EB609094F4BA139D66 (void);
// 0x0000068D System.Net.HttpListenerContext System.Net.HttpListener::GetContextFromQueue()
extern void HttpListener_GetContextFromQueue_m0123ED8CE2EBE8EBADD43B3BAF15B6E5A3666B62 (void);
// 0x0000068E System.Void System.Net.HttpListener::RegisterContext(System.Net.HttpListenerContext)
extern void HttpListener_RegisterContext_m87E14D3A83E9BCC20DC3CE87C4B84BB10B634DCB (void);
// 0x0000068F System.Void System.Net.HttpListener::UnregisterContext(System.Net.HttpListenerContext)
extern void HttpListener_UnregisterContext_mB17E2AEFD86C23D8515D88603C99A6635A5D9202 (void);
// 0x00000690 System.Void System.Net.HttpListener::AddConnection(System.Net.HttpConnection)
extern void HttpListener_AddConnection_m8B74A1D0207D6557348C47FBB13D69D34FF8FC90 (void);
// 0x00000691 System.Void System.Net.HttpListener::RemoveConnection(System.Net.HttpConnection)
extern void HttpListener_RemoveConnection_m8671F8EC617E0FE8C2505A262EBAE20F4C66B523 (void);
// 0x00000692 System.Void System.Net.HttpListener/ExtendedProtectionSelector::.ctor(System.Object,System.IntPtr)
extern void ExtendedProtectionSelector__ctor_mF12DF1826EE9DD0DFE653DF2ED6AD8ABBF8D5EF2 (void);
// 0x00000693 System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy System.Net.HttpListener/ExtendedProtectionSelector::Invoke(System.Net.HttpListenerRequest)
extern void ExtendedProtectionSelector_Invoke_mC5DB64A93FE40C877DBE168087C44AC3A0766DAF (void);
// 0x00000694 System.IAsyncResult System.Net.HttpListener/ExtendedProtectionSelector::BeginInvoke(System.Net.HttpListenerRequest,System.AsyncCallback,System.Object)
extern void ExtendedProtectionSelector_BeginInvoke_mC1C578FF0D7A67E16147446242EB654C349A7D4A (void);
// 0x00000695 System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy System.Net.HttpListener/ExtendedProtectionSelector::EndInvoke(System.IAsyncResult)
extern void ExtendedProtectionSelector_EndInvoke_m940258FBEEF451BF5EF56481921E931E4CB42EFD (void);
// 0x00000696 System.Void System.Net.HttpListenerBasicIdentity::.ctor(System.String,System.String)
extern void HttpListenerBasicIdentity__ctor_m10B28B31D0EA57A9D0CB762A762CED2A5331A175 (void);
// 0x00000697 System.Void System.Net.HttpListenerContext::.ctor(System.Net.HttpConnection)
extern void HttpListenerContext__ctor_m74FA6EF51D915EDB82A5D6FDB6897BCD8DC70CBD (void);
// 0x00000698 System.Int32 System.Net.HttpListenerContext::get_ErrorStatus()
extern void HttpListenerContext_get_ErrorStatus_m281DD827BBFEA59124F6DB7AC4B357C053F61833 (void);
// 0x00000699 System.Void System.Net.HttpListenerContext::set_ErrorStatus(System.Int32)
extern void HttpListenerContext_set_ErrorStatus_m1F1D72CF97FE5ABB9FBD3C032A0715F455102DF1 (void);
// 0x0000069A System.String System.Net.HttpListenerContext::get_ErrorMessage()
extern void HttpListenerContext_get_ErrorMessage_mCC16741387091E5B2D8ED97FC76D8100F0A11710 (void);
// 0x0000069B System.Void System.Net.HttpListenerContext::set_ErrorMessage(System.String)
extern void HttpListenerContext_set_ErrorMessage_m43D9416187ABA26AE090D81A2C96ABA41589B180 (void);
// 0x0000069C System.Boolean System.Net.HttpListenerContext::get_HaveError()
extern void HttpListenerContext_get_HaveError_m1DB88FFE938554B1611A620932A4671A46FE0C09 (void);
// 0x0000069D System.Net.HttpConnection System.Net.HttpListenerContext::get_Connection()
extern void HttpListenerContext_get_Connection_m23EA69C5DF40D21EC8E390156F4ED8CC1C12E8C3 (void);
// 0x0000069E System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
extern void HttpListenerContext_get_Request_m31DDE359F2E159B3D9484A1E24578A2B8B92884A (void);
// 0x0000069F System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
extern void HttpListenerContext_get_Response_m2085D1445CC3EF8F9A94E07D7DB4269615F727B6 (void);
// 0x000006A0 System.Void System.Net.HttpListenerContext::ParseAuthentication(System.Net.AuthenticationSchemes)
extern void HttpListenerContext_ParseAuthentication_m20EEE3907637C01C767B761F12B910F342DC467E (void);
// 0x000006A1 System.Security.Principal.IPrincipal System.Net.HttpListenerContext::ParseBasicAuthentication(System.String)
extern void HttpListenerContext_ParseBasicAuthentication_m425EC9CDED67EB011EF3CB6022EE9867D923CBB7 (void);
// 0x000006A2 System.Void System.Net.HttpListenerPrefixCollection::.ctor(System.Net.HttpListener)
extern void HttpListenerPrefixCollection__ctor_m7F843382088E5E0C856663CD18856FACDEFC27C6 (void);
// 0x000006A3 System.Int32 System.Net.HttpListenerPrefixCollection::get_Count()
extern void HttpListenerPrefixCollection_get_Count_mB0E5FCD1820438F55EDCA9F6C0635564A8461115 (void);
// 0x000006A4 System.Boolean System.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern void HttpListenerPrefixCollection_get_IsReadOnly_m4A3BA267C6539C7A9CCA8F9D12BF2C075718D819 (void);
// 0x000006A5 System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
extern void HttpListenerPrefixCollection_Add_m0693A426561DB4401E5961FE76EBA43881C47680 (void);
// 0x000006A6 System.Void System.Net.HttpListenerPrefixCollection::Clear()
extern void HttpListenerPrefixCollection_Clear_m98F488FC3E3387167C423415123A702A94A62FBC (void);
// 0x000006A7 System.Boolean System.Net.HttpListenerPrefixCollection::Contains(System.String)
extern void HttpListenerPrefixCollection_Contains_mB5E5DED725A213FB1718B58C1082CC4377031EF4 (void);
// 0x000006A8 System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern void HttpListenerPrefixCollection_CopyTo_m1600BAAC627A2DCA1370DF640D4FDB58CACAFCD3 (void);
// 0x000006A9 System.Collections.Generic.IEnumerator`1<System.String> System.Net.HttpListenerPrefixCollection::GetEnumerator()
extern void HttpListenerPrefixCollection_GetEnumerator_m1AF6FD036D49288BC42C489FE3A0739A6AC612EE (void);
// 0x000006AA System.Collections.IEnumerator System.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern void HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_mD1B11C52B10F4CEFD7D6439EE9B7085B717E5C3E (void);
// 0x000006AB System.Boolean System.Net.HttpListenerPrefixCollection::Remove(System.String)
extern void HttpListenerPrefixCollection_Remove_m62EBE00D6A52DBAFB32F0F1DA2B10D7FE4E8D735 (void);
// 0x000006AC System.Void System.Net.HttpListenerRequest::.ctor(System.Net.HttpListenerContext)
extern void HttpListenerRequest__ctor_m05F44E2041D0DE97E280BE5FAA1D877F15BB8F2A (void);
// 0x000006AD System.Void System.Net.HttpListenerRequest::SetRequestLine(System.String)
extern void HttpListenerRequest_SetRequestLine_m918E4F404836802794B9410349A9C1F49A6115CC (void);
// 0x000006AE System.Void System.Net.HttpListenerRequest::CreateQueryString(System.String)
extern void HttpListenerRequest_CreateQueryString_mF0443B6BBE24E0E4409C8BFAAD4CCF2D87B99CE8 (void);
// 0x000006AF System.Boolean System.Net.HttpListenerRequest::MaybeUri(System.String)
extern void HttpListenerRequest_MaybeUri_m6FBA976D26E206B7303461DB0CA6C425886668A3 (void);
// 0x000006B0 System.Boolean System.Net.HttpListenerRequest::IsPredefinedScheme(System.String)
extern void HttpListenerRequest_IsPredefinedScheme_m3C944DB8ACB5215D3A112D1C65F4F92DCF4AE221 (void);
// 0x000006B1 System.Void System.Net.HttpListenerRequest::FinishInitialization()
extern void HttpListenerRequest_FinishInitialization_m99A3F1FCF7AF0871ACFD2192983E7964D2BC359D (void);
// 0x000006B2 System.String System.Net.HttpListenerRequest::Unquote(System.String)
extern void HttpListenerRequest_Unquote_mD47B61B703A8C3ADB6210306EC779F0367C6FC35 (void);
// 0x000006B3 System.Void System.Net.HttpListenerRequest::AddHeader(System.String)
extern void HttpListenerRequest_AddHeader_mF2BFD4B0B577C18C7E48618310D5CFC10C3BC50C (void);
// 0x000006B4 System.Boolean System.Net.HttpListenerRequest::FlushInput()
extern void HttpListenerRequest_FlushInput_m3DC653BB14BCC7F4E5E0AC36314BF8043C1AE7A1 (void);
// 0x000006B5 System.Boolean System.Net.HttpListenerRequest::get_HasEntityBody()
extern void HttpListenerRequest_get_HasEntityBody_m4C06CB7257D7C96A8CFC9254D990958EF9E89370 (void);
// 0x000006B6 System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_Headers()
extern void HttpListenerRequest_get_Headers_m6BC33B14947E185AA62CF9A5B5126E85E573E0C8 (void);
// 0x000006B7 System.IO.Stream System.Net.HttpListenerRequest::get_InputStream()
extern void HttpListenerRequest_get_InputStream_mCAACCC5B94ED051304D3C3F5E9E9B13E36EB0485 (void);
// 0x000006B8 System.Boolean System.Net.HttpListenerRequest::get_IsSecureConnection()
extern void HttpListenerRequest_get_IsSecureConnection_mDA2EEFAE0538342F28A395DEC35638419FAD5940 (void);
// 0x000006B9 System.Boolean System.Net.HttpListenerRequest::get_KeepAlive()
extern void HttpListenerRequest_get_KeepAlive_m42403F34CF14A8BB0835F2C5CE726977FECB4AB6 (void);
// 0x000006BA System.Net.IPEndPoint System.Net.HttpListenerRequest::get_LocalEndPoint()
extern void HttpListenerRequest_get_LocalEndPoint_m4DF657A94279FCA01508F38E49F240FF540E0255 (void);
// 0x000006BB System.Version System.Net.HttpListenerRequest::get_ProtocolVersion()
extern void HttpListenerRequest_get_ProtocolVersion_mFCBF5E363AF6B80131A3F0432254F35F3B0254E2 (void);
// 0x000006BC System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_QueryString()
extern void HttpListenerRequest_get_QueryString_m53095961ACB1683994DE2E840BEE6D4655BC4995 (void);
// 0x000006BD System.Uri System.Net.HttpListenerRequest::get_Url()
extern void HttpListenerRequest_get_Url_mD93614A6AFD2D6B55C6E9A21C8A2BC061A00E295 (void);
// 0x000006BE System.String System.Net.HttpListenerRequest::get_UserHostAddress()
extern void HttpListenerRequest_get_UserHostAddress_mEC524FAE07839AA2F95F6A5268816BA0BE3633B5 (void);
// 0x000006BF System.String System.Net.HttpListenerRequest::get_UserHostName()
extern void HttpListenerRequest_get_UserHostName_mD2F1DF70E8DEEB5956755C2C7E18E71B2C6DB584 (void);
// 0x000006C0 System.Void System.Net.HttpListenerRequest::.cctor()
extern void HttpListenerRequest__cctor_m3677A5F3BD973B779B9E1D9BFA2E631EEB215CED (void);
// 0x000006C1 System.Void System.Net.HttpListenerResponse::.ctor(System.Net.HttpListenerContext)
extern void HttpListenerResponse__ctor_mE3EDE6FF5F3A7CC558B5D454A2981A95A57BCC68 (void);
// 0x000006C2 System.Boolean System.Net.HttpListenerResponse::get_ForceCloseChunked()
extern void HttpListenerResponse_get_ForceCloseChunked_m3894D8E041E4E813C01623CBCA5DE0A8094923CC (void);
// 0x000006C3 System.Text.Encoding System.Net.HttpListenerResponse::get_ContentEncoding()
extern void HttpListenerResponse_get_ContentEncoding_m4859C117644716FC7C59F71E234E3BC63DFA98C8 (void);
// 0x000006C4 System.Void System.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern void HttpListenerResponse_set_ContentLength64_m6FB267A501DF573E6D049379263C64FF6AAE4FFB (void);
// 0x000006C5 System.Void System.Net.HttpListenerResponse::set_ContentType(System.String)
extern void HttpListenerResponse_set_ContentType_mFBCB2B715262024BD94011123DC12EA214FCF03D (void);
// 0x000006C6 System.Net.WebHeaderCollection System.Net.HttpListenerResponse::get_Headers()
extern void HttpListenerResponse_get_Headers_mB59CF931610417635CC4BABE8B7D290BF03EEDE0 (void);
// 0x000006C7 System.IO.Stream System.Net.HttpListenerResponse::get_OutputStream()
extern void HttpListenerResponse_get_OutputStream_m01ABC46AE997BB7B8444851022CB8AF5A5BDE04A (void);
// 0x000006C8 System.Boolean System.Net.HttpListenerResponse::get_SendChunked()
extern void HttpListenerResponse_get_SendChunked_m69AB28998775B4010F9F825CA9CFDAA5991D2BF2 (void);
// 0x000006C9 System.Void System.Net.HttpListenerResponse::set_SendChunked(System.Boolean)
extern void HttpListenerResponse_set_SendChunked_mFA4042777705A2ADE772E9451289A9C202B92752 (void);
// 0x000006CA System.Void System.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern void HttpListenerResponse_set_StatusCode_mE5177189858DC4387B64BE25C2CD1EB2CA640B7E (void);
// 0x000006CB System.Void System.Net.HttpListenerResponse::System.IDisposable.Dispose()
extern void HttpListenerResponse_System_IDisposable_Dispose_m00D3944B2EC3F9427839928E72F40AD604DF2D50 (void);
// 0x000006CC System.Void System.Net.HttpListenerResponse::Close(System.Boolean)
extern void HttpListenerResponse_Close_m4D6239F656BA5A27B356F2CC4CB3282EA3F9941C (void);
// 0x000006CD System.Void System.Net.HttpListenerResponse::Close()
extern void HttpListenerResponse_Close_m4BC799B13E1F8179C28DC06D88BB785E1D5E5CC7 (void);
// 0x000006CE System.Void System.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
extern void HttpListenerResponse_Close_m3DC2839AF58BFE3EB51DF9EB85C417937ED2D727 (void);
// 0x000006CF System.Void System.Net.HttpListenerResponse::SendHeaders(System.Boolean,System.IO.MemoryStream)
extern void HttpListenerResponse_SendHeaders_m920B4970C235685AF9D31922F439BC17BEDAA72D (void);
// 0x000006D0 System.String System.Net.HttpListenerResponse::FormatHeaders(System.Net.WebHeaderCollection)
extern void HttpListenerResponse_FormatHeaders_mA8396DD070238C3BD0ED86D8BB3FAE5EDA57685B (void);
// 0x000006D1 System.String System.Net.HttpListenerResponse::CookieToClientString(System.Net.Cookie)
extern void HttpListenerResponse_CookieToClientString_m40C1D48DC33DB88C8828C0E1738EC76979A518CE (void);
// 0x000006D2 System.String System.Net.HttpListenerResponse::QuotedString(System.Net.Cookie,System.String)
extern void HttpListenerResponse_QuotedString_m229C13FBD29DEF4B1473C47E715D562EEC04D3DE (void);
// 0x000006D3 System.Boolean System.Net.HttpListenerResponse::IsToken(System.String)
extern void HttpListenerResponse_IsToken_mFA72D36AD4201A6F67F8B02903A01C059C8BF69E (void);
// 0x000006D4 System.Void System.Net.HttpListenerResponse::.cctor()
extern void HttpListenerResponse__cctor_mB4BD1B27C1FE93201D3D7080B07A3B4F3E74F9E7 (void);
// 0x000006D5 System.Void System.Net.HttpRequestCreator::.ctor()
extern void HttpRequestCreator__ctor_m2B7DE24FCB9C1814F8972B4B167127F86DB1BF39 (void);
// 0x000006D6 System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern void HttpRequestCreator_Create_mE3E077C98503C150AA328D4EED41FE9F8F518F46 (void);
// 0x000006D7 System.Void System.Net.HttpStreamAsyncResult::Complete(System.Exception)
extern void HttpStreamAsyncResult_Complete_mDB23BE76DFB365414990E99E2E92444A227962C9 (void);
// 0x000006D8 System.Void System.Net.HttpStreamAsyncResult::Complete()
extern void HttpStreamAsyncResult_Complete_mC1030C76F1981781353B3794B07449EAF2EC285B (void);
// 0x000006D9 System.Object System.Net.HttpStreamAsyncResult::get_AsyncState()
extern void HttpStreamAsyncResult_get_AsyncState_mB0FB22F9CEC2E745C0FED548AE2F8C7E8BD273E3 (void);
// 0x000006DA System.Threading.WaitHandle System.Net.HttpStreamAsyncResult::get_AsyncWaitHandle()
extern void HttpStreamAsyncResult_get_AsyncWaitHandle_mECD39326E9A99354CF5BC0F65DE933F9596E3D13 (void);
// 0x000006DB System.Boolean System.Net.HttpStreamAsyncResult::get_CompletedSynchronously()
extern void HttpStreamAsyncResult_get_CompletedSynchronously_mDB9C9040A74CB55EBECF27C408A83CC469268033 (void);
// 0x000006DC System.Boolean System.Net.HttpStreamAsyncResult::get_IsCompleted()
extern void HttpStreamAsyncResult_get_IsCompleted_m477D426A6F4664A5B440A9EC03E401E7D027FBAC (void);
// 0x000006DD System.Void System.Net.HttpStreamAsyncResult::.ctor()
extern void HttpStreamAsyncResult__ctor_m25F2E2EDB37FA185E2405746C68F72213F2BDD14 (void);
// 0x000006DE System.Void System.Net.HttpWebRequest::.cctor()
extern void HttpWebRequest__cctor_mA59FB9F51019C563A3B276B79A1131CFDBE0035D (void);
// 0x000006DF System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern void HttpWebRequest__ctor_m85AA1BD537DCDBF3B1BCD75F6C93C6AA8B831D7F (void);
// 0x000006E0 System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest__ctor_m85CA8AA15E849598BC5ED6217805CBDF8D5BAA0E (void);
// 0x000006E1 System.Void System.Net.HttpWebRequest::ResetAuthorization()
extern void HttpWebRequest_ResetAuthorization_mAA12582B7D5B809AFFA7559AEA5582AADD6B23AF (void);
// 0x000006E2 System.Void System.Net.HttpWebRequest::set_ThrowOnError(System.Boolean)
extern void HttpWebRequest_set_ThrowOnError_m7A186C503E47933A82ABC3AA32081213004BF0FD (void);
// 0x000006E3 System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern void HttpWebRequest_get_ServicePoint_m7E95E58719904639C79F9420F080A3F94BAB63EC (void);
// 0x000006E4 System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePointNoLock()
extern void HttpWebRequest_get_ServicePointNoLock_m6749645299E6A6C85445E9B7F2DAD248FC6FA1E1 (void);
// 0x000006E5 System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::get_ServerCertValidationCallback()
extern void HttpWebRequest_get_ServerCertValidationCallback_mE535B7C3510E634EF8B2E2C9698BE4069D376619 (void);
// 0x000006E6 System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern void HttpWebRequest_GetServicePoint_m2F4A5E8A7A723C3CA97203FE2A4D9913EAC185E6 (void);
// 0x000006E7 System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m14EED4626353FF9CB5ABAC2978C2CA37890306AC (void);
// 0x000006E8 System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void HttpWebRequest_GetObjectData_mF600B207AECA50F8B6ACB8D4C29366A6ABE36C45 (void);
// 0x000006E9 System.Void System.Net.HttpWebRequest::.ctor()
extern void HttpWebRequest__ctor_m71D51512F53504F6BCBCFBCBBCB5D803357145D0 (void);
// 0x000006EA System.Void System.Net.HttpWebRequest/AuthorizationState::.ctor(System.Net.HttpWebRequest,System.Boolean)
extern void AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D (void);
// 0x000006EB System.String System.Net.HttpWebRequest/AuthorizationState::ToString()
extern void AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A (void);
// 0x000006EC System.Void System.Net.IPv6AddressFormatter::.ctor(System.UInt16[],System.Int64)
extern void IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497 (void);
// 0x000006ED System.UInt16 System.Net.IPv6AddressFormatter::SwapUShort(System.UInt16)
extern void IPv6AddressFormatter_SwapUShort_m6B7BA905E96BB0889C580EE25F3614C7A4A9164C (void);
// 0x000006EE System.UInt32 System.Net.IPv6AddressFormatter::AsIPv4Int()
extern void IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F (void);
// 0x000006EF System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Compatible()
extern void IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC (void);
// 0x000006F0 System.Boolean System.Net.IPv6AddressFormatter::IsIPv4Mapped()
extern void IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127 (void);
// 0x000006F1 System.String System.Net.IPv6AddressFormatter::ToString()
extern void IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F (void);
// 0x000006F2 System.Void System.Net.ListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern void ListenerAsyncResult__ctor_mC4AB3908C39F37C81C2075AE812A9BDC17064201 (void);
// 0x000006F3 System.Void System.Net.ListenerAsyncResult::Complete(System.Exception)
extern void ListenerAsyncResult_Complete_m0D2E6AA7B5F6B994246DA97EA3C561417ACC5249 (void);
// 0x000006F4 System.Void System.Net.ListenerAsyncResult::InvokeCallback(System.Object)
extern void ListenerAsyncResult_InvokeCallback_m920A16394D6A979A9C570077092A83851A8B49BC (void);
// 0x000006F5 System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext)
extern void ListenerAsyncResult_Complete_m15E80200E8288CDBE4D5353239C1FE651AAF0573 (void);
// 0x000006F6 System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext,System.Boolean)
extern void ListenerAsyncResult_Complete_m9830113594EF45845D7C0E6B4F7B4BEE485CCF36 (void);
// 0x000006F7 System.Net.HttpListenerContext System.Net.ListenerAsyncResult::GetContext()
extern void ListenerAsyncResult_GetContext_mA02D57CC97748D24774E9D8A633F779EDFBE5B7A (void);
// 0x000006F8 System.Object System.Net.ListenerAsyncResult::get_AsyncState()
extern void ListenerAsyncResult_get_AsyncState_mEA260222B73D72FDAF085C356C3C14875FC3BDCF (void);
// 0x000006F9 System.Threading.WaitHandle System.Net.ListenerAsyncResult::get_AsyncWaitHandle()
extern void ListenerAsyncResult_get_AsyncWaitHandle_m4EEF3C3D11E1DC77400AB151DD0F144243EAD673 (void);
// 0x000006FA System.Boolean System.Net.ListenerAsyncResult::get_CompletedSynchronously()
extern void ListenerAsyncResult_get_CompletedSynchronously_mAA0469DBFA03A6D5C09ABD25C37AF31DF64DA6C1 (void);
// 0x000006FB System.Boolean System.Net.ListenerAsyncResult::get_IsCompleted()
extern void ListenerAsyncResult_get_IsCompleted_m50AFF9534CD79AB2A8F9892F32D776FF2C665D83 (void);
// 0x000006FC System.Void System.Net.ListenerAsyncResult::.cctor()
extern void ListenerAsyncResult__cctor_mF218123055CF8AD57E687710FA42C42E4A1220B4 (void);
// 0x000006FD System.Void System.Net.ListenerPrefix::.ctor(System.String)
extern void ListenerPrefix__ctor_mDC93EB3FEF4952C672F2DA112BE72A5128D32EAA (void);
// 0x000006FE System.String System.Net.ListenerPrefix::ToString()
extern void ListenerPrefix_ToString_mDB70910FF216C56828DC906D6D723AD54A1E5A1C (void);
// 0x000006FF System.Boolean System.Net.ListenerPrefix::get_Secure()
extern void ListenerPrefix_get_Secure_m78CA8306058F230CF33357CE64BB406C99BE9FC2 (void);
// 0x00000700 System.String System.Net.ListenerPrefix::get_Host()
extern void ListenerPrefix_get_Host_m8B025062AED48A389D360E5634CB1D8F71C57922 (void);
// 0x00000701 System.Int32 System.Net.ListenerPrefix::get_Port()
extern void ListenerPrefix_get_Port_m97510B4B7EC01259CC6AC92ABFBC46A59759078D (void);
// 0x00000702 System.String System.Net.ListenerPrefix::get_Path()
extern void ListenerPrefix_get_Path_mC718A6512953E27A7E9E7BD9EA15411E64810154 (void);
// 0x00000703 System.Boolean System.Net.ListenerPrefix::Equals(System.Object)
extern void ListenerPrefix_Equals_mC9483483C94A3A626D590ABB264B1DD36D1556DD (void);
// 0x00000704 System.Int32 System.Net.ListenerPrefix::GetHashCode()
extern void ListenerPrefix_GetHashCode_mFD8AEECF3DCD25CC9BBA2D0E2D312365DD6382DC (void);
// 0x00000705 System.Void System.Net.ListenerPrefix::Parse(System.String)
extern void ListenerPrefix_Parse_mF1EA321D12DE0832152341C3F266BE8327AF3BCF (void);
// 0x00000706 System.Void System.Net.ListenerPrefix::CheckUri(System.String)
extern void ListenerPrefix_CheckUri_m0C7B48BA9940B32FB2350DB875E96F4279A25423 (void);
// 0x00000707 System.Void System.Net.MonoChunkStream::.ctor(System.Net.WebHeaderCollection)
extern void MonoChunkStream__ctor_m0ADB25AFE1F9EE78C3304F9B7133F6F2F21013E8 (void);
// 0x00000708 System.Int32 System.Net.MonoChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Read_m951C0443C1B74F4CFAFEB6ED95552A7C76D4E982 (void);
// 0x00000709 System.Int32 System.Net.MonoChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_ReadFromChunks_mC95825D03391872071791EA8FB8D4A0B6CFA26A5 (void);
// 0x0000070A System.Void System.Net.MonoChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void MonoChunkStream_Write_m045364F47D0ECD587C1022ADD5047BEDEF1DC27D (void);
// 0x0000070B System.Void System.Net.MonoChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_InternalWrite_mD2577E7811A8F5E5FF8E2B7AA93CCBD5312B3FB9 (void);
// 0x0000070C System.Boolean System.Net.MonoChunkStream::get_WantMore()
extern void MonoChunkStream_get_WantMore_m8815C437B775BD488B25574CB64E644AD9A1A73F (void);
// 0x0000070D System.Int32 System.Net.MonoChunkStream::get_ChunkLeft()
extern void MonoChunkStream_get_ChunkLeft_m564BBC27EC047620C34B5FF91B304BC9263E85B9 (void);
// 0x0000070E System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadBody_mDDD46697977E46299A9ED189BDF61C5AC53A8002 (void);
// 0x0000070F System.Net.MonoChunkStream/State System.Net.MonoChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_GetChunkSize_m2C862194032B260C7AD357B7CE2295A6ED488FEE (void);
// 0x00000710 System.String System.Net.MonoChunkStream::RemoveChunkExtension(System.String)
extern void MonoChunkStream_RemoveChunkExtension_mD14D135C11A5F24FC208CAD57322D9C800B047FF (void);
// 0x00000711 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadCRLF_m3D8A642EDF489046BDCD5A0515D74628F1222E18 (void);
// 0x00000712 System.Net.MonoChunkStream/State System.Net.MonoChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern void MonoChunkStream_ReadTrailer_mAB5F0EAFABB2F3FCB6748ECED41E840872B40AF9 (void);
// 0x00000713 System.Void System.Net.MonoChunkStream::ThrowProtocolViolation(System.String)
extern void MonoChunkStream_ThrowProtocolViolation_mC9B0B1760F312148830161608B10224D40D42192 (void);
// 0x00000714 System.Void System.Net.MonoChunkStream/Chunk::.ctor(System.Byte[])
extern void Chunk__ctor_m8FECC33DD2DE884EC860B9832A223B11CD5465FF (void);
// 0x00000715 System.Int32 System.Net.MonoChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern void Chunk_Read_m765BA24769BDBF6F3D285F0190A62AAE5144E072 (void);
// 0x00000716 System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern void RequestStream__ctor_m206B954FD7FF9D6909349B9A0E8A4537C3DA2995 (void);
// 0x00000717 System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Int64)
extern void RequestStream__ctor_m5B593BCC47660821F7B48C3D9DF600B84B8A3E0C (void);
// 0x00000718 System.Boolean System.Net.RequestStream::get_CanRead()
extern void RequestStream_get_CanRead_m9DC20E266493489F0B335674DB39398B5790428F (void);
// 0x00000719 System.Boolean System.Net.RequestStream::get_CanSeek()
extern void RequestStream_get_CanSeek_mCB2D57FCC50FFAC8CB771DE4A72EB55D388E99E8 (void);
// 0x0000071A System.Boolean System.Net.RequestStream::get_CanWrite()
extern void RequestStream_get_CanWrite_m1BE35FA0841A3F6473CB907ED00BE5EE5C395AC4 (void);
// 0x0000071B System.Int64 System.Net.RequestStream::get_Length()
extern void RequestStream_get_Length_m495CBB4B82A6D15639A15EA48FDA891A57A446E0 (void);
// 0x0000071C System.Int64 System.Net.RequestStream::get_Position()
extern void RequestStream_get_Position_mD09795CAF2174A973327DFF5CC84631FDBC2ACE4 (void);
// 0x0000071D System.Void System.Net.RequestStream::set_Position(System.Int64)
extern void RequestStream_set_Position_m15113E234853DC0E6A760182CEC38CE5815C0EA4 (void);
// 0x0000071E System.Void System.Net.RequestStream::Close()
extern void RequestStream_Close_mE980137D9C7032A1EE81EA0E80C3EB0B0A2A1399 (void);
// 0x0000071F System.Void System.Net.RequestStream::Flush()
extern void RequestStream_Flush_m11BEFF827D83476ECB749C24CAAF9B7F02F42A38 (void);
// 0x00000720 System.Int32 System.Net.RequestStream::FillFromBuffer(System.Byte[],System.Int32,System.Int32)
extern void RequestStream_FillFromBuffer_m0BB2E8FEE8C021609ADAE797F4EFF5166CB57E3F (void);
// 0x00000721 System.Int32 System.Net.RequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern void RequestStream_Read_mE62ACA4C7054DE2BD0AFCE5CD5D657DFA1215DC0 (void);
// 0x00000722 System.IAsyncResult System.Net.RequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void RequestStream_BeginRead_m0CB60D3D0E40A8131E7CC0BB697333ED9D58F4C7 (void);
// 0x00000723 System.Int32 System.Net.RequestStream::EndRead(System.IAsyncResult)
extern void RequestStream_EndRead_m250B13E91C2C7F972B29831BCC50D768EC810A21 (void);
// 0x00000724 System.Int64 System.Net.RequestStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void RequestStream_Seek_mDDD627D28FE9B5901757B13B404BA78D7F4C1B3C (void);
// 0x00000725 System.Void System.Net.RequestStream::SetLength(System.Int64)
extern void RequestStream_SetLength_mCC207986CE0F6119592D750BAF18A36D8A1B6C02 (void);
// 0x00000726 System.Void System.Net.RequestStream::Write(System.Byte[],System.Int32,System.Int32)
extern void RequestStream_Write_m72B1E1200FA740C6265394FD377A77596E388546 (void);
// 0x00000727 System.IAsyncResult System.Net.RequestStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void RequestStream_BeginWrite_m661C0D319597DBC0D231BE52AFAD6FCB19479FAA (void);
// 0x00000728 System.Void System.Net.RequestStream::EndWrite(System.IAsyncResult)
extern void RequestStream_EndWrite_m390E25600DA0661FF308E11D0E381FC0BBE94209 (void);
// 0x00000729 System.Void System.Net.ResponseStream::.ctor(System.IO.Stream,System.Net.HttpListenerResponse,System.Boolean)
extern void ResponseStream__ctor_mAFF4A2172A39DF0068BF11AF2390A060319D76F8 (void);
// 0x0000072A System.Boolean System.Net.ResponseStream::get_CanRead()
extern void ResponseStream_get_CanRead_m9D9F9E34C01491124441AE0DB15EC364AB4239EF (void);
// 0x0000072B System.Boolean System.Net.ResponseStream::get_CanSeek()
extern void ResponseStream_get_CanSeek_mEA5E20F91EF981676080D94EFB0F1527A0D383D0 (void);
// 0x0000072C System.Boolean System.Net.ResponseStream::get_CanWrite()
extern void ResponseStream_get_CanWrite_m1CA988F132FB0ACAA82A5F0D38DF9F3DA9E94203 (void);
// 0x0000072D System.Int64 System.Net.ResponseStream::get_Length()
extern void ResponseStream_get_Length_m0A6B96CF12EF3ABDBC1A9179D5A3E2E57A100387 (void);
// 0x0000072E System.Int64 System.Net.ResponseStream::get_Position()
extern void ResponseStream_get_Position_m684A9CC1D14D52FACD8A46B49DC1DC80891C0476 (void);
// 0x0000072F System.Void System.Net.ResponseStream::set_Position(System.Int64)
extern void ResponseStream_set_Position_m9CE3868FFDF13E23BB4BA8076A4BA52022AA9BDC (void);
// 0x00000730 System.Void System.Net.ResponseStream::Close()
extern void ResponseStream_Close_mF68760CB56FF4EA4A09925C002DD6A13DDAF6512 (void);
// 0x00000731 System.IO.MemoryStream System.Net.ResponseStream::GetHeaders(System.Boolean)
extern void ResponseStream_GetHeaders_m6E864FA81F8D6AB2DC6549EC411B3ECB79AE5E6A (void);
// 0x00000732 System.Void System.Net.ResponseStream::Flush()
extern void ResponseStream_Flush_m2392922E717821AE222DF0158A900C349F9DAFB3 (void);
// 0x00000733 System.Byte[] System.Net.ResponseStream::GetChunkSizeBytes(System.Int32,System.Boolean)
extern void ResponseStream_GetChunkSizeBytes_m95DA9A4823789C2538080E440343D2D9190B7A13 (void);
// 0x00000734 System.Void System.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern void ResponseStream_InternalWrite_mCF6D9641906703FBEEBFA2D087903089555DEAB9 (void);
// 0x00000735 System.Void System.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern void ResponseStream_Write_m9E43D95A2A7102BC29773D390A50CC950CA62E9A (void);
// 0x00000736 System.IAsyncResult System.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ResponseStream_BeginWrite_m51AD3DFB657F82FAF1981E5433B5740EDAC1D9C4 (void);
// 0x00000737 System.Void System.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern void ResponseStream_EndWrite_m303729170A8235CF049994EB4CB57A9919FF57C0 (void);
// 0x00000738 System.Int32 System.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern void ResponseStream_Read_m1F5B4ECC41231E2FD90B685824613F1CFA4E2B06 (void);
// 0x00000739 System.IAsyncResult System.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void ResponseStream_BeginRead_m04740FAAD574339F4575D4D663370527394CE6AD (void);
// 0x0000073A System.Int32 System.Net.ResponseStream::EndRead(System.IAsyncResult)
extern void ResponseStream_EndRead_mA77EA9FF6E1B15E736FE17E6778ED26ADAAA27AF (void);
// 0x0000073B System.Int64 System.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void ResponseStream_Seek_mE257A659671903F4ACB52BCB21FC7431817028FC (void);
// 0x0000073C System.Void System.Net.ResponseStream::SetLength(System.Int64)
extern void ResponseStream_SetLength_m534BB0958AFB203D407F2DD8182EAFD905A9BF46 (void);
// 0x0000073D System.Void System.Net.ResponseStream::.cctor()
extern void ResponseStream__cctor_mA2E2C0D564ACECC92E3D3F9A35C63303FB024BF1 (void);
// 0x0000073E System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern void ServicePoint__ctor_m788957B0CF9F256F581975F6ACDA0DB122D2BE85 (void);
// 0x0000073F System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern void ServicePoint_set_Expect100Continue_m9F795AEF8CCA79C80CDD27F7EA7AD01DAD92618B (void);
// 0x00000740 System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern void ServicePoint_set_UseNagleAlgorithm_mA40D127E6B6DDB7FE8EBDE9A075FF0FF96CAE3FB (void);
// 0x00000741 System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern void ServicePoint_set_SendContinue_m92320EA69F94AE266D2C8797E5DCEA965DF5C8ED (void);
// 0x00000742 System.Void System.Net.ServicePoint::SetTcpKeepAlive(System.Boolean,System.Int32,System.Int32)
extern void ServicePoint_SetTcpKeepAlive_mBA9E8F9615C7BAA38E396F21B73549BE72AFB165 (void);
// 0x00000743 System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern void ServicePoint_set_UsesProxy_m81B24DCBB2CDB67877B1631AD53EA4925B2D77D2 (void);
// 0x00000744 System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern void ServicePoint_set_UseConnect_m63B28421D36EA6064A66588382A7381C9318CAA2 (void);
// 0x00000745 System.Void System.Net.ServicePoint::UpdateServerCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern void ServicePoint_UpdateServerCertificate_m4D130D9346CC9D940FE6CB00B40FB9B976853F01 (void);
// 0x00000746 System.Void System.Net.ServicePointManager::.cctor()
extern void ServicePointManager__cctor_m5E74472D2F21CBE2808E62160416C0F572306498 (void);
// 0x00000747 System.Net.ICertificatePolicy System.Net.ServicePointManager::GetLegacyCertificatePolicy()
extern void ServicePointManager_GetLegacyCertificatePolicy_m91F5A99F923B7085226C21F50BD30C1BC056EC98 (void);
// 0x00000748 System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern void ServicePointManager_get_SecurityProtocol_m4A583697C87EDA716E3512FB151B3916B770C667 (void);
// 0x00000749 System.Net.ServerCertValidationCallback System.Net.ServicePointManager::get_ServerCertValidationCallback()
extern void ServicePointManager_get_ServerCertValidationCallback_mD060FAFC9DC69DA28963397C5C61BED8343C0381 (void);
// 0x0000074A System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern void ServicePointManager_FindServicePoint_m9941E847AA8745D9CEC1CCB2559BD0348B3B58BF (void);
// 0x0000074B System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Uri,System.Boolean)
extern void SPKey__ctor_mEFB0271B87BA8145BF5ABFBFC580444AC87E8378 (void);
// 0x0000074C System.Boolean System.Net.ServicePointManager/SPKey::get_UsesProxy()
extern void SPKey_get_UsesProxy_m43005CE469081EA1C0EBCDCEF7047817882A13EE (void);
// 0x0000074D System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern void SPKey_GetHashCode_m4686BFC3EE7C5322B912BCC739EA3C2AB33D8622 (void);
// 0x0000074E System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern void SPKey_Equals_mF29C836C97373F9F739EE977115DB8F521921CFB (void);
// 0x0000074F System.Int32 System.Net.Sockets.SocketException::WSAGetLastError_internal()
extern void SocketException_WSAGetLastError_internal_m18F05CF8D9CE2435225A4215ED757D8D98716FC3 (void);
// 0x00000750 System.Void System.Net.Sockets.SocketException::.ctor()
extern void SocketException__ctor_mB16B95B2752EAD626C88A5230C1A8FEB7CF632CA (void);
// 0x00000751 System.Void System.Net.Sockets.SocketException::.ctor(System.Int32,System.String)
extern void SocketException__ctor_m68F7126C5B5AD6C6E1EF8A06DE8F5068D6A46002 (void);
// 0x00000752 System.Void System.Net.Sockets.SocketException::.ctor(System.Int32)
extern void SocketException__ctor_m1853BFE92CDFB7A46B2AD59841A3B1DB95244533 (void);
// 0x00000753 System.Void System.Net.Sockets.SocketException::.ctor(System.Net.Sockets.SocketError)
extern void SocketException__ctor_m2687C4EFA4D012280C5D19B89D8D01F97B6A2F1A (void);
// 0x00000754 System.Void System.Net.Sockets.SocketException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void SocketException__ctor_m4C36461DF98089890FBF01908A4AAD301CABE071 (void);
// 0x00000755 System.String System.Net.Sockets.SocketException::get_Message()
extern void SocketException_get_Message_m50B9DF4BB6F3B20F650E2F965B3DD654C8970378 (void);
// 0x00000756 System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern void SocketException_get_SocketErrorCode_m2ADCFE3E77E69B2C54930319F2B72BABCCB8A824 (void);
// 0x00000757 System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
extern void LingerOption__ctor_m3DF407AEF218AA4C7291FF92543BE0BAD40B760A (void);
// 0x00000758 System.Void System.Net.Sockets.LingerOption::set_Enabled(System.Boolean)
extern void LingerOption_set_Enabled_m698CECD028CDD6D6E7CC82C12D5A0B7A291A74B1 (void);
// 0x00000759 System.Void System.Net.Sockets.LingerOption::set_LingerTime(System.Int32)
extern void LingerOption_set_LingerTime_m366DDFE3598E938C9EA7C288E306682E64D44755 (void);
// 0x0000075A System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern void NetworkStream__ctor_m9629E0E9BD6011BA4E7E923B71410EC3A611FE83 (void);
// 0x0000075B System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern void NetworkStream_get_CanRead_mBF98E4498C6F7C76D911F675962F544DD6336BCF (void);
// 0x0000075C System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern void NetworkStream_get_CanSeek_m6D65109C6D751B848B97C220FC02B75A4B833A14 (void);
// 0x0000075D System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern void NetworkStream_get_CanWrite_mDA3F37747199641E18F088E19FDE4E05BD45B4A2 (void);
// 0x0000075E System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern void NetworkStream_get_Length_m6CF8079769A034BEE882C1E02FCA16F67F80DC11 (void);
// 0x0000075F System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern void NetworkStream_get_Position_mB8AF2E84720E0D5FDA49C24673667566316C167F (void);
// 0x00000760 System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern void NetworkStream_set_Position_m07B5B94010D39A5EBBE763C916F5A344DD99DAB4 (void);
// 0x00000761 System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void NetworkStream_Seek_m206C93B5C10E443853C7DF8C0D094328AEF9F94B (void);
// 0x00000762 System.Void System.Net.Sockets.NetworkStream::InitNetworkStream(System.Net.Sockets.Socket,System.IO.FileAccess)
extern void NetworkStream_InitNetworkStream_m4749E17D45A2B9F3452ED76D673C59B6CF09E542 (void);
// 0x00000763 System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Read_mF5137678893C1868A0B56475E63493D349A17A5E (void);
// 0x00000764 System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern void NetworkStream_Write_m2CF72A308913D3CB3EA37F5A3493FDA0A51FE910 (void);
// 0x00000765 System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern void NetworkStream_Dispose_mC4F2E85F8F098254D60ED053F5D3E45CF7B2B4E0 (void);
// 0x00000766 System.Void System.Net.Sockets.NetworkStream::Finalize()
extern void NetworkStream_Finalize_m97B1A123AB9C7EF73CB91684189632C4E86BD422 (void);
// 0x00000767 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginRead_mB4803C638A3A3265669A663DBDA859DC5A5ED009 (void);
// 0x00000768 System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern void NetworkStream_EndRead_mAFBB41B6DE1BD74C47DB890C5BC3617172F9F14E (void);
// 0x00000769 System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void NetworkStream_BeginWrite_mCC5FAC2886E330DE2E1DB4B7D4509F6F110396D7 (void);
// 0x0000076A System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern void NetworkStream_EndWrite_m9A30266EFA0648D3E2E22F6097271FFF8C00E501 (void);
// 0x0000076B System.Void System.Net.Sockets.NetworkStream::Flush()
extern void NetworkStream_Flush_mD24343AA0BED24CC098BA9BFF2F118CC0865DB40 (void);
// 0x0000076C System.Threading.Tasks.Task System.Net.Sockets.NetworkStream::FlushAsync(System.Threading.CancellationToken)
extern void NetworkStream_FlushAsync_m4E4DE1531B963961E9FAED684DC08375EA0FE2DB (void);
// 0x0000076D System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern void NetworkStream_SetLength_mA3CA693C34E7EF187E55731B089D4A38319F2CB0 (void);
// 0x0000076E System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (void);
// 0x0000076F System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern void Socket_get_SupportsIPv4_m2D8B6C4B1E1359F09B4C8C422B2AF38A39C41F81 (void);
// 0x00000770 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern void Socket_get_OSSupportsIPv4_m0A5CF1017F08C741FE899C3D457A1C678EAFD599 (void);
// 0x00000771 System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern void Socket_get_SupportsIPv6_m76AE5D0EA624C0AEB6EFAE0E56B3956C9A734FA4 (void);
// 0x00000772 System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern void Socket_get_OSSupportsIPv6_m923EC612566AEA217F71397FD8BED111AC951DED (void);
// 0x00000773 System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern void Socket_get_Handle_mA1965009F9BACF2047AB982354B00E1C0A95D4DE (void);
// 0x00000774 System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern void Socket_get_AddressFamily_m33B7B2581828A024C81CE52DF4287A2447A54D6F (void);
// 0x00000775 System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern void Socket_get_SocketType_m61AE4997710B0CE75832B42919A2892F00740E37 (void);
// 0x00000776 System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern void Socket_get_ProtocolType_mE9C131BE9AEA271B35821FC80C8CB62414E1546E (void);
// 0x00000777 System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern void Socket_set_DontFragment_m2683AAA1C87A0E2CCC426EFA4D8BF5790AA2D136 (void);
// 0x00000778 System.Boolean System.Net.Sockets.Socket::get_DualMode()
extern void Socket_get_DualMode_m6FB7069091397FB35DE520DADBC6F28A45E6B68C (void);
// 0x00000779 System.Void System.Net.Sockets.Socket::set_DualMode(System.Boolean)
extern void Socket_set_DualMode_mDC9084953B95EBF0B75B69D0E37F7E8B43612C9A (void);
// 0x0000077A System.Boolean System.Net.Sockets.Socket::get_IsDualMode()
extern void Socket_get_IsDualMode_m5F32679545518176E4AFE66901AF86DFA6499655 (void);
// 0x0000077B System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Send_m1ED8F737070D66D68B93B64E09ED9C726AA75638 (void);
// 0x0000077C System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Send_mBBAB318D0BB5BF0B8FA4C9192EABCC4B179429EE (void);
// 0x0000077D System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_mFC7C84096D49297C58D498DB0DF7496967FC9759 (void);
// 0x0000077E System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern void Socket_Receive_m69B3F392972DFA666F0C869F2349F8486DE472D6 (void);
// 0x0000077F System.Void System.Net.Sockets.Socket::SetIPProtectionLevel(System.Net.Sockets.IPProtectionLevel)
extern void Socket_SetIPProtectionLevel_m01CE85FD88045EA923BB9F8506C467883B5C7F52 (void);
// 0x00000780 System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_m05E491600486AAC8EFAF5F4EB0C24B13210D640E (void);
// 0x00000781 System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern void Socket_EndSend_mD941F4E5F502FC0EDCA70BB7CB637217320709EC (void);
// 0x00000782 System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30 (void);
// 0x00000783 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern void Socket_EndReceive_mF4C73ED2C78731706B7891AB94B7D4EF084476F0 (void);
// 0x00000784 System.Object System.Net.Sockets.Socket::get_InternalSyncObject()
extern void Socket_get_InternalSyncObject_m7325FA3D411ED7E590F9E026CE2859CB654B614F (void);
// 0x00000785 System.Boolean System.Net.Sockets.Socket::get_CleanedUp()
extern void Socket_get_CleanedUp_mFEF17F0AD881817F7A8A0B584E0077E968373684 (void);
// 0x00000786 System.Void System.Net.Sockets.Socket::InitializeSockets()
extern void Socket_InitializeSockets_mB1CBCEFBB0AC0E6848D38A0EEA33EACDF6A9EC7F (void);
// 0x00000787 System.Void System.Net.Sockets.Socket::Dispose()
extern void Socket_Dispose_m34C079AE162CF588FB9FFA9F76B010DF337DE362 (void);
// 0x00000788 System.Void System.Net.Sockets.Socket::Finalize()
extern void Socket_Finalize_mF2575EF924283A62F9064992816393410D7C880C (void);
// 0x00000789 System.Void System.Net.Sockets.Socket::InternalShutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_InternalShutdown_mE1DDB563CF7D94D792F6C2F32FECEBC8270D4E81 (void);
// 0x0000078A System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Net.Sockets.SafeSocketHandle)
extern void Socket__ctor_m6F08E0C60ECB2DC6DDD921D729D7BD7AEB6A633F (void);
// 0x0000078B System.Void System.Net.Sockets.Socket::SocketDefaults()
extern void Socket_SocketDefaults_m3AE1F652A9ED2E599A57BFDF82EB39C4EF32DB32 (void);
// 0x0000078C System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern void Socket_Socket_internal_m6EC2025D3A1C29EB966E6FD091C28ABEAB080E21 (void);
// 0x0000078D System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern void Socket_get_LocalEndPoint_m5BA68FA5F390F1F8913FA78F919FD9364B669E9C (void);
// 0x0000078E System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_LocalEndPoint_internal_m3042AF8FDDF9D3409FBFBCD332CAC9DC84D43319 (void);
// 0x0000078F System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_LocalEndPoint_internal_mF6DCD0F8A684DC0ABBD07C1CF36BA9741B39410F (void);
// 0x00000790 System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern void Socket_get_Blocking_mBEF4541F893F4ECE9354245BF7E6D8C5118206FF (void);
// 0x00000791 System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern void Socket_set_Blocking_mB447A573F44452B55F5D6B6105FD1C55865E0EDC (void);
// 0x00000792 System.Void System.Net.Sockets.Socket::Blocking_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m13B3D6C3A383411BD26F8EED6BCA4C6517E49BAD (void);
// 0x00000793 System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Blocking_internal_m4F1F07A40A6FD3CFECC7F7F836B52337C61833A9 (void);
// 0x00000794 System.Boolean System.Net.Sockets.Socket::get_Connected()
extern void Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE (void);
// 0x00000795 System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern void Socket_set_NoDelay_mB51929BB6C13E4C051C59B62A9C5CBEA3A129D76 (void);
// 0x00000796 System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern void Socket_Poll_internal_m0EB7285E1AE8CC42F200FDE13C8991EE4659D276 (void);
// 0x00000797 System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern void Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7 (void);
// 0x00000798 System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern void Socket_Accept_mC12CAE783F87CD63E6FF83D55F1973C2E5E7BDEC (void);
// 0x00000799 System.Boolean System.Net.Sockets.Socket::AcceptAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern void Socket_AcceptAsync_mA1AFDA952C7982309B9A1FDB18FF69DDC75A3FB9 (void);
// 0x0000079A System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern void Socket_EndAccept_mABD175ECBE095DE93D623259610B1332911266A1 (void);
// 0x0000079B System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern void Socket_EndAccept_m005E845E347FEA71E41BDB1AFE9E5A39BC393D04 (void);
// 0x0000079C System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::Accept_internal(System.Net.Sockets.SafeSocketHandle,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_mE1FADFF816972DDE8AD35519E92D69B4F9D9109D (void);
// 0x0000079D System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern void Socket_Accept_internal_m52A4190380D5DFBB0AD1F4AB6D2F0A49850FD3B9 (void);
// 0x0000079E System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern void Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30 (void);
// 0x0000079F System.Void System.Net.Sockets.Socket::Bind_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_m3E7154040E7446689883A441D55456E7562F2E47 (void);
// 0x000007A0 System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern void Socket_Bind_internal_mE7C0A0306E3AEC46ED06CAE920C799B7B92AC8E9 (void);
// 0x000007A1 System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern void Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540 (void);
// 0x000007A2 System.Void System.Net.Sockets.Socket::Listen_internal(System.Net.Sockets.SafeSocketHandle,System.Int32,System.Int32&)
extern void Socket_Listen_internal_mF351F058B339E905D497FE522C2E74080A444D10 (void);
// 0x000007A3 System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern void Socket_Listen_internal_m9B7599632C30804400D22A556A758D4A0B02F145 (void);
// 0x000007A4 System.Void System.Net.Sockets.Socket::BeginMConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginMConnect_m97B0959875F9DD732C1B90D08E00018D383AFFE4 (void);
// 0x000007A5 System.Void System.Net.Sockets.Socket::BeginSConnect(System.Net.Sockets.SocketAsyncResult)
extern void Socket_BeginSConnect_m91344C94E64D4215A8CD2F6FD63067DBF32D97F7 (void);
// 0x000007A6 System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern void Socket_EndConnect_m0CFDCA9629EAF8E764A7EB9D61C9DDA83988209F (void);
// 0x000007A7 System.Void System.Net.Sockets.Socket::Connect_internal(System.Net.Sockets.SafeSocketHandle,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m907A5990A8F440BA59CE041CF7881FF9C2D7E8AE (void);
// 0x000007A8 System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern void Socket_Connect_internal_m0CF19A6266F179B65384D3FBB8B0D0792E055A97 (void);
// 0x000007A9 System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern void Socket_Disconnect_mBE602342DA1C63767110C02BEFF1C45E45037619 (void);
// 0x000007AA System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern void Socket_EndDisconnect_m3CA2C23A595DAB49DB71A18E24E98BE63ABB09B9 (void);
// 0x000007AB System.Void System.Net.Sockets.Socket::Disconnect_internal(System.Net.Sockets.SafeSocketHandle,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m3CE5479D4ADE00354F21C2B6B40B7DE4C30F8068 (void);
// 0x000007AC System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern void Socket_Disconnect_internal_m97B2794B8CF301AE28B1151EDF0CE8F810636D0E (void);
// 0x000007AD System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mC87CCEF55EF312730B08629F4EA24F4D4311FFC3 (void);
// 0x000007AE System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Receive_mA822C50F868C16CA33ED8BEAC5AE2F7D0018F345 (void);
// 0x000007AF System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginReceive_mAB09C0EF50CCA20B368771E0FB56F788A10C5C21 (void);
// 0x000007B0 System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndReceive_m76672177BFAD926BA214D664EEE7827AFEA0693B (void);
// 0x000007B1 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m55FA162A25E221777277E755B9A3B4D8BCB1CDB0 (void);
// 0x000007B2 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mC2987A1339F02BD493366DF0C3FD9A63BF9F0268 (void);
// 0x000007B3 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_m0DBCB62396D083723FA9E43B847278DE07591E59 (void);
// 0x000007B4 System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Receive_internal_mED8291F42882678A0E7D65A7697E890FCCDA9A46 (void);
// 0x000007B5 System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Net.Sockets.SocketError&)
extern void Socket_ReceiveFrom_m743C33ED62910EE4B6850400AA0FE7D44337C112 (void);
// 0x000007B6 System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern void Socket_EndReceiveFrom_m534A60EABD1A1FCE593901355FC7E840C94B1AA4 (void);
// 0x000007B7 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_mEA5003975D91AB2F18A6CF7E6889FF0D3D139B31 (void);
// 0x000007B8 System.Int32 System.Net.Sockets.Socket::ReceiveFrom_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&,System.Boolean)
extern void Socket_ReceiveFrom_internal_m43D3E1FA721210154B38D2EF7F2135625C61A613 (void);
// 0x000007B9 System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_m4652C4C32F15F5B18A7AF28086B87C074844AEA4 (void);
// 0x000007BA System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern void Socket_Send_mFBF7C653CB5BC6BA91F4415378F34F13897259DE (void);
// 0x000007BB System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern void Socket_BeginSend_mA6C244A07735EEA6B4DA335545237F0FF42F8A7C (void);
// 0x000007BC System.Void System.Net.Sockets.Socket::BeginSendCallback(System.Net.Sockets.SocketAsyncResult,System.Int32)
extern void Socket_BeginSendCallback_m2E4DF0CAEE665252159EE10E8EFA46463980F5CF (void);
// 0x000007BD System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern void Socket_EndSend_m58F48E67A449034B31B52F7EF2F46856FBCE0310 (void);
// 0x000007BE System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m23758BA709E17D55050E23A679DC8149B2944C1A (void);
// 0x000007BF System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mF991C3643BB5E358474652659680232787B12927 (void);
// 0x000007C0 System.Int32 System.Net.Sockets.Socket::Send_internal(System.Net.Sockets.SafeSocketHandle,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_m1D6B90528CD689D0E857CAE776E573E178362D37 (void);
// 0x000007C1 System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte*,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&,System.Boolean)
extern void Socket_Send_internal_mC7309CA15FA175E000DCF98711950B46D1250D8C (void);
// 0x000007C2 System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern void Socket_EndSendTo_m8A51FA7E8F6D65435DA47F1DD7D74C9695884CF1 (void);
// 0x000007C3 System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern void Socket_GetSocketOption_m0810701BA5C30F393D05386BA150A87CA905710D (void);
// 0x000007C4 System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_mB80B47214B569FD08FD3D83DC4AD23F30EF0E1F5 (void);
// 0x000007C5 System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern void Socket_GetSocketOption_obj_internal_m7C531C9B7D40C1730EBEDF12EA12559B3AC6A95D (void);
// 0x000007C6 System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern void Socket_SetSocketOption_mDD4791B69C63D5156C5F733593D5888EDF7A7C93 (void);
// 0x000007C7 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_m4CD6A4EB2E6B43A654E7393C15E6339DA717699A (void);
// 0x000007C8 System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern void Socket_SetSocketOption_internal_m79AFC3FAB34B01E7749886DF7D3DFF10223953AF (void);
// 0x000007C9 System.Void System.Net.Sockets.Socket::Close()
extern void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (void);
// 0x000007CA System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern void Socket_Close_m77322C5F6C16BCE94498430C920EC1EBCF8BC8A2 (void);
// 0x000007CB System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern void Socket_Close_internal_mDC62C0CC0402756EC2AF208253EA987D38C1C97C (void);
// 0x000007CC System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
extern void Socket_Shutdown_m196EA3E73DC67F9E14D6A129945D862131D6AABB (void);
// 0x000007CD System.Void System.Net.Sockets.Socket::Shutdown_internal(System.Net.Sockets.SafeSocketHandle,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_mDB5B705BAEE0962DF070CC97E4569277C1BAB3C7 (void);
// 0x000007CE System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern void Socket_Shutdown_internal_mEBB0DF91C761500931F2A3D7CE3103ECE0553060 (void);
// 0x000007CF System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern void Socket_Dispose_m24CC84D16DA94C78C460A3E2EC7068273E40B710 (void);
// 0x000007D0 System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern void Socket_Linger_m8BC490F462914AEE570BB8C5883DF5B70967D823 (void);
// 0x000007D1 System.Void System.Net.Sockets.Socket::ThrowIfDisposedAndClosed()
extern void Socket_ThrowIfDisposedAndClosed_mCDA9C2603B4166665F14BABFA4FB3423508DEAA7 (void);
// 0x000007D2 System.Void System.Net.Sockets.Socket::ThrowIfBufferNull(System.Byte[])
extern void Socket_ThrowIfBufferNull_m038FD1656C891AD4AF2883AFBA1084CF95286252 (void);
// 0x000007D3 System.Void System.Net.Sockets.Socket::ThrowIfBufferOutOfRange(System.Byte[],System.Int32,System.Int32)
extern void Socket_ThrowIfBufferOutOfRange_m06C012616B2650E2344CFADF8D7DEDE3A1F6272F (void);
// 0x000007D4 System.Void System.Net.Sockets.Socket::ThrowIfUdp()
extern void Socket_ThrowIfUdp_mCC07B58F7A539B485A355A28D36174F6F1CC3FEA (void);
// 0x000007D5 System.Net.Sockets.SocketAsyncResult System.Net.Sockets.Socket::ValidateEndIAsyncResult(System.IAsyncResult,System.String,System.String)
extern void Socket_ValidateEndIAsyncResult_m509940324A570251B33301A59DC3C01B5DAB944A (void);
// 0x000007D6 System.Void System.Net.Sockets.Socket::QueueIOSelectorJob(System.Threading.SemaphoreSlim,System.IntPtr,System.IOSelectorJob)
extern void Socket_QueueIOSelectorJob_m5BF661B575E897D2F8A03CB1A189674EA977EFB5 (void);
// 0x000007D7 System.Void System.Net.Sockets.Socket::InitSocketAsyncEventArgs(System.Net.Sockets.SocketAsyncEventArgs,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void Socket_InitSocketAsyncEventArgs_m5D1AF2CB3DAADF1216305B4989DA2909F5D81CE5 (void);
// 0x000007D8 System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.Socket::SocketOperationToSocketAsyncOperation(System.Net.Sockets.SocketOperation)
extern void Socket_SocketOperationToSocketAsyncOperation_m245531592E8980B0CCD21BDDABE0645163837B54 (void);
// 0x000007D9 System.Net.IPEndPoint System.Net.Sockets.Socket::RemapIPEndPoint(System.Net.IPEndPoint)
extern void Socket_RemapIPEndPoint_m3EF595CE2E7BCDF1CBFEA02E101908877FF90706 (void);
// 0x000007DA System.Void System.Net.Sockets.Socket::cancel_blocking_socket_operation(System.Threading.Thread)
extern void Socket_cancel_blocking_socket_operation_m14366BBE65240C8833ED22AE8DE299E771FA3058 (void);
// 0x000007DB System.Int32 System.Net.Sockets.Socket::get_FamilyHint()
extern void Socket_get_FamilyHint_m9C8E3739473BE1AF6E8FDD6FD3579BE5A9675224 (void);
// 0x000007DC System.Boolean System.Net.Sockets.Socket::IsProtocolSupported_internal(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_internal_m5C586C81E1F7B545669E57AE413AF07A6400B907 (void);
// 0x000007DD System.Boolean System.Net.Sockets.Socket::IsProtocolSupported(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern void Socket_IsProtocolSupported_mD0EC79AB174CC92B01EEC866E6837CCF1B330A37 (void);
// 0x000007DE System.Void System.Net.Sockets.Socket::.cctor()
extern void Socket__cctor_mC1130CB5B4FF386DBF641F72A301C65142EF6AD2 (void);
// 0x000007DF System.Void System.Net.Sockets.Socket/<>c::.cctor()
extern void U3CU3Ec__cctor_m189E5660A587DF9A7CA7B87434E92DB20CFE6DD5 (void);
// 0x000007E0 System.Void System.Net.Sockets.Socket/<>c::.ctor()
extern void U3CU3Ec__ctor_m421B31AEC17C6130D0F77B8823F05048643B8A2C (void);
// 0x000007E1 System.Void System.Net.Sockets.Socket/<>c::<BeginSend>b__241_0(System.IOAsyncResult)
extern void U3CU3Ec_U3CBeginSendU3Eb__241_0_mED3657F5D9278E1CF28553337FDB5BB377EDFCF4 (void);
// 0x000007E2 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_0(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_0_mA1E4E9EBD8C59F3452F3C291A116338BD04123B3 (void);
// 0x000007E3 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_1(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_1_mFE31CFBA6F2BE4A47926572EE46D8368D4BB6D3D (void);
// 0x000007E4 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_2(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_2_mEEA9AFDA35A729986A198CCC9785205946F10425 (void);
// 0x000007E5 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_3(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_3_m6DC581C3C4C027974F71C41B8E3AD0E9C64405BA (void);
// 0x000007E6 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_4(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_4_m8D8DA2E8BC6EAD867C7FB95D126E3C0B8CBC2630 (void);
// 0x000007E7 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_5(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_5_m124EFFED3D1E44E4C1A5F5A1E586AFBEC6EB42D1 (void);
// 0x000007E8 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_6(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_6_mC8539B0D721812B995C06217EC22C578EF76E01A (void);
// 0x000007E9 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_7(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_7_mB19175AFC1F2BB2A749184A61DD84BBB76135E45 (void);
// 0x000007EA System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_8(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_8_mA9F0B14FEA60E5CA4D29CDF2F8BBABE4CEDEDB5F (void);
// 0x000007EB System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_9(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_9_mBA3DCDDE64656E216E23EC585A364C692370765E (void);
// 0x000007EC System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_10(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_10_m7AB7D356C3FD8B2B8BF0C280B14675A3D597501F (void);
// 0x000007ED System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_11(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_11_m54D0A1A002B2CA233DAA2E13818D0B514C750156 (void);
// 0x000007EE System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_12(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_12_m6A2545287216688A2636B385C1E550CA4C6E12F7 (void);
// 0x000007EF System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_13(System.IOAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_13_m557F5E3E30E4AAF3D185278BAB5EEC27AA33C657 (void);
// 0x000007F0 System.Void System.Net.Sockets.Socket/<>c::<.cctor>b__309_14(System.IAsyncResult)
extern void U3CU3Ec_U3C_cctorU3Eb__309_14_m2E7D16D51C6DFA7706CFBC0A906A81BA94CA2932 (void);
// 0x000007F1 System.Void System.Net.Sockets.Socket/<>c__DisplayClass242_0::.ctor()
extern void U3CU3Ec__DisplayClass242_0__ctor_m37038B01FD9E383353E2D3618C0E6C1CA443298F (void);
// 0x000007F2 System.Void System.Net.Sockets.Socket/<>c__DisplayClass242_0::<BeginSendCallback>b__0(System.IOAsyncResult)
extern void U3CU3Ec__DisplayClass242_0_U3CBeginSendCallbackU3Eb__0_m2D1B9158103E534CC52214422CE5B043F4CEE08E (void);
// 0x000007F3 System.Void System.Net.Sockets.Socket/<>c__DisplayClass298_0::.ctor()
extern void U3CU3Ec__DisplayClass298_0__ctor_m24532A068CEE2B919D0FD16BC70121982187EB94 (void);
// 0x000007F4 System.Void System.Net.Sockets.Socket/<>c__DisplayClass298_0::<QueueIOSelectorJob>b__0(System.Threading.Tasks.Task)
extern void U3CU3Ec__DisplayClass298_0_U3CQueueIOSelectorJobU3Eb__0_mF53A22B944AA6C92B918DF06ABFAF923D53824F9 (void);
// 0x000007F5 System.Void System.Net.Sockets.SafeSocketHandle::.ctor(System.IntPtr,System.Boolean)
extern void SafeSocketHandle__ctor_m7A417F105464C193628218AF4E93B797E8888480 (void);
// 0x000007F6 System.Boolean System.Net.Sockets.SafeSocketHandle::ReleaseHandle()
extern void SafeSocketHandle_ReleaseHandle_m2DF10268C0814FED4266C031FD32D58B31CA5409 (void);
// 0x000007F7 System.Void System.Net.Sockets.SafeSocketHandle::RegisterForBlockingSyscall()
extern void SafeSocketHandle_RegisterForBlockingSyscall_m648E07077BFE30CFD66FEAAFD0AE595F8BD67E60 (void);
// 0x000007F8 System.Void System.Net.Sockets.SafeSocketHandle::UnRegisterForBlockingSyscall()
extern void SafeSocketHandle_UnRegisterForBlockingSyscall_m2F2BD3A6CFE6CEF5587ED4D8EAE441CBC0E945AB (void);
// 0x000007F9 System.Void System.Net.Sockets.SafeSocketHandle::.cctor()
extern void SafeSocketHandle__cctor_m53EFD60FADB351C93A9ECAEF0F7F41A6C5D79A84 (void);
// 0x000007FA System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern void SocketAsyncEventArgs_get_AcceptSocket_m3BD8876BC4B1859E1E7956AD9B3E0227B9E77F75 (void);
// 0x000007FB System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern void SocketAsyncEventArgs_set_AcceptSocket_m7EEFF83859DD66A54E98A34FB7000DD670F1B1C1 (void);
// 0x000007FC System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
extern void SocketAsyncEventArgs_get_BufferList_m36AD40ABBD5550DC719DE1F6F97AE2F842E9DF88 (void);
// 0x000007FD System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern void SocketAsyncEventArgs_set_BytesTransferred_mFEA9222385B83E3CAD5546E53F1C3F81C5EEA4AE (void);
// 0x000007FE System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Count()
extern void SocketAsyncEventArgs_get_Count_mD310020ADC070DDAFBFE894CC64D0D4FF40DF82F (void);
// 0x000007FF System.Void System.Net.Sockets.SocketAsyncEventArgs::set_LastOperation(System.Net.Sockets.SocketAsyncOperation)
extern void SocketAsyncEventArgs_set_LastOperation_m21AA999097C6C90025DCE4C5D59AE10A03D99602 (void);
// 0x00000800 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SendPacketsSendSize(System.Int32)
extern void SocketAsyncEventArgs_set_SendPacketsSendSize_mA62CA1722F6D35FC87703464B23BD389DDCB3F11 (void);
// 0x00000801 System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
extern void SocketAsyncEventArgs_get_SocketError_mE67DE393630123A96C61F8D93C449965D6D98675 (void);
// 0x00000802 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern void SocketAsyncEventArgs_set_SocketError_mFCDAA84BC41D0B28B2517AFD1DCBADCFAAE29499 (void);
// 0x00000803 System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
extern void SocketAsyncEventArgs_get_UserToken_mF5C6E94F6889138CB1C7A72BC3EA1FD5E3FAB200 (void);
// 0x00000804 System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
extern void SocketAsyncEventArgs_set_UserToken_mD6DB38B4BB5D1D5E89854CB95F9722457EC1290E (void);
// 0x00000805 System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern void SocketAsyncEventArgs_add_Completed_m748D6284717FC97F9AD5F7274668BCDDB00F0DDD (void);
// 0x00000806 System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern void SocketAsyncEventArgs_remove_Completed_mF88367E7CDB6D58580B034CD0EDC75FC131B53D2 (void);
// 0x00000807 System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
extern void SocketAsyncEventArgs__ctor_mEA838D3983A5131BD7324196A90D92357EE0B81D (void);
// 0x00000808 System.Void System.Net.Sockets.SocketAsyncEventArgs::Finalize()
extern void SocketAsyncEventArgs_Finalize_mEC1508C00D7079F51376E9C574D2678722B1402C (void);
// 0x00000809 System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern void SocketAsyncEventArgs_Dispose_m1CD7F7378013D412BAEAAE4E96CC7DBEB54A7168 (void);
// 0x0000080A System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern void SocketAsyncEventArgs_Dispose_m2E653A7ACE155AA1533C72CF1C07EDD2258DB39E (void);
// 0x0000080B System.Void System.Net.Sockets.SocketAsyncEventArgs::SetLastOperation(System.Net.Sockets.SocketAsyncOperation)
extern void SocketAsyncEventArgs_SetLastOperation_m38C9812B6E470E0C19A3895E5F94F267D2D1278C (void);
// 0x0000080C System.Void System.Net.Sockets.SocketAsyncEventArgs::Complete()
extern void SocketAsyncEventArgs_Complete_mA77F4405B5C9CF2AEE3CA78A8E4BDECE9F6B972A (void);
// 0x0000080D System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern void SocketAsyncEventArgs_OnCompleted_m330F7F5F140260C0AFCAC74F160C2EF9BA23AAC8 (void);
// 0x0000080E System.IntPtr System.Net.Sockets.SocketAsyncResult::get_Handle()
extern void SocketAsyncResult_get_Handle_mA1FCAC625E2265493F931EF8C717E50BE7921ABB (void);
// 0x0000080F System.Void System.Net.Sockets.SocketAsyncResult::.ctor()
extern void SocketAsyncResult__ctor_m5E87FAF5B6141B41C7AEFC5D2181DA4B51073C77 (void);
// 0x00000810 System.Void System.Net.Sockets.SocketAsyncResult::Init(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult_Init_m7C6BE5B35B1D15776AEF6F2FF1A28B71998FF658 (void);
// 0x00000811 System.Void System.Net.Sockets.SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.AsyncCallback,System.Object,System.Net.Sockets.SocketOperation)
extern void SocketAsyncResult__ctor_mA600493FFA7C8A3553FA39CBFF18CF8A8F890E0F (void);
// 0x00000812 System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncResult::get_ErrorCode()
extern void SocketAsyncResult_get_ErrorCode_m0888A12E8AE75A62CDC76F139829240215E8B6DE (void);
// 0x00000813 System.Void System.Net.Sockets.SocketAsyncResult::CheckIfThrowDelayedException()
extern void SocketAsyncResult_CheckIfThrowDelayedException_mA857B11642F239B6FE95EC9E57F99E01F114FCAD (void);
// 0x00000814 System.Void System.Net.Sockets.SocketAsyncResult::CompleteDisposed()
extern void SocketAsyncResult_CompleteDisposed_m7D814AACBE449F4F68500B3594EB71E755FCDBE9 (void);
// 0x00000815 System.Void System.Net.Sockets.SocketAsyncResult::Complete()
extern void SocketAsyncResult_Complete_m956632BDCB195816D5BD8F57B6493329C10DCD32 (void);
// 0x00000816 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Boolean)
extern void SocketAsyncResult_Complete_m7D9B9A60DFD7281D5EE7FD6EFE07BA4E9CB07CA1 (void);
// 0x00000817 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Int32)
extern void SocketAsyncResult_Complete_mDEB3A49AC0BAC2FAF31ABA8523371C5B1B813776 (void);
// 0x00000818 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern void SocketAsyncResult_Complete_m16E71358A4FB937FCC3DC080EBB00C4C350DA31C (void);
// 0x00000819 System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Exception)
extern void SocketAsyncResult_Complete_m2319BDC7E4BBE78746850481BBD1711916949DF6 (void);
// 0x0000081A System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern void SocketAsyncResult_Complete_m2644D553368DA3CF95D49473AEA8B656E73463DF (void);
// 0x0000081B System.Void System.Net.Sockets.SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern void SocketAsyncResult_Complete_mC7A67AFEC2C33BD0D7E191EB6AA0658C1A53907A (void);
// 0x0000081C System.Void System.Net.Sockets.SocketAsyncResult/<>c::.cctor()
extern void U3CU3Ec__cctor_m0096D8732373ECAFCCC3553EDDE54F1CB40D6EA2 (void);
// 0x0000081D System.Void System.Net.Sockets.SocketAsyncResult/<>c::.ctor()
extern void U3CU3Ec__ctor_m6E4EE081CCEE6E72C143685C5612BA492B00F1BA (void);
// 0x0000081E System.Void System.Net.Sockets.SocketAsyncResult/<>c::<Complete>b__27_0(System.Object)
extern void U3CU3Ec_U3CCompleteU3Eb__27_0_mBC254448542DAB8EBC47160EB33A36700D1A32E9 (void);
// 0x0000081F System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
extern void AuthenticatedStream__ctor_mFCFA51BD3C5544DC6390CF5094E1C0DBA133C172 (void);
// 0x00000820 System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
extern void AuthenticatedStream_get_InnerStream_mB7DF06B2F011B3F9F301D068438BBD01C24DCDDC (void);
// 0x00000821 System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
extern void AuthenticatedStream_Dispose_m5610A806886C36698AC932D21F5FBDCAE9FA3E14 (void);
// 0x00000822 System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated()
// 0x00000823 System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern void RemoteCertificateValidationCallback__ctor_m830361B1E3107AC75A34E07042B4A2567B331E3F (void);
// 0x00000824 System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern void RemoteCertificateValidationCallback_Invoke_mD2863E7241D3768F16B3F85589623B4397EDF86F (void);
// 0x00000825 System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern void RemoteCertificateValidationCallback_BeginInvoke_m21A4B4335CCCDF893A38C75DD1171A31B466A687 (void);
// 0x00000826 System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern void RemoteCertificateValidationCallback_EndInvoke_mB5C28FA15AC0883EC65DBD8E6FC5610BF91B9140 (void);
// 0x00000827 System.Void System.Net.Security.LocalCertSelectionCallback::.ctor(System.Object,System.IntPtr)
extern void LocalCertSelectionCallback__ctor_mEA7E533B4C8CF46131F4097785E653C9DF1E2A85 (void);
// 0x00000828 System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::Invoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern void LocalCertSelectionCallback_Invoke_m710A68C0A2D13DBB5E8434FC6E0ED75F90E7C176 (void);
// 0x00000829 System.IAsyncResult System.Net.Security.LocalCertSelectionCallback::BeginInvoke(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern void LocalCertSelectionCallback_BeginInvoke_m52E115683F283EFE63006DC899952C6958350285 (void);
// 0x0000082A System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertSelectionCallback::EndInvoke(System.IAsyncResult)
extern void LocalCertSelectionCallback_EndInvoke_mAC5037A64623906D66FB80410DF916D3A47E09C4 (void);
// 0x0000082B Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::get_Impl()
extern void SslStream_get_Impl_m29F58D35745DFC013BFAEFCF3952391234D8BC9A (void);
// 0x0000082C System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream__ctor_mA434A097CD9B052AC8510C8B5BFF9E5E6B541DC9 (void);
// 0x0000082D Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::CreateMonoSslStream(System.IO.Stream,System.Boolean,Mono.Security.Interface.MonoTlsProvider,Mono.Security.Interface.MonoTlsSettings)
extern void SslStream_CreateMonoSslStream_m2DA6B0A589490351B37010F5BCF2DA3D734FF266 (void);
// 0x0000082E System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern void SslStream_AuthenticateAsServer_m18D11C1C45EA1C59C392FCE79CCCE0E7F40B1F96 (void);
// 0x0000082F System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern void SslStream_get_IsAuthenticated_m273C64C4DF6FFD4E9772EF714EFA982D4C0A9D83 (void);
// 0x00000830 System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern void SslStream_get_CanSeek_mD0CB66ABEA39EE6BEAB9BD53ADF03476FEA2E266 (void);
// 0x00000831 System.Boolean System.Net.Security.SslStream::get_CanRead()
extern void SslStream_get_CanRead_m49799854D297DCF71A497F8858B64DDD1C10BF00 (void);
// 0x00000832 System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern void SslStream_get_CanWrite_m25569C1704B5F54A27234D1B9B69647D5018CCEF (void);
// 0x00000833 System.Int64 System.Net.Security.SslStream::get_Length()
extern void SslStream_get_Length_m1A4DBA93F0D140FA33892E0193DDE8C6E4175763 (void);
// 0x00000834 System.Int64 System.Net.Security.SslStream::get_Position()
extern void SslStream_get_Position_mDCFD4EFB697DAFF90BA366ED8519487027E21671 (void);
// 0x00000835 System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern void SslStream_set_Position_m4D2093D31E1557590786FA41197CD585CAC79E3A (void);
// 0x00000836 System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern void SslStream_SetLength_m76EF6CF39E831CF1C3E0DD70598938B46441504C (void);
// 0x00000837 System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void SslStream_Seek_m53AB94845DF9E4A126414BC25E024053D43627D1 (void);
// 0x00000838 System.Threading.Tasks.Task System.Net.Security.SslStream::FlushAsync(System.Threading.CancellationToken)
extern void SslStream_FlushAsync_mAB1051AF0DDB8C2D84D54F526A2436817F88CAB9 (void);
// 0x00000839 System.Void System.Net.Security.SslStream::Flush()
extern void SslStream_Flush_m409B5ED6ACB6B2496DAF6725C6CAAF5D51BEADE3 (void);
// 0x0000083A System.Void System.Net.Security.SslStream::CheckDisposed()
extern void SslStream_CheckDisposed_mFCE61CD9DDFDF97DD850B2EAF0908EFE50008DE4 (void);
// 0x0000083B System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern void SslStream_Dispose_mFDB97E2E26CD194DBCBE47710EE5402B2298B919 (void);
// 0x0000083C System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Read_m4FE23134855CE89200771C5A8851DDDDDF182FF3 (void);
// 0x0000083D System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern void SslStream_Write_m262369AF62D8AA0CCC4EAC5BF3274693AA27B1BC (void);
// 0x0000083E System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginRead_m4D96895D1B0C302EF4D52681FEDA82D1E53E7C3F (void);
// 0x0000083F System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern void SslStream_EndRead_m918E3DCEB2DE563A21B042D7FF530E96EBA8EF51 (void);
// 0x00000840 System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern void SslStream_BeginWrite_mB8CC50460AFEF640D3C36C68938EE921F3E11844 (void);
// 0x00000841 System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern void SslStream_EndWrite_m796ACEAE821536F59642EDC2748B2A5F232953AB (void);
// 0x00000842 System.Boolean System.Net.NetworkInformation.IPGlobalProperties::get_PlatformNeedsLibCWorkaround()
extern void IPGlobalProperties_get_PlatformNeedsLibCWorkaround_mB5BC19873B5F06D8F8EE23856B7736ECB9C7722B (void);
// 0x00000843 System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::GetIPGlobalProperties()
extern void IPGlobalProperties_GetIPGlobalProperties_m9754DEEC16047B231DA6208C8AE6317BB0F3D8CA (void);
// 0x00000844 System.Net.NetworkInformation.IPGlobalProperties System.Net.NetworkInformation.IPGlobalProperties::InternalGetIPGlobalProperties()
extern void IPGlobalProperties_InternalGetIPGlobalProperties_m74758C4E4DB69BA34CE6923E5C640D335BC6E014 (void);
// 0x00000845 System.String System.Net.NetworkInformation.IPGlobalProperties::get_DomainName()
// 0x00000846 System.Void System.Net.NetworkInformation.IPGlobalProperties::.ctor()
extern void IPGlobalProperties__ctor_m1C3267FBFEC8DD72CC56A4C5EC19C76AA7680B6B (void);
// 0x00000847 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor()
extern void NetworkInformationException__ctor_mBA60EDC47C5B8373C69C2BB998014CB1B99319FB (void);
// 0x00000848 System.Void System.Net.NetworkInformation.NetworkInformationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NetworkInformationException__ctor_mFF36F090C8A2438A1C8B75BA60B47933B13DD876 (void);
// 0x00000849 System.Int32 System.Net.NetworkInformation.CommonUnixIPGlobalProperties::getdomainname(System.Byte[],System.Int32)
extern void CommonUnixIPGlobalProperties_getdomainname_mF48E7AAE74313578ACC25E8C9FBAAD66F280DDCD (void);
// 0x0000084A System.String System.Net.NetworkInformation.CommonUnixIPGlobalProperties::get_DomainName()
extern void CommonUnixIPGlobalProperties_get_DomainName_m8F359828BAB5DC5F338C2384908E2D34799BAE86 (void);
// 0x0000084B System.Void System.Net.NetworkInformation.CommonUnixIPGlobalProperties::.ctor()
extern void CommonUnixIPGlobalProperties__ctor_mD26E185C9CE6B7E2D0E6B11FDB9BA7C73429CDDF (void);
// 0x0000084C System.Void System.Net.NetworkInformation.UnixIPGlobalProperties::.ctor()
extern void UnixIPGlobalProperties__ctor_mD82447A37FC171F372C28E442583745EB4D0E744 (void);
// 0x0000084D System.String System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::get_DomainName()
extern void UnixNoLibCIPGlobalProperties_get_DomainName_m472CDAA87DD800EE30A6C2F3154F836CD067538E (void);
// 0x0000084E System.Void System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties::.ctor()
extern void UnixNoLibCIPGlobalProperties__ctor_m9FFB83304274EEBCE61CDE8E3E0F86B4B04D49FF (void);
// 0x0000084F System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.ctor(System.String)
extern void MibIPGlobalProperties__ctor_m5C3492BED5AC48BA43C068B00D70FF8CC55816E7 (void);
// 0x00000850 System.Void System.Net.NetworkInformation.MibIPGlobalProperties::.cctor()
extern void MibIPGlobalProperties__cctor_m874A8D290A3B1DBFD14A091E479BE2924DFA547D (void);
// 0x00000851 System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DomainName()
extern void Win32IPGlobalProperties_get_DomainName_mF0BAF6309AF69217DF87D3EB0C44589ED70419B6 (void);
// 0x00000852 System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::.ctor()
extern void Win32IPGlobalProperties__ctor_mCCF10D6073FCA3B87D513794539C831D75E8D236 (void);
// 0x00000853 System.Int32 System.Net.NetworkInformation.Win32NetworkInterface::GetNetworkParams(System.IntPtr,System.Int32&)
extern void Win32NetworkInterface_GetNetworkParams_mC4CE2C65E1AC80E4C2371950E3201D2DE40A62B7 (void);
// 0x00000854 System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::get_FixedInfo()
extern void Win32NetworkInterface_get_FixedInfo_m5C321EB3F491660D8054D89A57FE8842DE2755E9 (void);
// 0x00000855 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetDefaultProxy_UsingOldMonoCode()
extern void DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_m1FBAB2FA8C0B87ADA0523CAA34F9D5230098A795 (void);
// 0x00000856 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::GetSystemWebProxy()
extern void DefaultProxySectionInternal_GetSystemWebProxy_m7BE3F8E1011DD7156B05BEA3264DB8ED549072C0 (void);
// 0x00000857 System.Object System.Net.Configuration.DefaultProxySectionInternal::get_ClassSyncObject()
extern void DefaultProxySectionInternal_get_ClassSyncObject_mB2D90511F956EA13FAB810CBF9A4C656E5D56F65 (void);
// 0x00000858 System.Net.Configuration.DefaultProxySectionInternal System.Net.Configuration.DefaultProxySectionInternal::GetSection()
extern void DefaultProxySectionInternal_GetSection_mC140525EBD14DF74602DFCA7AFECE376AFADE34F (void);
// 0x00000859 System.Net.IWebProxy System.Net.Configuration.DefaultProxySectionInternal::get_WebProxy()
extern void DefaultProxySectionInternal_get_WebProxy_m38F5DF1772271FC6014B56D93654B771D745AB9B (void);
// 0x0000085A System.Void System.Net.Configuration.DefaultProxySectionInternal::.ctor()
extern void DefaultProxySectionInternal__ctor_m0C5C6CB50669D34ED3B3699B39170041383E0005 (void);
// 0x0000085B System.Net.Configuration.SettingsSectionInternal System.Net.Configuration.SettingsSectionInternal::get_Section()
extern void SettingsSectionInternal_get_Section_m109D7450776A48BEFA47FA7CBB521CE6BA0CA5C9 (void);
// 0x0000085C System.Boolean System.Net.Configuration.SettingsSectionInternal::get_Ipv6Enabled()
extern void SettingsSectionInternal_get_Ipv6Enabled_mA9CA51E8A3512524460E9AC8C9DE920F64C33FB8 (void);
// 0x0000085D System.Void System.Net.Configuration.SettingsSectionInternal::.ctor()
extern void SettingsSectionInternal__ctor_mED2DFF382A20FC3136B1514D8BD40B520758F636 (void);
// 0x0000085E System.Void System.Net.Configuration.SettingsSectionInternal::.cctor()
extern void SettingsSectionInternal__cctor_mB44A40867AA454670DC1D71ADE59576183610030 (void);
// 0x0000085F System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern void HybridDictionary__ctor_m18ABDB797A0591DF595BBDD2A03F1670DDD07AA7 (void);
// 0x00000860 System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern void HybridDictionary_get_Item_mE16332A6CE6880D436633519FAC3662ED4A89E11 (void);
// 0x00000861 System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern void HybridDictionary_set_Item_mFFC14A7F4B45807D97503616AF98160061F6B9D3 (void);
// 0x00000862 System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::get_List()
extern void HybridDictionary_get_List_mA5314524D5C411AFB165F07D860010DC0E11D28E (void);
// 0x00000863 System.Void System.Collections.Specialized.HybridDictionary::ChangeOver()
extern void HybridDictionary_ChangeOver_m41ACD333E29ACCFF1C0CF45DF9E09E84EA28F173 (void);
// 0x00000864 System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern void HybridDictionary_get_Count_m170B942CEB7FA1B42BFFB246D72B583BD1397738 (void);
// 0x00000865 System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern void HybridDictionary_get_IsSynchronized_m16E1CEF05CA968B2C844104334996CEE3335EB0E (void);
// 0x00000866 System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern void HybridDictionary_get_SyncRoot_m3A81A716ADC2A40444AF517E38EA943FDC72AB97 (void);
// 0x00000867 System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern void HybridDictionary_Add_m8022C90B2CAE2484ED0D740734EA4E512D8B130D (void);
// 0x00000868 System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern void HybridDictionary_Contains_mF8C826101599A5F6EDB300954BD90FDEC4BCA6D6 (void);
// 0x00000869 System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern void HybridDictionary_CopyTo_m130965C0084284EE331912B40157958A1075E4A1 (void);
// 0x0000086A System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern void HybridDictionary_GetEnumerator_m02B2FC70ED4C2E91818DC8EAA3F3602B0DE81437 (void);
// 0x0000086B System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m4B6D49D2814E11C16C7005F84DFC58333BCBFAA0 (void);
// 0x0000086C System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern void ListDictionary__ctor_mEB7BEC57F72A27168FCCE46DAC90CD5B8B7088A5 (void);
// 0x0000086D System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern void ListDictionary__ctor_mD1A7D146747D4E3AD93C261C1783CE34B10E48EC (void);
// 0x0000086E System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern void ListDictionary_get_Item_m34D2DAE21AFFB6B1801EDE8A6998732CD9B45605 (void);
// 0x0000086F System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern void ListDictionary_set_Item_m89155730D3E404A1270CBDE7BEEC99138FBC64A0 (void);
// 0x00000870 System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern void ListDictionary_get_Count_m4CB9ACB21730241E566764AAB76B8B2A3D72418B (void);
// 0x00000871 System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern void ListDictionary_get_IsSynchronized_mDFF1DD86417A74961730C434782CC2532A8B7CDD (void);
// 0x00000872 System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern void ListDictionary_get_SyncRoot_m58A889327021D843C7EB9171BD6B0D1E482C8BD7 (void);
// 0x00000873 System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern void ListDictionary_Add_m2204C61650D1B23A093627DF4D87009A7E3F9EDB (void);
// 0x00000874 System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern void ListDictionary_Contains_mA832E669186A7B91FF5819A535F8D394C963C508 (void);
// 0x00000875 System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern void ListDictionary_CopyTo_m9B1961C99A5B80996E42431630907C6BC02627A0 (void);
// 0x00000876 System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern void ListDictionary_GetEnumerator_m17E264D47385C88C7C366177CE8127CE933B0F9D (void);
// 0x00000877 System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern void ListDictionary_System_Collections_IEnumerable_GetEnumerator_mF0DF8988C2CA6D5D493A61C502F20DA7879FA8E3 (void);
// 0x00000878 System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern void NodeEnumerator__ctor_m61652E6AF76A5460A6F4EA14BF97B982B7BB0261 (void);
// 0x00000879 System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Current()
extern void NodeEnumerator_get_Current_m08DA3FD558CA771BD75B9C9A54FE681EDE668D25 (void);
// 0x0000087A System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Entry()
extern void NodeEnumerator_get_Entry_m5C0AAD879BADE3838D42B8525084C8C5DF96C56D (void);
// 0x0000087B System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Key()
extern void NodeEnumerator_get_Key_m83C059C6F52DE85B2E1605051400F3751534F8FF (void);
// 0x0000087C System.Object System.Collections.Specialized.ListDictionary/NodeEnumerator::get_Value()
extern void NodeEnumerator_get_Value_m8532A492ECB3CE11B557109057E81DD2175070C7 (void);
// 0x0000087D System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::MoveNext()
extern void NodeEnumerator_MoveNext_m111785D3C26CEB364566F3E517B3EB7528940552 (void);
// 0x0000087E System.Void System.Collections.Specialized.ListDictionary/NodeEnumerator::Reset()
extern void NodeEnumerator_Reset_m66F3E60AB0A5AFCB3B3A8C37399B5357098BDD2E (void);
// 0x0000087F System.Void System.Collections.Specialized.ListDictionary/DictionaryNode::.ctor()
extern void DictionaryNode__ctor_m824EFE3D79F05D11FE0DE6FD5491D2FB1D382619 (void);
// 0x00000880 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern void NameObjectCollectionBase__ctor_m97EB64FF4F1733FB7BA9C6427EA871813AD49C8C (void);
// 0x00000881 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m3A2420574843F0567355F3B2F79D8BB4229580B6 (void);
// 0x00000882 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameObjectCollectionBase__ctor_m1C0BA736F4454310BEAAB54CB2307F905C1A1F8C (void);
// 0x00000883 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
extern void NameObjectCollectionBase__ctor_mA553427255D475EB21A48A9C585885E3E4335EA3 (void);
// 0x00000884 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.DBNull)
extern void NameObjectCollectionBase__ctor_mFC42544A14AA22758AB189CD5BCC8FE563A9569A (void);
// 0x00000885 System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase__ctor_m0995BB1255888BA4156EF35F69462ECDEBB39C13 (void);
// 0x00000886 System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameObjectCollectionBase_GetObjectData_m751D688171C6E676A6778036561E47AD1E0BD772 (void);
// 0x00000887 System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern void NameObjectCollectionBase_OnDeserialization_mE380D49EDB18F4456CF66DD8790E289BB3D091CD (void);
// 0x00000888 System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset()
extern void NameObjectCollectionBase_Reset_m3446C8F69C1CD6228C6AB5CE0CB1EB90342B4C4A (void);
// 0x00000889 System.Void System.Collections.Specialized.NameObjectCollectionBase::Reset(System.Int32)
extern void NameObjectCollectionBase_Reset_m6D9FEB20EBE98529CF3A8A66566526F965D0FC03 (void);
// 0x0000088A System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry System.Collections.Specialized.NameObjectCollectionBase::FindEntry(System.String)
extern void NameObjectCollectionBase_FindEntry_m718AABE1DF5F139F552DAA073FB2863EBE4AF77F (void);
// 0x0000088B System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern void NameObjectCollectionBase_get_IsReadOnly_mACD1AE0A27A5AC2E06C73AE37B012D2DE43A1FF8 (void);
// 0x0000088C System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern void NameObjectCollectionBase_BaseAdd_mD6FC01196B5CCF6591834C8A9F183B477202B129 (void);
// 0x0000088D System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern void NameObjectCollectionBase_BaseGet_m34B277D6BF8AE4C4BCCDA290D62897C9739EA626 (void);
// 0x0000088E System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern void NameObjectCollectionBase_BaseSet_m85584732956158CBA89BBC5CC5316F96DAD90B14 (void);
// 0x0000088F System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern void NameObjectCollectionBase_BaseGet_m6C79F9B2DF510481D1D71FEE71782074781B8E71 (void);
// 0x00000890 System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern void NameObjectCollectionBase_BaseGetKey_m695607B27E3D7C591C5E630DA5DC611C47B195B7 (void);
// 0x00000891 System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern void NameObjectCollectionBase_GetEnumerator_mAAFB01528169706D8E604D3EA8C9CE9EDAB9B3FD (void);
// 0x00000892 System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern void NameObjectCollectionBase_get_Count_m55654BD7ABD342E64543B6B34A0ED2E55D14172A (void);
// 0x00000893 System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mAF83DFFCF913CB0EB4EA054599CFBA83B285B4E2 (void);
// 0x00000894 System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mDAD72AF014EA323F18F7E6C4DC71DEE13A1CE909 (void);
// 0x00000895 System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern void NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mEC25AFAE52FBFF5C5C399297B36F4CEEF9EBD98D (void);
// 0x00000896 System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
extern void NameObjectCollectionBase_BaseGetAllKeys_m9812C7E099B81CB36A2D2B67C84D9A53AC8A3B05 (void);
// 0x00000897 System.Void System.Collections.Specialized.NameObjectCollectionBase::.cctor()
extern void NameObjectCollectionBase__cctor_mB31DAEC0EB0A04003468496FC87D42812F0A0691 (void);
// 0x00000898 System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::.ctor(System.String,System.Object)
extern void NameObjectEntry__ctor_m995C545D6465499656D27A10071FE7C670DCD6A1 (void);
// 0x00000899 System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::.ctor(System.Collections.Specialized.NameObjectCollectionBase)
extern void NameObjectKeysEnumerator__ctor_mB9768A57865CD35FD66913A54BD288CD9D6036F3 (void);
// 0x0000089A System.Boolean System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::MoveNext()
extern void NameObjectKeysEnumerator_MoveNext_mEA36FF36EF6F1956ED9F9D6D8559A22482760F52 (void);
// 0x0000089B System.Void System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::Reset()
extern void NameObjectKeysEnumerator_Reset_m150D4F13AFA8D2D5D6E26B0A8C05FCE847C02FE9 (void);
// 0x0000089C System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::get_Current()
extern void NameObjectKeysEnumerator_get_Current_m140DD35019E2A824900B7F4A9F116E8AEB80256F (void);
// 0x0000089D System.Void System.Collections.Specialized.CompatibleComparer::.ctor(System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern void CompatibleComparer__ctor_m26DB6C338A8491558326D0F472D432EAC4D5D3D4 (void);
// 0x0000089E System.Boolean System.Collections.Specialized.CompatibleComparer::Equals(System.Object,System.Object)
extern void CompatibleComparer_Equals_mBB2FF4E0B234C0A1854821B349899246FDD37E95 (void);
// 0x0000089F System.Int32 System.Collections.Specialized.CompatibleComparer::GetHashCode(System.Object)
extern void CompatibleComparer_GetHashCode_m02DFA8D6B5B49382CD4FA659D2B7F8C7E9000A6B (void);
// 0x000008A0 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_Comparer()
extern void CompatibleComparer_get_Comparer_mF8B7EDA05E675046EB7BF2E6DEEFBAE1C2AA5E2F (void);
// 0x000008A1 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_HashCodeProvider()
extern void CompatibleComparer_get_HashCodeProvider_m2CED6D7A8ED865AE214D806F751C7F17BD24BED3 (void);
// 0x000008A2 System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::get_DefaultComparer()
extern void CompatibleComparer_get_DefaultComparer_mA4978DD07C60DB282096F4C5C8E66D7D935C83CB (void);
// 0x000008A3 System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::get_DefaultHashCodeProvider()
extern void CompatibleComparer_get_DefaultHashCodeProvider_m0BD9F3BFCB9AD8D80E14EE483C42A81CA36A9D20 (void);
// 0x000008A4 System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern void NameValueCollection__ctor_m778D8601E84C12D4EABEAA3A8B495FB92A953909 (void);
// 0x000008A5 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32)
extern void NameValueCollection__ctor_m47444DC49F8EB616594E32AE9BD59976CF2DB439 (void);
// 0x000008A6 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern void NameValueCollection__ctor_m5E1391BA01E5D9BAF25A865025F031283B05AC62 (void);
// 0x000008A7 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.DBNull)
extern void NameValueCollection__ctor_mC65E70EA2E216395614CCAB82401B9853AED94AA (void);
// 0x000008A8 System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern void NameValueCollection__ctor_m5BB309F095815D835ED9E9BF73266383892215C3 (void);
// 0x000008A9 System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern void NameValueCollection_InvalidateCachedArrays_mBBA5CF68C6D8E24D304B2A6C94B423702BE024F3 (void);
// 0x000008AA System.String System.Collections.Specialized.NameValueCollection::GetAsOneString(System.Collections.ArrayList)
extern void NameValueCollection_GetAsOneString_m701748B8F46B509BA82DE9C72F7EC4E0FEEC664F (void);
// 0x000008AB System.String[] System.Collections.Specialized.NameValueCollection::GetAsStringArray(System.Collections.ArrayList)
extern void NameValueCollection_GetAsStringArray_mCE36368E109CC044906EFA208B0F99D0D8ED9818 (void);
// 0x000008AC System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern void NameValueCollection_Add_m2BA01C700F8C0A5A2F6550DA7298887A4FE5C249 (void);
// 0x000008AD System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern void NameValueCollection_Get_m300E47F531EE449FC72B6319D6AC7423AB9E991C (void);
// 0x000008AE System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern void NameValueCollection_GetValues_mC60A341A340822C2CB825630A75A4F0A8C05D6BD (void);
// 0x000008AF System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern void NameValueCollection_Set_m964E6C417970F6DD9A7EC003F9CC85B153E4E982 (void);
// 0x000008B0 System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern void NameValueCollection_get_Item_m2A6445E94FF2B24C9DF6190767D14E7920871CDC (void);
// 0x000008B1 System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern void NameValueCollection_set_Item_mD7117BA970BD749C64FC5D5352530E422B754ADA (void);
// 0x000008B2 System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern void NameValueCollection_Get_mBB1620F0B7E68EA41CE34FACBF5429DC216817DF (void);
// 0x000008B3 System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32)
extern void NameValueCollection_GetValues_m636A791E94412318935C3601B1C13C81A451FBC4 (void);
// 0x000008B4 System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern void NameValueCollection_GetKey_m61FFBF58CDF5769282DED45F920161A89276EAE2 (void);
// 0x000008B5 System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys()
extern void NameValueCollection_get_AllKeys_m58B1B3117D3249B9580FB4D350B29FC595614448 (void);
// 0x000008B6 System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern void StringCollection_get_Item_m6289E4904A6358446DE30B8D06EFAD2FEEB2EDF8 (void);
// 0x000008B7 System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern void StringCollection_set_Item_mEAE8DDA53D08232F6597E9091A7FEB8496BF7FDD (void);
// 0x000008B8 System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern void StringCollection_get_Count_m4307EBE5F76A894AE550321977CE58DDDFCB85BF (void);
// 0x000008B9 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern void StringCollection_System_Collections_IList_get_IsReadOnly_m4A1506C2B94AF66FB47FDCDFC434ACB8488AC47F (void);
// 0x000008BA System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern void StringCollection_System_Collections_IList_get_IsFixedSize_m26E281D01AF589C9BB1C09989C6F2AC9AFFE01D4 (void);
// 0x000008BB System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern void StringCollection_Add_mF15C799896470DD2C807334107ADFD01C8BAF497 (void);
// 0x000008BC System.Void System.Collections.Specialized.StringCollection::Clear()
extern void StringCollection_Clear_mD4940751F46D8B3EBCB148A0A5B14A5AE2FC217C (void);
// 0x000008BD System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern void StringCollection_Contains_mF8AD018C19F7760E4693B1A24148F8659C486502 (void);
// 0x000008BE System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
extern void StringCollection_CopyTo_m22FDAD087DBC9ACAC1C2BD3614AD448C173F8893 (void);
// 0x000008BF System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern void StringCollection_IndexOf_m860B2D7C91CE7633F376CB8AB7C46CC1E103EC17 (void);
// 0x000008C0 System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern void StringCollection_Insert_m9847FF62B17A3776A419642922F93D39356198BC (void);
// 0x000008C1 System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern void StringCollection_get_IsSynchronized_mF01A6B1F560EF9BE2F0CC998E7330BA7A685C313 (void);
// 0x000008C2 System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern void StringCollection_Remove_m3FF866980BE6C484CEEB9C42B97BAC6B602AE95E (void);
// 0x000008C3 System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern void StringCollection_RemoveAt_mA455E99CC2C275AC94FE206E49E87B433257EAA2 (void);
// 0x000008C4 System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern void StringCollection_get_SyncRoot_m2A6A118CF992AA80F7923CE3E6A49D25AC7F730B (void);
// 0x000008C5 System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern void StringCollection_System_Collections_IList_get_Item_m1FB397E9881B366B0E0BD85883F5F8EE4B0A2E66 (void);
// 0x000008C6 System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_set_Item_m84FFCB0C0EDF382722E6D86EA441056197E742BC (void);
// 0x000008C7 System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern void StringCollection_System_Collections_IList_Add_m31EA60F5452738475A79F562CC741336D2C9A2CF (void);
// 0x000008C8 System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern void StringCollection_System_Collections_IList_Contains_mF385154C4DDD61DDFE3D9273598E212977DDDDF8 (void);
// 0x000008C9 System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern void StringCollection_System_Collections_IList_IndexOf_mDE4B1B0D406BCE5065474EF50EED32663E996177 (void);
// 0x000008CA System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern void StringCollection_System_Collections_IList_Insert_m97C6AF183F6E33425F90A6746B1B9BCA2EC18DB2 (void);
// 0x000008CB System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern void StringCollection_System_Collections_IList_Remove_m81D305F7785DD4D4BCDBD5439004D122E26A6A36 (void);
// 0x000008CC System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern void StringCollection_System_Collections_ICollection_CopyTo_m911BB41A37B6860D0E98A5EF71F0C00797408A77 (void);
// 0x000008CD System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern void StringCollection_System_Collections_IEnumerable_GetEnumerator_m1620B22B92CB96A6E4AFB2775FBB9D5E0F9666DE (void);
// 0x000008CE System.Void System.Collections.Specialized.StringCollection::.ctor()
extern void StringCollection__ctor_m4358E3B91F6861DD166CAC4BD9B2D353FDA5FA14 (void);
// 0x000008CF System.Void System.Collections.Generic.LinkedList`1::.ctor()
// 0x000008D0 System.Void System.Collections.Generic.LinkedList`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000008D1 System.Int32 System.Collections.Generic.LinkedList`1::get_Count()
// 0x000008D2 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::get_First()
// 0x000008D3 System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000008D4 System.Void System.Collections.Generic.LinkedList`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000008D5 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddFirst(T)
// 0x000008D6 System.Void System.Collections.Generic.LinkedList`1::AddFirst(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008D7 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::AddLast(T)
// 0x000008D8 System.Void System.Collections.Generic.LinkedList`1::Clear()
// 0x000008D9 System.Boolean System.Collections.Generic.LinkedList`1::Contains(T)
// 0x000008DA System.Void System.Collections.Generic.LinkedList`1::CopyTo(T[],System.Int32)
// 0x000008DB System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::Find(T)
// 0x000008DC System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1::GetEnumerator()
// 0x000008DD System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000008DE System.Boolean System.Collections.Generic.LinkedList`1::Remove(T)
// 0x000008DF System.Void System.Collections.Generic.LinkedList`1::Remove(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008E0 System.Void System.Collections.Generic.LinkedList`1::RemoveLast()
// 0x000008E1 System.Void System.Collections.Generic.LinkedList`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000008E2 System.Void System.Collections.Generic.LinkedList`1::OnDeserialization(System.Object)
// 0x000008E3 System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008E4 System.Void System.Collections.Generic.LinkedList`1::InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008E5 System.Void System.Collections.Generic.LinkedList`1::InternalRemoveNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008E6 System.Void System.Collections.Generic.LinkedList`1::ValidateNewNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008E7 System.Void System.Collections.Generic.LinkedList`1::ValidateNode(System.Collections.Generic.LinkedListNode`1<T>)
// 0x000008E8 System.Boolean System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_IsSynchronized()
// 0x000008E9 System.Object System.Collections.Generic.LinkedList`1::System.Collections.ICollection.get_SyncRoot()
// 0x000008EA System.Void System.Collections.Generic.LinkedList`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x000008EB System.Collections.IEnumerator System.Collections.Generic.LinkedList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000008EC System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Collections.Generic.LinkedList`1<T>)
// 0x000008ED System.Void System.Collections.Generic.LinkedList`1/Enumerator::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000008EE T System.Collections.Generic.LinkedList`1/Enumerator::get_Current()
// 0x000008EF System.Object System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000008F0 System.Boolean System.Collections.Generic.LinkedList`1/Enumerator::MoveNext()
// 0x000008F1 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000008F2 System.Void System.Collections.Generic.LinkedList`1/Enumerator::Dispose()
// 0x000008F3 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000008F4 System.Void System.Collections.Generic.LinkedList`1/Enumerator::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
// 0x000008F5 System.Void System.Collections.Generic.LinkedListNode`1::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
// 0x000008F6 System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::get_Next()
// 0x000008F7 T System.Collections.Generic.LinkedListNode`1::get_Value()
// 0x000008F8 System.Void System.Collections.Generic.LinkedListNode`1::Invalidate()
// 0x000008F9 System.Void System.Collections.Generic.Queue`1::.ctor()
// 0x000008FA System.Int32 System.Collections.Generic.Queue`1::get_Count()
// 0x000008FB System.Boolean System.Collections.Generic.Queue`1::System.Collections.ICollection.get_IsSynchronized()
// 0x000008FC System.Object System.Collections.Generic.Queue`1::System.Collections.ICollection.get_SyncRoot()
// 0x000008FD System.Void System.Collections.Generic.Queue`1::Clear()
// 0x000008FE System.Void System.Collections.Generic.Queue`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x000008FF System.Void System.Collections.Generic.Queue`1::Enqueue(T)
// 0x00000900 System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1::GetEnumerator()
// 0x00000901 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000902 System.Collections.IEnumerator System.Collections.Generic.Queue`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000903 T System.Collections.Generic.Queue`1::Dequeue()
// 0x00000904 T System.Collections.Generic.Queue`1::Peek()
// 0x00000905 System.Void System.Collections.Generic.Queue`1::SetCapacity(System.Int32)
// 0x00000906 System.Void System.Collections.Generic.Queue`1::MoveNext(System.Int32&)
// 0x00000907 System.Void System.Collections.Generic.Queue`1::ThrowForEmptyQueue()
// 0x00000908 System.Void System.Collections.Generic.Queue`1/Enumerator::.ctor(System.Collections.Generic.Queue`1<T>)
// 0x00000909 System.Void System.Collections.Generic.Queue`1/Enumerator::Dispose()
// 0x0000090A System.Boolean System.Collections.Generic.Queue`1/Enumerator::MoveNext()
// 0x0000090B T System.Collections.Generic.Queue`1/Enumerator::get_Current()
// 0x0000090C System.Void System.Collections.Generic.Queue`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x0000090D System.Object System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000090E System.Void System.Collections.Generic.Queue`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x0000090F System.Void System.Collections.Generic.Stack`1::.ctor()
// 0x00000910 System.Int32 System.Collections.Generic.Stack`1::get_Count()
// 0x00000911 System.Boolean System.Collections.Generic.Stack`1::System.Collections.ICollection.get_IsSynchronized()
// 0x00000912 System.Object System.Collections.Generic.Stack`1::System.Collections.ICollection.get_SyncRoot()
// 0x00000913 System.Void System.Collections.Generic.Stack`1::Clear()
// 0x00000914 System.Void System.Collections.Generic.Stack`1::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// 0x00000915 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000916 System.Collections.IEnumerator System.Collections.Generic.Stack`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000917 T System.Collections.Generic.Stack`1::Peek()
// 0x00000918 T System.Collections.Generic.Stack`1::Pop()
// 0x00000919 System.Void System.Collections.Generic.Stack`1::Push(T)
// 0x0000091A System.Void System.Collections.Generic.Stack`1::ThrowForEmptyStack()
// 0x0000091B System.Void System.Collections.Generic.Stack`1/Enumerator::.ctor(System.Collections.Generic.Stack`1<T>)
// 0x0000091C System.Void System.Collections.Generic.Stack`1/Enumerator::Dispose()
// 0x0000091D System.Boolean System.Collections.Generic.Stack`1/Enumerator::MoveNext()
// 0x0000091E T System.Collections.Generic.Stack`1/Enumerator::get_Current()
// 0x0000091F System.Void System.Collections.Generic.Stack`1/Enumerator::ThrowEnumerationNotStartedOrEnded()
// 0x00000920 System.Object System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000921 System.Void System.Collections.Generic.Stack`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000922 System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern void U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7C7DB27BC4297A74A96AC53E1EDD3E7415DFB874 (void);
// 0x00000923 System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern void BypassElementCollection__ctor_m867AF1FE6DBB2768AA199F45039C3E2641A9627A (void);
// 0x00000924 System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern void ConnectionManagementElementCollection__ctor_mA29AB3A62411F032C5EF86B16E7633A386000C7B (void);
// 0x00000925 System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
extern void ConnectionManagementSection__ctor_m1112C1BE1A9466BBCDD5C2ED20E80CDE03B46CA4 (void);
// 0x00000926 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
extern void ConnectionManagementSection_get_Properties_m1737189D2D78E81728CFF1CCCEB99E1FFFEA3F19 (void);
// 0x00000927 System.Void System.Net.Configuration.DefaultProxySection::.ctor()
extern void DefaultProxySection__ctor_m41EADE87065B61EDF32F67D2E62F04946886DAF6 (void);
// 0x00000928 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
extern void DefaultProxySection_get_Properties_m6F70EC02D977EB16F86354188A72DC87A8959555 (void);
// 0x00000929 System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
extern void DefaultProxySection_Reset_m54AC9323047B1FB38795C9F466C1C01192F75276 (void);
// 0x0000092A System.Void System.Net.Configuration.ProxyElement::.ctor()
extern void ProxyElement__ctor_mAFD852231DF0231726E41911409CB2725BE990AC (void);
// 0x0000092B System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
extern void ProxyElement_get_Properties_m8A3EE4A3EEF2571DE4768730CEF4107331490377 (void);
// 0x0000092C System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
extern void HttpWebRequestElement__ctor_mE3A4CA43FCC72E10B6C7B4920F429C028765E233 (void);
// 0x0000092D System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
extern void HttpWebRequestElement_get_Properties_m531EDF2F56823100C47A9EEE1575143E5EB5463C (void);
// 0x0000092E System.Void System.Net.Configuration.Ipv6Element::.ctor()
extern void Ipv6Element__ctor_m3F7DF39E6E51517E1429BAE43FA782BF3AF17965 (void);
// 0x0000092F System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
extern void Ipv6Element_get_Properties_m156008D7E5279C50DE4CEDB6D4D3CEDAF2ACF8DC (void);
// 0x00000930 System.Void System.Net.Configuration.NetSectionGroup::.ctor()
extern void NetSectionGroup__ctor_m566D7C9466957BCE3B8FE2D0EA2582CC2F95F269 (void);
// 0x00000931 System.Void System.Net.Configuration.SettingsSection::.ctor()
extern void SettingsSection__ctor_mC5F3D29EDC94D87B0B0542DE3702795441AC3005 (void);
// 0x00000932 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
extern void SettingsSection_get_Properties_m1ABB76DEC7441CFEDD4E7EDF99B8F5C258101254 (void);
// 0x00000933 System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
extern void PerformanceCountersElement__ctor_m5A090222699B48BEB5FCC743198613FA8D081083 (void);
// 0x00000934 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
extern void PerformanceCountersElement_get_Properties_m3C7B73AC6E5F5E92426D7DC091A2ECE5CFCD9FD0 (void);
// 0x00000935 System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
extern void ServicePointManagerElement__ctor_m61B031714F8498D467B5A0958EE62F73E0C58EB7 (void);
// 0x00000936 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
extern void ServicePointManagerElement_get_Properties_mC1C586246B4FE10AC90622A0CC6A5936D501B677 (void);
// 0x00000937 System.Void System.Net.Configuration.SocketElement::.ctor()
extern void SocketElement__ctor_m428B7094399223FFB9A5B62BF9D8CEA18A00A4C3 (void);
// 0x00000938 System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
extern void SocketElement_get_Properties_m9CF8E9B1A9B41B7EC24A4F91CE2E8ECBF317426A (void);
// 0x00000939 System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
extern void WebProxyScriptElement__ctor_mC8AF875E80D96B18AA387148009AE1C630D83591 (void);
// 0x0000093A System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
extern void WebProxyScriptElement_get_Properties_m8AD25399F804B2D22BC8312102EBC28A0CAE6E26 (void);
// 0x0000093B System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
extern void WebRequestModulesSection__ctor_m0CAB6F207E3B29D65AEA38A6AC191873E3000F02 (void);
// 0x0000093C System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
extern void WebRequestModulesSection_get_Properties_m909A3E4C4A61BFCC9D09F397D9314E5F74F3FE44 (void);
// 0x0000093D System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern void WebRequestModuleElementCollection__ctor_m8B880B0EAE7CEF1CB79CD264A9B6D62AB6A22961 (void);
// 0x0000093E System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
extern void DiagnosticsConfigurationHandler__ctor_m185BC74B0225A3E16EEB4164923931B79AAA0CF0 (void);
// 0x0000093F System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
extern void DiagnosticsConfigurationHandler_Create_mCC7EF5B43B6913E2429B37EC5923202EBB20AA96 (void);
// 0x00000940 System.Void Unity.ThrowStub::ThrowNotSupportedException()
extern void ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD (void);
static Il2CppMethodPointer s_methodPointers[2368] = 
{
	SR_GetString_m9548BD6DD52DFDB46372F211078AE57FA2401E39,
	SR_GetString_m9D671CBA422B18D15B8FF59B22DCCEB32E3D16E2,
	SR_GetString_m3FC710B15474A9B651DA02B303241B6D8B87E2A7,
	MonoPInvokeCallbackAttribute__ctor_mE8E2FC84195F0A97049CAF083F56A3C4254323FC,
	CertHelper_AddCertificatesToNativeChain_m1D22A9A50CA05E1F931B8B309E047092DDE01CFF,
	CertHelper_AddCertificateToNativeChain_m223E545813937EC29B6EF428DAE3F45551728166,
	CertHelper_NativeChainToManagedCollection_m671B74DB858DFEC5DE82CB70687F76EE5212630C,
	Debug_CheckAndThrow_mF8B2344487801910DCF927F9394FD2F13A61F8E8,
	Debug_CheckAndThrow_m4B13EAF7CA50D7535BF7F663D23886279A4CDBF5,
	UnityTls_GetUnityTlsInterface_mB672D3C985554FC0EDFAB68EB4A77BCB74FEE719,
	UnityTls_get_IsSupported_mA17DA466EA04B7B44B4C3C37EF24494F9CDE238C,
	UnityTls_get_NativeInterface_mB7B44E93A89C271D6C65B44DE2EE9C4A5786E88E,
	unitytls_x509verify_callback__ctor_m9D04862B333145C9F179B31F08C390E0DEA4D1B0,
	unitytls_x509verify_callback_Invoke_m4DDE358F87398FA2F51CDD551E6F1D4CB5B48159,
	unitytls_x509verify_callback_BeginInvoke_m34DFF04B0DD733860B3BAE73885A90C6A936E26F,
	unitytls_x509verify_callback_EndInvoke_m17AC8D1886D2624D4E3E041E6931DC942C117FAB,
	unitytls_tlsctx_write_callback__ctor_mC7F821EB4597E74CFC9DE7A1EA50F86CFAC2F411,
	unitytls_tlsctx_write_callback_Invoke_m9E758A0D65A39C61209306CDAB781357D956F36E,
	unitytls_tlsctx_write_callback_BeginInvoke_m9FA442F88C3483A74C56938DD30BF36505666EDD,
	unitytls_tlsctx_write_callback_EndInvoke_m4615F5985BBDB75F9DBDE0398A854CE2315DF925,
	unitytls_tlsctx_read_callback__ctor_m52F2060B467B61401384C7E3693C6C8CDC3E46B7,
	unitytls_tlsctx_read_callback_Invoke_m9C045DAC27E3496B2FA429755CFF48E11A751D29,
	unitytls_tlsctx_read_callback_BeginInvoke_mFDE9382397C181E07D075AA3FDE12B10ABC2C602,
	unitytls_tlsctx_read_callback_EndInvoke_m2D814DC4681EFC9E4B0D495E8E5BBB0DCD3B62D1,
	unitytls_tlsctx_trace_callback__ctor_m4C0C53E1C112C8A363A1C1AC15B5F6B7E4CD2443,
	unitytls_tlsctx_trace_callback_Invoke_mC657E7F4F1C6F530662F48BE16D2621029846344,
	unitytls_tlsctx_trace_callback_BeginInvoke_mE23C8513E935C278BCC120731072893E86729CAA,
	unitytls_tlsctx_trace_callback_EndInvoke_m33865B83D223342F078061A59F8DF41311D20C94,
	unitytls_tlsctx_certificate_callback__ctor_m14C613364636EF10ECCD413A6F49E975A4F4A6A2,
	unitytls_tlsctx_certificate_callback_Invoke_mA90DE4AD701A89C12AECBE415FBAB506DCF66C12,
	unitytls_tlsctx_certificate_callback_BeginInvoke_m1D0AF1A60BC715B76CD3866BF3D555E5A6BFDD3E,
	unitytls_tlsctx_certificate_callback_EndInvoke_m0485EC4825ED1374DA2C0925A2F48D7F7567E21B,
	unitytls_tlsctx_x509verify_callback__ctor_m50C4160D42681A80BEAD13F18294437BD96C3D0B,
	unitytls_tlsctx_x509verify_callback_Invoke_m63FDAF56E6D0F50E1E21DB4E3515967596071CE6,
	unitytls_tlsctx_x509verify_callback_BeginInvoke_m84DAB124121532AF9AECBA6E706A0914C4EA22F4,
	unitytls_tlsctx_x509verify_callback_EndInvoke_mD0321EDEC2FCF98ACB6497F796021DC65DA0DEEC,
	unitytls_interface_struct__ctor_m91CA935D822B8FA1057010680A22A0AC9D70E381,
	unitytls_errorstate_create_t__ctor_mDB5F7A125825A4EADEFE51E41161ECF671659474,
	unitytls_errorstate_create_t_Invoke_m2A913757D4713362254BE457E8792AD299677D42,
	unitytls_errorstate_create_t_BeginInvoke_m21B464EA6F62C9C4916A69F411D0261B058E3E06,
	unitytls_errorstate_create_t_EndInvoke_m8DC3659FB8AACD5CD163A95D55D72E4337AC8F37,
	unitytls_errorstate_raise_error_t__ctor_m5F148689FFD962A73C93824087B04547B3AEE99B,
	unitytls_errorstate_raise_error_t_Invoke_m319B51663970217C195467C18E5928B5C2B68441,
	unitytls_errorstate_raise_error_t_BeginInvoke_m430EC23CE6C0A221B234161D965EF48FDE1FE3D8,
	unitytls_errorstate_raise_error_t_EndInvoke_m713725CCC70FA48D9A9BFE1770EB0406853DF1E7,
	unitytls_key_get_ref_t__ctor_m8B6688D0222A54335156F76C42D335A999C620ED,
	unitytls_key_get_ref_t_Invoke_mA8C5F2D239F4B74885F37C9671012F1136BF0BE2,
	unitytls_key_get_ref_t_BeginInvoke_m93BE7A42624E9987FC901D883E06683C90046D89,
	unitytls_key_get_ref_t_EndInvoke_m3158742DC98834DFC0519765F4E88A8C581B54F2,
	unitytls_key_parse_der_t__ctor_m702A41D29AFA524EFDF148673041B507C9538C4F,
	unitytls_key_parse_der_t_Invoke_m8CF4A1CFD7B385B3091215030E7EC2CB5B6823ED,
	unitytls_key_parse_der_t_BeginInvoke_mDD3872296FB3905F2F22D5859F4521DF44C9F19B,
	unitytls_key_parse_der_t_EndInvoke_m6ED100AAACFF6462B42B0D9804BBA5E34487808A,
	unitytls_key_parse_pem_t__ctor_mE18922EC14AD6EDA780D819DB1469A99242F5C82,
	unitytls_key_parse_pem_t_Invoke_m38F6D75BFC2A80778454B43E5C76B4704EFF75F1,
	unitytls_key_parse_pem_t_BeginInvoke_mE7922F635446EF1A040AEE37DD9CEA8694A7F771,
	unitytls_key_parse_pem_t_EndInvoke_mA547C0BB7666F5F1953F14BC46AAE90537850C77,
	unitytls_key_free_t__ctor_m6FB9CB25BA5BE0723AE199CE1F502A955DD356E3,
	unitytls_key_free_t_Invoke_m80E23E79440054744237B5BAA88AAAAB0D4E2F4B,
	unitytls_key_free_t_BeginInvoke_m9187223C9B5085D282144EC1175FA24D76AEBEE3,
	unitytls_key_free_t_EndInvoke_m152FC113C7C311F262DC6B29F0E44ED27D4A4FBB,
	unitytls_x509_export_der_t__ctor_m2FA861176B1706988B234296EC1E5C2C2385C5A5,
	unitytls_x509_export_der_t_Invoke_m90FDB333B2076F06444B096E1E1D1A42C8EEF8A0,
	unitytls_x509_export_der_t_BeginInvoke_m33E6F88E2448002C8B74EC67E172034CCD11E4D5,
	unitytls_x509_export_der_t_EndInvoke_m18AAF57D64EC364FF2312620E964F4D615E594CD,
	unitytls_x509list_get_ref_t__ctor_m2E1FC1BBC79EB53428998A9DC5299F1DCDF6BBE8,
	unitytls_x509list_get_ref_t_Invoke_mDCA9357333DA8B614E6C0F68922B3E5306A6534C,
	unitytls_x509list_get_ref_t_BeginInvoke_mCF97569A8246EA8445ADA1DE245B36DFAFB91446,
	unitytls_x509list_get_ref_t_EndInvoke_m3E4E37BCCAE29768A633C69FA2CE74EC67945A98,
	unitytls_x509list_get_x509_t__ctor_m8AF5F946C60F4AD11DCF53EB103FAB5556828421,
	unitytls_x509list_get_x509_t_Invoke_m25FDF33A713C330AF882B49E05C79B77B5CF7A22,
	unitytls_x509list_get_x509_t_BeginInvoke_m5F1D80B8C015B87B91AE11A27A01ED586E9BFFEF,
	unitytls_x509list_get_x509_t_EndInvoke_m32FF88756C519F7C7F53E36198C352B2DE96FECF,
	unitytls_x509list_create_t__ctor_m35027CAFF58C468A07D199EA8E760FA83ECC1497,
	unitytls_x509list_create_t_Invoke_m45B75F9286D2C1DC14AECFA258F419C3A1989A79,
	unitytls_x509list_create_t_BeginInvoke_mE85F1C402447D1CC543B2609C2BFD081F2954DC5,
	unitytls_x509list_create_t_EndInvoke_m2D64E81EA9962E8269292F49D86CBA9A45D8021F,
	unitytls_x509list_append_t__ctor_m5389B48F2C2EFE1E6FDAE6FEE1FF176F28F0D02C,
	unitytls_x509list_append_t_Invoke_m172237A64036BDE6C197DA0AE6A5A08010D4F361,
	unitytls_x509list_append_t_BeginInvoke_mD3FEDD5F023253232CC8C48EF5CF2120ABD7147B,
	unitytls_x509list_append_t_EndInvoke_m2DE3744B3B3919E5ABED5661FC2FA2445B933EF3,
	unitytls_x509list_append_der_t__ctor_m841BFC2DC8D5C6BA893192D3318C89CB1CBA5093,
	unitytls_x509list_append_der_t_Invoke_m1606FADA7E902086F7AEE6D8F304867C7E0A434F,
	unitytls_x509list_append_der_t_BeginInvoke_m68B8C0940627CA1AA436E080A70BE1F622A820E7,
	unitytls_x509list_append_der_t_EndInvoke_m96AFB602A6FB94D99E6AB65CE1D3C8B0B636CC6C,
	unitytls_x509list_free_t__ctor_mE08ED3D0B7810758779C72A6882354D36E51F126,
	unitytls_x509list_free_t_Invoke_m733759A5A94705388D233DB23FDFECAE2ADACDF0,
	unitytls_x509list_free_t_BeginInvoke_m1A31DC10E7A495BCB31B46F413FCB7431E408CD7,
	unitytls_x509list_free_t_EndInvoke_m4BD735662CB6AC985D4AC833288191948ABD9182,
	unitytls_x509verify_default_ca_t__ctor_m9030DF501A2B0AE32F059AF6838EAF2A5897C8E0,
	unitytls_x509verify_default_ca_t_Invoke_mE5D523AFD08CCE9A427389F17611D56C6D905B98,
	unitytls_x509verify_default_ca_t_BeginInvoke_m732CB4DFD706DEA2D1AFDD66A25C7A0A4F59641C,
	unitytls_x509verify_default_ca_t_EndInvoke_m65702493A38FA3F2598DD0D5F41A2849C4EE532D,
	unitytls_x509verify_explicit_ca_t__ctor_m4008497F04CFD72DB70FC203A50B023CD8F17864,
	unitytls_x509verify_explicit_ca_t_Invoke_mCC06B1AF3BCD90C24E3CA05A785528588C7CCEB5,
	unitytls_x509verify_explicit_ca_t_BeginInvoke_m5A0BBE08CCACF01F690B9919087359A9FF7CF468,
	unitytls_x509verify_explicit_ca_t_EndInvoke_m8EE4AE05BF8B13E7CD9A5818E3BA682F951584A4,
	unitytls_tlsctx_create_server_t__ctor_m5CDD5F7909C922C45FDFFD8E94DDFFB1279C7368,
	unitytls_tlsctx_create_server_t_Invoke_m6C7288544450304884E239BA3ACED930AAC040DF,
	unitytls_tlsctx_create_server_t_BeginInvoke_m7E60A8576D5C6BE7D9A61EBB5800D7FD402BF60D,
	unitytls_tlsctx_create_server_t_EndInvoke_mFC81040ECF1EF8D630C93F04FC8086A0F0288F6F,
	unitytls_tlsctx_create_client_t__ctor_m1E56411D4E929CCB07D6050690CA2284FCB8647D,
	unitytls_tlsctx_create_client_t_Invoke_m1DF5F05CEC35949278BEA867FA923CA399855D20,
	unitytls_tlsctx_create_client_t_BeginInvoke_m7D9286CDD8953A99DC3DAF42531E08EC2921DF9D,
	unitytls_tlsctx_create_client_t_EndInvoke_mD4C6A3C3AEB5444A52D5096080347CC4119CE729,
	unitytls_tlsctx_server_require_client_authentication_t__ctor_m9AFB7DDE9F07B0C20E932B26CF5F7CC5A34EF2EE,
	unitytls_tlsctx_server_require_client_authentication_t_Invoke_mAD3C2DC8E2407F47BCCDB9CCD03FAEF5C3C61FB4,
	unitytls_tlsctx_server_require_client_authentication_t_BeginInvoke_m34DF29BAAD16625619D9BACCAE0916CCB1EE3814,
	unitytls_tlsctx_server_require_client_authentication_t_EndInvoke_mD90E6FDE627752E1398D872EF076990B46A0D0C4,
	unitytls_tlsctx_set_certificate_callback_t__ctor_mEE1D60229825001CFA228CAB36712F5911CA94F1,
	unitytls_tlsctx_set_certificate_callback_t_Invoke_mD72A24F7BEB100ECBFE6A02447D07EB392F8416B,
	unitytls_tlsctx_set_certificate_callback_t_BeginInvoke_mC558DC3F79919F6336501ED0EE6E258D40ABF0E6,
	unitytls_tlsctx_set_certificate_callback_t_EndInvoke_m4A733262D24FD2ADD4A0807F5B70ACC4833E71DF,
	unitytls_tlsctx_set_trace_callback_t__ctor_m698EE0E5FA09113DDBBE2BFD5EB4FE1A4E0F97A1,
	unitytls_tlsctx_set_trace_callback_t_Invoke_m3563168D645C5A9128E07DBDFC7B5512764B2E11,
	unitytls_tlsctx_set_trace_callback_t_BeginInvoke_m32846D6C60BEC0829F3478DB7AAB125D13B7F547,
	unitytls_tlsctx_set_trace_callback_t_EndInvoke_mEAF3A5C422616242581287326BDAD6C5515F5DC1,
	unitytls_tlsctx_set_x509verify_callback_t__ctor_m1900B77A4679CBF3A7F107114F9444A193F9B3B2,
	unitytls_tlsctx_set_x509verify_callback_t_Invoke_mB4B699E9A75AD84590634AA66243AE8BE8DE9F09,
	unitytls_tlsctx_set_x509verify_callback_t_BeginInvoke_mF1D785074322CB5DD7BB67E54C6C2140C5BCE73C,
	unitytls_tlsctx_set_x509verify_callback_t_EndInvoke_mA320598F201D2E1ECAA3595355C93B3BDD13B031,
	unitytls_tlsctx_set_supported_ciphersuites_t__ctor_mF8B2A46DCE03527B87EE1EB40F18EEB186591A58,
	unitytls_tlsctx_set_supported_ciphersuites_t_Invoke_m9091B6D204D7611E2741CC2B3166616F8C19E594,
	unitytls_tlsctx_set_supported_ciphersuites_t_BeginInvoke_mAD583F841F317705AA1F100D5188AEBC4B997C1D,
	unitytls_tlsctx_set_supported_ciphersuites_t_EndInvoke_mFFC257704501E21B54877E6A937BEDAB526184E8,
	unitytls_tlsctx_get_ciphersuite_t__ctor_mD59D1727FCCD2F1485FC87677C593BAA0D19FD69,
	unitytls_tlsctx_get_ciphersuite_t_Invoke_m28D027E6306B1F2188E64245FBA01268CC329442,
	unitytls_tlsctx_get_ciphersuite_t_BeginInvoke_m8BA17B437B22A3109CD7AA513F11B99A6010B215,
	unitytls_tlsctx_get_ciphersuite_t_EndInvoke_m37132AD00EA6C15F18185B76F883D690BC9330EF,
	unitytls_tlsctx_get_protocol_t__ctor_m57AA61C6CC144AC851EF8A1BCDE1FE8A6A7CE4E3,
	unitytls_tlsctx_get_protocol_t_Invoke_m533A624ECEB2AC0E43052CE6A234D04E4E9C70AB,
	unitytls_tlsctx_get_protocol_t_BeginInvoke_m633A813CF097D32A46D0AF9B4BA62675D446E476,
	unitytls_tlsctx_get_protocol_t_EndInvoke_m31A4CD4E5918466D87B8EFED896BF0DF487FF061,
	unitytls_tlsctx_process_handshake_t__ctor_m3C5790369EFE12F841C4EDA676DABCC833BF23DE,
	unitytls_tlsctx_process_handshake_t_Invoke_mE17E62D2159809BC847BEB1D6B40C23C017ED3E8,
	unitytls_tlsctx_process_handshake_t_BeginInvoke_mDE4541085A795D1286E90FE82D1802A4A2C861BF,
	unitytls_tlsctx_process_handshake_t_EndInvoke_mDE68FC780902D4DDC02B55D01C3F5B1F2D5165CD,
	unitytls_tlsctx_read_t__ctor_m3A54D3DC95D93F41585AAC5E0CBB09E7E21C6A88,
	unitytls_tlsctx_read_t_Invoke_mAFFB3FA39F79B2BE4FFA182239DE94ED5570D803,
	unitytls_tlsctx_read_t_BeginInvoke_mC8AA0588732E45F9402F7EC9319099ECFC5AFF8C,
	unitytls_tlsctx_read_t_EndInvoke_m94A70CCFA5F55842BBB3DEC7B89D19BCBA37937A,
	unitytls_tlsctx_write_t__ctor_m99DA58D77CC21DEAA77D8332FB1F4226BCBC3317,
	unitytls_tlsctx_write_t_Invoke_mF9413F9C6DD887B3B0DA87CE25824CED940EEFC1,
	unitytls_tlsctx_write_t_BeginInvoke_mC17344DDFE83AF7AA95CE8EC00A0FD27ADBF1A9F,
	unitytls_tlsctx_write_t_EndInvoke_m6D59052A9AACE1E87DEBB2B6800B47FDAE09A524,
	unitytls_tlsctx_notify_close_t__ctor_mD372DA8B81430D8E41B7372722D5D327CF438951,
	unitytls_tlsctx_notify_close_t_Invoke_mC3B57340B3CA22EA7EB0EBFA5C941C487DE6B015,
	unitytls_tlsctx_notify_close_t_BeginInvoke_mDB587D9039A414DC2127613B9E477379FF119E14,
	unitytls_tlsctx_notify_close_t_EndInvoke_m5D323428785A814E43CA41E4244ECAF0F96EE668,
	unitytls_tlsctx_free_t__ctor_m0445C80DC50302FB1F416ED7AA8B1E2DD66529EA,
	unitytls_tlsctx_free_t_Invoke_m34DFBB044037052F67FEA5A579A5AC004E01AEC8,
	unitytls_tlsctx_free_t_BeginInvoke_m7887C3F9C1F87DCD3807A2797D7525F108CBA926,
	unitytls_tlsctx_free_t_EndInvoke_mED032427E108FD9D858A2B752544CC76CCCF647D,
	unitytls_random_generate_bytes_t__ctor_m651B0D872AA98DCBDF99B8CBB48616F9877D28C5,
	unitytls_random_generate_bytes_t_Invoke_mDF4C16458D2779B58E4C66ACB9A197DD3C61085F,
	unitytls_random_generate_bytes_t_BeginInvoke_m15487ED3C5CACFB6E0D760F7307847F531F1C3A4,
	unitytls_random_generate_bytes_t_EndInvoke_m3C6F54483F3AF797648AC5E311AB1976FFAFF61B,
	UnityTlsContext__ctor_m82A8A07485BBA40B72407958085454EBFFEB826C,
	UnityTlsContext_ExtractNativeKeyAndChainFromManagedCertificate_mCDF88F12EFAFFA3CB29218EB5CECA54736FA577B,
	UnityTlsContext_get_IsAuthenticated_m2D21CAED85E7FC027A44D4B563559A0CAE4E82E1,
	UnityTlsContext_Read_m57A71EE175BE7D20FBBBF23208F4370198E82FCE,
	UnityTlsContext_Write_m2A845C13751DFCADF4065D4108C92065662EF6D5,
	UnityTlsContext_Shutdown_m8F28FC6DA210C07662E2237E4AE0F37CDEFAAC16,
	UnityTlsContext_Dispose_mDAFA39A1C87ACB042BA171A8FE723D07204216FD,
	UnityTlsContext_StartHandshake_m3E616FB8331ADCE5754EE66CF047C8C218D233FE,
	UnityTlsContext_ProcessHandshake_mDA4456F24FC2E02FBBE6252120506A0852BD6CCC,
	UnityTlsContext_FinishHandshake_mBC43C5018B3D65BB8807CCAEDDFEBC4D4719B2FB,
	UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F,
	UnityTlsContext_WriteCallback_mFA8E9E3FE64CD88CEEAC5F83393A939D683BE025,
	UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB,
	UnityTlsContext_ReadCallback_m4ED16457432EC59B4B9697ABE4421E093B2B0929,
	UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850,
	UnityTlsContext_VerifyCallback_mD1AB1BC9CA979D58ED90B5B1A39848FAB95C83D3,
	UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347,
	UnityTlsContext_CertificateCallback_mC2342B4F75EB243AED15E7D6AA7389394966AA8E,
	UnityTlsConversions_GetMinProtocol_mAE3AC38A5F0C6CBEFDC7265E49536E0F6EEAEEC1,
	UnityTlsConversions_GetMaxProtocol_m8991E0B43664085F8E1BD9095CA4114A3A46DCFA,
	UnityTlsConversions_ConvertProtocolVersion_m1618CAAE6886BF8070040EE8FC3ACC9036A6567E,
	UnityTlsConversions_VerifyResultToAlertDescription_m1C318DCEFF9F42E73FF8DAB347BA7B9E4E7EFF7E,
	UnityTlsConversions_VerifyResultToPolicyErrror_m0F695E9B6732F71E1719D642E28A569B39A56BB7,
	UnityTlsProvider_get_Name_mD97B0783E337EF392796C2B54B2893132AE3CE6E,
	UnityTlsProvider_get_ID_m69F15693799E92CF740F1632C811ABBDD9501CE3,
	UnityTlsProvider_get_SupportsSslStream_m75C37BCDD5970564FF33FC734CE1E53066C310F5,
	UnityTlsProvider_get_SupportsMonoExtensions_m937D906F958817CF7AF4BF3C0F6CB7FCFB271C34,
	UnityTlsProvider_get_SupportsConnectionInfo_m2F1C9B6C649675ACE3F96A80EBAC9FF44655D004,
	UnityTlsProvider_get_SupportsCleanShutdown_m0C0EDA9937BDF53475680A2892B937316D450B5C,
	UnityTlsProvider_get_SupportedProtocols_mB92C5F264ADEADACCE52A31D1DA9937777C5BC04,
	UnityTlsProvider_CreateSslStream_m7395FB4BBD905D89772F5157FDD254E5CF1F83DC,
	UnityTlsProvider_CreateSslStreamInternal_mA8AD037F184BD564ACD9945D6EA3961971030F7E,
	UnityTlsProvider_ValidateCertificate_mB131CB7451246C50BC4F3612C768E09C1DF59AAF,
	UnityTlsProvider__ctor_m84BDC7485DA3C2B3A2153CA4B0AC695FD65AF493,
	UnityTlsStream__ctor_mCFCFF6B6CCEB2BEBB904E26AB3BF22E888C75C3F,
	UnityTlsStream_CreateContext_m0626DFB8390DAFD3CDDF43BF033F6BBE6260E1C9,
	CFObject_dlopen_mFCCB233C9C9A50D506CD4F1ABED02B8B62735C78,
	CFObject_dlsym_mBF6766537A83ABF750C32B33B09C8E38F4BD1CD3,
	CFObject_dlclose_m012BF88490C06A6C7491395B5B42A794F0833F7B,
	CFObject_GetIndirect_m0CEC26DEAFEFA09E4227456BD3209CE31EEA8B9D,
	CFObject_GetCFObjectHandle_m3120B22D9181E66B627FBD3945C936227AC2CEE0,
	CFObject__ctor_mF64B1A8118687E2945D8B211BE8815B1DB640456,
	CFObject_Finalize_m006C6599C427E094BEA3C22EAD8EEAFF67725E29,
	CFObject_get_Handle_mCC370B38D8244C40F8DE155013E1F1DA5C0BAAF8,
	CFObject_set_Handle_m63B93A801DCA3AED580D08D96C73B29B0C5239EA,
	CFObject_CFRetain_m6F8AC05D65A3F2362D6FB30E167F014858515DB0,
	CFObject_Retain_mFCCF79A9B34E092526A615CC6A4C9CD0E617DE8F,
	CFObject_CFRelease_m99995BA572C171D1FCA3016F3C2264AC9DC964EC,
	CFObject_Release_m1AFEB7B3D714FE12E1CC26E473230E2AF9A7AD32,
	CFObject_Dispose_m8CF85BE6C028F1567A3066A0E47FB69CB3D13250,
	CFObject_Dispose_m7CF111071216A34F1255FFD86FA36A640516044F,
	CFArray__ctor_mD6A392F2B610ABA574B99EEB18F0B824CEA4B74B,
	CFArray__cctor_m6C3B2E90EA8971C6A6217B1EAE6982C0C6D15F42,
	CFArray_CFArrayGetCount_m7B9C0DAAD2E608AA91E6AF69D14E79CA984A4F73,
	CFArray_get_Count_mDAB0951207B368F8509220DF20A6F9659E1745BD,
	CFArray_CFArrayGetValueAtIndex_m6D81FF806B39AD0113B644D8074D1EA5C71F0042,
	CFArray_get_Item_mF96F5B64841A7AC6FB726DEC1698AF72536492F1,
	CFNumber_CFNumberGetValue_mBB4E2B5F8A0AFABFCAB24DCD9F2C0270C9F3B5AB,
	CFNumber_AsInt32_mEC1828CEFC9E0F945C22D09B09D5146B75D68770,
	CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2,
	CFString__ctor_m713E89F54692440CCDB684689F956C8861241143,
	CFString_CFStringCreateWithCharacters_mE917A7721458FEC4897D4D40F952FED5C74BBBFA,
	CFString_Create_m7F968536151F0DFC1CB848F1382F934D733A7E94,
	CFString_CFStringGetLength_m016D6289246E6BC81567F351F0715EA566AB609D,
	CFString_CFStringGetCharactersPtr_m099CE7331162D55C0D9C7E07BDD2A91352354F3F,
	CFString_CFStringGetCharacters_mC67D64C45707BF30B211BBBC70F5F9982D17566F,
	CFString_AsString_mC0ED721CE2D3EC9C1B4DC76C66EBCB2F4894C15B,
	CFString_ToString_mFFA4CF7FD17AC3DE2A7512239105593C06D073F0,
	CFDictionary__cctor_m1C9A42B30155219EAFD302304F4BCE71C0806256,
	CFDictionary__ctor_m47C3403AF6A136376DAA1033F3DEDCD01EBB8C6B,
	CFDictionary_CFDictionaryGetValue_m0EC4E585C878951EA7553FFC127257F0BE168E31,
	CFDictionary_GetValue_m541C66EDA38170813EFC86504CAD18E4984F837D,
	CFDictionary_get_Item_m4DBF14449B67051E61B351BDA1C1D75F261CB3ED,
	CFUrl__ctor_m94B28224C2267F1601BC29F618EBD556514DFC9F,
	CFUrl_CFURLCreateWithString_m1366236BDF79E91FA08FA736E4CF514805CFAF59,
	CFUrl_Create_mEC0A91ABC5696C78631CDB3C2CBE06E4A9B1AB6A,
	CFRunLoop_CFRunLoopAddSource_mE428579D40413B6FB740F7B42C64B63881F61568,
	CFRunLoop_CFRunLoopRemoveSource_m45D070FA5D5935F7040FBCA805361F05B848996D,
	CFRunLoop_CFRunLoopRunInMode_m58A4EAE225C578C02E2A03B5B188CA3DD078BFAA,
	CFRunLoop_CFRunLoopGetCurrent_m8F7E74F0B1BA966E2142CB3D4BD70752E8299419,
	CFRunLoop_CFRunLoopStop_m51B11460D5AA6A7E947F479B4897F9B4DFD1609F,
	CFRunLoop__ctor_m1D2EFD768DA1ECAE1E4FCD72448BFE2CF324AC07,
	CFRunLoop_get_CurrentRunLoop_mBCBEFF47AD9EA6FA878AE0A7F476EA58CA65B9C0,
	CFRunLoop_AddSource_m1F4505F77A5740DF6A02FE08A89CFE0F875F33E5,
	CFRunLoop_RemoveSource_mE7D7027C829D200D3AF51D026FA6F236BA436E3A,
	CFRunLoop_RunInMode_mB31A23ED32135A505EBA8D8EC7A54CB54094DAC0,
	CFRunLoop_Stop_m150B479F9DF68F537303DAEF52A5E21BF42C6C9C,
	CFProxy__cctor_m5E64CF6485D2887BAD97F92173EE34A7867EB7D4,
	CFProxy__ctor_m41DDC9A050F27587A9F2A492DB2614EB5CB6B098,
	CFProxy_CFProxyTypeToEnum_mC685B37B2264E025F168250BCA92DC848E531702,
	CFProxy_get_AutoConfigurationJavaScript_m6B62E15C6AA2B407D9B788515B519DCCF88FEC8B,
	CFProxy_get_AutoConfigurationUrl_m840D41FCB3D048DD2EAD2B3A1DC054B96E2D4E5E,
	CFProxy_get_HostName_m24443A667C88CBB73EB7CEE0AB35CA42BBECF3B2,
	CFProxy_get_Password_m20C13DAEDF18604D6F2D57B56C56758667525D6D,
	CFProxy_get_Port_mC6490D437685D8E722A81740FBC64746021190BF,
	CFProxy_get_ProxyType_m0C440E8A2DC2FEA8725E635FCCCC61CBB7EEFC88,
	CFProxy_get_Username_m8155EBB692BD8FFBC2B84325225284E6FDE5D2AD,
	CFProxySettings__cctor_m6A3C05CFF7C6FF13E81F591D83148FA36BDF3166,
	CFProxySettings__ctor_m3EF761C43D266A201620A8F9291B4E447CDDD3C4,
	CFProxySettings_get_Dictionary_m4E22C04DF8DE1D4088C462849BB2654AD2A212FF,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptSequential_m89792AB0F424FCA209DD5AE706D47A565A2839DE,
	CFNetwork_CFNetworkExecuteProxyAutoConfigurationURL_mEE70C4C4C4E0E25404E6417B126D960E79356F88,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScriptThread_mF6DD5D031A74CE07FFCFA60137A3097683F313B2,
	CFNetwork_CFNetworkCopyProxiesForAutoConfigurationScript_mCE67B2B2E7E40885FBE488B67B1F748F28EA4089,
	CFNetwork_CopyProxiesForAutoConfigurationScript_mD52D441E483F955FBA484E58282E688A7DAE3BC1,
	CFNetwork_GetProxiesForAutoConfigurationScript_mEA6EE80D03DC167CB088A9BD36C84DD2919BC828,
	CFNetwork_GetProxiesForAutoConfigurationScript_m0FA93E7487DAE6993B0F1F69B4E61ACC4F46E0B7,
	CFNetwork_ExecuteProxyAutoConfigurationURL_m1645430EC8CB0FB9B128A1525436468BA71C7D7A,
	CFNetwork_CFNetworkCopyProxiesForURL_m222DA57686642F09DE2B4CC9505AA5916C5F593C,
	CFNetwork_CopyProxiesForURL_m3CC1E10A717CBA58D63403AD72AFF7C28DF09DAB,
	CFNetwork_GetProxiesForURL_m22E56EFEEA7B927C996B28C7D6D066DFB1E04673,
	CFNetwork_GetProxiesForUri_mE82A7948BF5A3CF1AFD09DC739F017C8A5694429,
	CFNetwork_CFNetworkCopySystemProxySettings_m7C9D402114A62862E1B10B3CB352DB0617860E66,
	CFNetwork_GetSystemProxySettings_mC08214866976C5825A453088EFAE1846D87D425A,
	CFNetwork_GetDefaultProxy_mFCEFB728224033F014C188FE2BBC379A7F753428,
	CFNetwork__cctor_m53723CA4A908873A10BBB2FD8B3BB7C23A23F250,
	GetProxyData_Dispose_mF6A2D7D8C67588D1D627AF94DFEF2C7AA5B76CDD,
	GetProxyData__ctor_m9CC32EF080377850BC9B6FF283B2595C167B7721,
	CFProxyAutoConfigurationResultCallback__ctor_mFBDA2507472B5CC9BE1AB00525A4985606AD36BC,
	CFProxyAutoConfigurationResultCallback_Invoke_m14AB24B2B486ABBD22AABF058F5DCA9FA12FE829,
	CFProxyAutoConfigurationResultCallback_BeginInvoke_m61976BC16FAC944A2D7C243AC67A4EA61500DAC0,
	CFProxyAutoConfigurationResultCallback_EndInvoke_mBE6E881358E26A55305C5983CE119B1AD8E52332,
	CFWebProxy__ctor_mCC44E988D527452E493FC4A23ED3722CC71E6A38,
	CFWebProxy_GetProxyUri_m3F63B622064439B7E92515CE2843669E071C6BAF,
	CFWebProxy_GetProxyUriFromScript_mC4D0A8BC56266C546C65C29996A5564F03503DEB,
	CFWebProxy_ExecuteProxyAutoConfigurationURL_mC040FE13D5540C58B8CF4EE63C5D331978B901E1,
	CFWebProxy_SelectProxy_m95C6AFD75952BA91814ADE401ED5F12C5654D046,
	CFWebProxy_GetProxy_m4743138D378D43BC119DAD673A3CA7DF4CE6CFEB,
	CFWebProxy_IsBypassed_m1E2CC3D34FA80BA0FC1026047CCC2947AA2D0EA7,
	U3CU3Ec__DisplayClass13_0__ctor_m9E10A71FD7E271A87BF207893367B1CF1398C7CA,
	U3CU3Ec__DisplayClass13_0_U3CExecuteProxyAutoConfigurationURLU3Eb__0_mFE212AE14442B7E102A25A01CC3347AFB5C3BD13,
	BufferOffsetSize_get_EndOffset_m3D0A21592979F5088101892843183FCFB8C9BF2A,
	BufferOffsetSize_get_Remaining_mBD3EA6B0F643284A54FDCA2860FE0F65C5CAF054,
	BufferOffsetSize__ctor_m3DE692137428B2E6AB46008825FC5C1B63FDAF4F,
	BufferOffsetSize_ToString_mEEB6528B305FE796622A87E8692C7132423D4655,
	BufferOffsetSize2__ctor_m68156625CD993C66D5EA9C5194263DD9A4F59F3F,
	BufferOffsetSize2_Reset_m4426212B4ECDC2D1487AE5B825918B747D947AB7,
	BufferOffsetSize2_MakeRoom_mD7CCEC959C12276B0333DFFEAA8581C465FF44ED,
	BufferOffsetSize2_AppendData_m96903990058C4793A3B56FDE82006E4EC90A2508,
	AsyncProtocolResult_get_UserResult_mCCD14DC517D32C83AA61320D6D1D2E7F1430A3C8,
	AsyncProtocolResult_get_Error_m90252805C3FCD7277CD1CB01CB765183889E6E29,
	AsyncProtocolResult__ctor_m9F01278D600A337B6A0CF5F6C9EFF7760BD758D8,
	AsyncProtocolResult__ctor_mD63EC8610596D4B15DB1325C58FF32A41DAD48CF,
	AsyncProtocolRequest_get_Parent_m1F7659D1FAFC679076165336ED380C4BD123B452,
	AsyncProtocolRequest_get_RunSynchronously_m66A26ED05543D9AF1ED86287DCE8389BC1CB319A,
	AsyncProtocolRequest_get_Name_m1999BAB96B06DCB4DC11BF5F3B0BF4C6E2A26FF6,
	AsyncProtocolRequest_get_UserResult_m53CEBBACE5031D4CE92308ABBAEA38AEF74DDBD3,
	AsyncProtocolRequest_set_UserResult_mBF62363240DC9BE894231E56047F594EF452CD19,
	AsyncProtocolRequest__ctor_mFE18CBE3FAA084FF6DF2AD8BECC2CA6DF4C6E769,
	AsyncProtocolRequest_RequestRead_mFE5CEC3957F554C144DFBD3965538192A954D064,
	AsyncProtocolRequest_RequestWrite_m2A27B2F2C4734DA21AD7D36B18B0D67EB3D54ED7,
	AsyncProtocolRequest_StartOperation_mA13EA6B8ED143BC043F506815D05EB3F49F22682,
	AsyncProtocolRequest_ProcessOperation_m6DD0D7800F73C41BE9A5313737357801B22ED71D,
	AsyncProtocolRequest_InnerRead_m902FA39460933B383900CB60BDF8CCFC96BF3499,
	NULL,
	AsyncProtocolRequest_ToString_m2D8062B5811D7B7A071CC451D2FD03E5BF61B529,
	U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2,
	U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A,
	U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D,
	U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3,
	U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D,
	U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3,
	AsyncHandshakeRequest__ctor_mD64E5A00147B8D0859732BE2ACE93D32868F8210,
	AsyncHandshakeRequest_Run_m4C9BCE2E991E582B738E2A4E7F2D088227685B98,
	AsyncReadOrWriteRequest_get_UserBuffer_m628B7BB1EB536BA73CFE467242E0E749A7B0AE6A,
	AsyncReadOrWriteRequest_get_CurrentSize_m5AE6CC50F25E8504438DF2C9C2E2A44000621142,
	AsyncReadOrWriteRequest_set_CurrentSize_mAB6067CAD6F9DB5B3D274FC09E70BFA8DCBA288B,
	AsyncReadOrWriteRequest__ctor_m880E292B39EF76B9EDF3A5AB0A9A333A38A5575F,
	AsyncReadOrWriteRequest_ToString_mDF6B2FA7AFA4E8B6571656E60CEF9BCFDCF05EDD,
	AsyncReadRequest__ctor_mAF75247AFFC230BA5433424D27D13ACF53B3A239,
	AsyncReadRequest_Run_mC9FDEBDFB3C4519C11A47FF358D4B7AB62514E11,
	AsyncWriteRequest__ctor_mF3534E810074917ABDE7E4CE7EE61715694F9EB8,
	AsyncWriteRequest_Run_mA3FF2D74BD568114BF3EA7FF6B0BE568D25D81BC,
	ServerCertValidationCallbackWrapper__ctor_m6EB9B9436E627C4C616BC14AA8EF5B6BD28B4F4E,
	ServerCertValidationCallbackWrapper_Invoke_mC75038D5C50C3354D6938DD77608DCE39D5DC1AE,
	ServerCertValidationCallbackWrapper_BeginInvoke_mCCBD269244B22D143E7CF8F02FBF9DA99488F1D9,
	ServerCertValidationCallbackWrapper_EndInvoke_m4F4A10E18E6928B33347B2A7C31B7AE9A0BD796B,
	ChainValidationHelper_GetInternalValidator_mBDF9A751ADCBA2326B75ABF4BDE8410F08FF5FAC,
	ChainValidationHelper__ctor_mFE078E9D7EB24B1E12975ABFC262C403F1A54CBF,
	ChainValidationHelper_DefaultSelectionCallback_mC8C3FAEDFCAC634F7C77EA067637E0088863B31A,
	ChainValidationHelper_get_Settings_m0D7AF0562DCF1102D27554FFE64628F8EFBB8684,
	ChainValidationHelper_SelectClientCertificate_m116ABB9254158E98AA9A0EB323980138B1F11983,
	ChainValidationHelper_ValidateCertificate_m0DE6FB5264C61C93FA06B954A0CBF670AB7C3A08,
	ChainValidationHelper_ValidateCertificate_mE482A7E49237B8C3CA8F491A78CC6E6084671188,
	ChainValidationHelper_ValidateChain_m1FED22B0446D155E82E39C2743C9A16EDE6F62ED,
	ChainValidationHelper_ValidateChain_m7A807FE9B1CBE778FE851D07E24D80A3D567B90B,
	MobileAuthenticatedStream__ctor_mF6BF50D6BFDEF283FF8036F5170281D29FDD7628,
	MobileAuthenticatedStream_get_Settings_mA58954FF6C914DBAACB8F508ACFC5165A9A43155,
	MobileAuthenticatedStream_get_Provider_mC36232C2AF537A29FBB55B1AD3C99F02A9731C37,
	MobileAuthenticatedStream_CheckThrow_m2AAEC9435176D4AA10890A896C5909330B23683E,
	MobileAuthenticatedStream_GetSSPIException_m574F0E57FDDC71287516A9908D7E57FC61A8ED27,
	MobileAuthenticatedStream_GetIOException_mE435E11E49448A2035BCABF04AA5F72F44DC26D4,
	MobileAuthenticatedStream_SetException_mAFD628C4C8A54C4FE24BFB30C0F5863FDDFC8A7F,
	MobileAuthenticatedStream_AuthenticateAsServer_mF6F76CA384D369470FB3EB1492711E8E3936DF51,
	MobileAuthenticatedStream_ProcessAuthentication_m1A9EEBB26CCD694B0B844D8375EA85E6A353B73E,
	NULL,
	MobileAuthenticatedStream_BeginRead_m678B1BECC958CD3B67D66134E56AD3CAEB07019C,
	MobileAuthenticatedStream_EndRead_m347ACCE77CCCE6738781A2B182949CBA72CF9143,
	MobileAuthenticatedStream_BeginWrite_m01F98CCE1A968C5654028F266F3C648CF858864B,
	MobileAuthenticatedStream_EndWrite_m0CA1FD8354542D4F2BCA50BB4B0B852472D775C1,
	MobileAuthenticatedStream_Read_mB273DD14EDCED08E88F57CB340B97A206BA7DDE1,
	MobileAuthenticatedStream_Write_m0264ACE9D90AFB72A1A27B6130DD1B2876334DDF,
	MobileAuthenticatedStream_ReadAsync_mA54D1973D54A2F0DB84CE3FB41EAE1974988BB32,
	MobileAuthenticatedStream_WriteAsync_m2521D8A56CEC0EA00B99F2DD570FCCEDEBFF1807,
	MobileAuthenticatedStream_StartOperation_mB3763CD0086F3FB7D75AF3E10A9E1532FAD5BDB7,
	MobileAuthenticatedStream_InternalRead_m61B06DFDEA8207EEB7F1C350A428D7158ED25764,
	MobileAuthenticatedStream_InternalRead_mE90566374244F746502383488E02279B6A4F2E47,
	MobileAuthenticatedStream_InternalWrite_mD2BD17B591D53F923FAC63558AA1D35B21DB4E21,
	MobileAuthenticatedStream_InternalWrite_m1B5142B048B310D81A4929D4266FF9F0B0BE1B5D,
	MobileAuthenticatedStream_InnerRead_m0EDB58159985F661C68EBA26247546ED06999D0F,
	MobileAuthenticatedStream_InnerWrite_m36FEDC8E842C497B62D566D6392287270FD698AC,
	MobileAuthenticatedStream_ProcessHandshake_mE6B1280A8F2D9FB6EA6EC2AC003906FFB49AA9CC,
	MobileAuthenticatedStream_ProcessRead_mB005268451AB3F73B29AD1F787B576D5F3279371,
	MobileAuthenticatedStream_ProcessWrite_m30427A9308C97FAD0964F81A6A9F436FB2507F0F,
	MobileAuthenticatedStream_get_IsAuthenticated_m8D978D4684246BB2629CB1E2D207D2D76C132E3A,
	MobileAuthenticatedStream_Dispose_mB7DAA195CE82F2FA15AB576C961A7CE5D58C3106,
	MobileAuthenticatedStream_Flush_m20FAE0A0A6C311E1925367C03ECA23BBFB74BE8D,
	MobileAuthenticatedStream_Seek_m2D799812EC327A4E25AA165B9966514B2B1475A6,
	MobileAuthenticatedStream_SetLength_m8FCE457448E738481D5AAC29A8A9333A1B67D8C1,
	MobileAuthenticatedStream_get_CanRead_mE230E0D6A7CA3324925CD6311465B7BD41A144CE,
	MobileAuthenticatedStream_get_CanWrite_mAF3696EAD7809A7D9EB50A091BDAE02586E0DF54,
	MobileAuthenticatedStream_get_CanSeek_mFD9C9EF3A622E65965F14997361F9F611B2314A2,
	MobileAuthenticatedStream_get_Length_mD76215A3195543708BCB40C787678535541CE71E,
	MobileAuthenticatedStream_get_Position_mD05763AB69A4C7F98E6276F32645AEDFD8888731,
	MobileAuthenticatedStream_set_Position_m5A309FE43C490AA7C1D9AE181D269CCA12B26260,
	MobileAuthenticatedStream__cctor_mCC74CDBC64394AA7D5FE8CA0EE03EC0F11D7FEB6,
	MobileAuthenticatedStream_U3CInnerWriteU3Eb__67_0_mA67CDCE05B68516E41F5A6A8BF836B0AAE18D3B9,
	U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82,
	U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B,
	U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466,
	U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC,
	U3CU3Ec__DisplayClass66_0__ctor_m4ADA8611B27CC1C1BE9AFD1D22978A6621F720BE,
	U3CU3Ec__DisplayClass66_0_U3CInnerReadU3Eb__0_mF1C5674011A7F38D3AE4A911BE1E8E36E5CE0348,
	U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96,
	U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381,
	U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542,
	U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A,
	MobileTlsContext__ctor_m449BA0C8EEB97C8D13FBDF2B18F46F37408292E2,
	MobileTlsContext_get_Parent_m0FD89F43463E15B8D86845F0B3A9DF8B1C555DCF,
	MobileTlsContext_get_Settings_mD01B5D15FBD79707BB1F283814FF76817230E35D,
	NULL,
	MobileTlsContext_get_IsServer_mEC45475AE45AAB2485A829E6694B4E3BA1865C44,
	MobileTlsContext_get_TargetHost_m9A21D6E1D130B27A98EC48E33823BAEA78E3103F,
	MobileTlsContext_get_ServerName_m4E6D70D85F6EF3AE2D69F7C94EE30AA94B29D5DE,
	MobileTlsContext_get_ClientCertificates_m9EBE077A35DCE8333AF50C2CE8D22BE18DD26961,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MobileTlsContext_ValidateCertificate_m4A466CEC18A060EDFD9D65F66600FA7F63632F7A,
	MobileTlsContext_ValidateCertificate_mC4B0D79BE85414111AAEF998B89A3397B2FBA25B,
	MobileTlsContext_SelectClientCertificate_mECA3191985152439F02BAF708106264FAE73295E,
	MobileTlsContext_Dispose_m28EF01B1A0096B9A7820BAA0A77DB59C96A619DD,
	MobileTlsContext_Dispose_mA5A0EBCF3B159E9C83F76C00BA50FC67C360A7D1,
	MobileTlsContext_Finalize_m5751EFC24E645E0948C5ED11BD9C6C9E31170BA0,
	MonoTlsProviderFactory_GetProviderInternal_m39B343490A04AEA1AA38A90180E1B3BB1FB09020,
	MonoTlsProviderFactory_InitializeInternal_m6F039B9508B57C42B56DC7ED10C4F165B43F9200,
	MonoTlsProviderFactory_LookupProvider_mCCE6D95A81D810BA625035EEC1F974C16C748700,
	MonoTlsProviderFactory_InitializeProviderRegistration_mB8EDA2E5365BDCE5E8848A0259C78C1108FABC8D,
	MonoTlsProviderFactory_CreateDefaultProviderImpl_mCD05512BAD4E80E43384340A06057306064EFACE,
	MonoTlsProviderFactory_GetProvider_m78F329C7EAEB40EBD9A044CC1F0B89026DA2CE4D,
	MonoTlsProviderFactory__cctor_mF95517B2A6920440ACFBE55DEA0EE9C1211BF26A,
	MonoTlsStream_get_Request_m2A0C4CA4D549165015FACBFDB99051387A0A6ABA,
	MonoTlsStream_set_CertificateValidationFailed_mAECE839D304818A9CA38E598B85B962064F45B3F,
	NoReflectionHelper_GetInternalValidator_m231BC9D1C0A711D48F25B6F0162ACABBA93A0D74,
	NoReflectionHelper_GetProvider_m59893E33828D7422C8A4779F4C608373877FC05A,
	SystemCertificateValidator__cctor_mBF04D8E389B7377FC07044B9CF044A966C572193,
	SystemCertificateValidator_CreateX509Chain_mB9965896005703ADC050BC1E6415D30FBDC42091,
	SystemCertificateValidator_NeedsChain_m51D5E6A2B5A26BECA8764E613D19345A9353BA52,
	CallbackHelpers_PublicToMono_m84CC573B0D8E011058AEC077734D8C76921DD04C,
	CallbackHelpers_MonoToPublic_mA514EEB118D8EC3D84A607A42A0B48B5DA1FA500,
	CallbackHelpers_MonoToInternal_m82BDD9A21269FA19DA58564160BE5A2C083A4199,
	U3CU3Ec__DisplayClass0_0__ctor_mA3851A05D04281AEB715F93118D39916A6427108,
	U3CU3Ec__DisplayClass0_0_U3CPublicToMonoU3Eb__0_m6FE7B68D49CC73BE9827FE5BB16ADBE161FC37B5,
	U3CU3Ec__DisplayClass5_0__ctor_m220DD155C36F2E4600624C5208FBCAC3DBDBC31D,
	U3CU3Ec__DisplayClass5_0_U3CMonoToPublicU3Eb__0_mA228BC7BEF63CBFCF290284572E847A6BCCFECF7,
	U3CU3Ec__DisplayClass8_0__ctor_m2D537E7900C0394F5478CF4E408AACDF9F926E86,
	U3CU3Ec__DisplayClass8_0_U3CMonoToInternalU3Eb__0_m0B62590D3F567A6C864B7B82B577676087CACB6B,
	IriHelper_CheckIriUnicodeRange_mA9BAAD6D244ADEE8986FDC0DFB3DFDA90C093A6C,
	IriHelper_CheckIriUnicodeRange_m5ED29083C22062AEAB8B5787C9A27CFEEC397AD9,
	IriHelper_CheckIsReserved_m5C0A35BF0890852A3FC564618DB0836BBB6C0F1C,
	IriHelper_EscapeUnescapeIri_m6DE347247CE35DB4CE3129BEC2179F0095D69239,
	Uri_get_IsImplicitFile_m048350CB1E9AB92599F1557680A5D3B5FDE7C35D,
	Uri_get_IsUncOrDosPath_mE372CA996BE5B29DD531D7C6DD1809E17441005E,
	Uri_get_IsDosPath_m89CA4E32381C529502E91872BC89BD18F5419D08,
	Uri_get_IsUncPath_mD5EE84D5105BFB7D64E5C26B9549A67B720A7AE8,
	Uri_get_HostType_mBB4EE8652EA19E2FB8C696302D5EBE82F358EC90,
	Uri_get_Syntax_m3DB6A5D9E6FC3E0D0A63EA8A4527AF4106F9BD78,
	Uri_get_IsNotAbsoluteUri_mF9706123EB027C6E9AB263B98CE58CF319A22919,
	Uri_IriParsingStatic_m39FC9677B4B9EFBADF814F2EEA58280F35A1D3E5,
	Uri_get_AllowIdn_mF1833CB700E04D746D75428948BEBC70536E1941,
	Uri_AllowIdnStatic_mFABD19611F334DF87EC3FF2B9A1FA061CAE3A5C5,
	Uri_IsIntranet_mE98CA41B60FE0D4970737C8B7C81E5C63BFC07E1,
	Uri_get_UserDrivenParsing_mFF27964894B5C0432C37E425F319D6C915BCDC39,
	Uri_SetUserDrivenParsing_m0368CB47B9E9C35CB49B3F02DBE8DFED8756226B,
	Uri_get_SecuredPathIndex_mC59A2366D6F3667017F677351C4350C9541905AA,
	Uri_NotAny_mC5DC04B72B13D2997B055B9E41FCFEEC1CE5263D,
	Uri_InFact_m4CE890C86FA34154A044516D2F3C9463389220D7,
	Uri_StaticNotAny_mC07A1201FBE032238FCFA96E9FB5D60AEDACCC5A,
	Uri_StaticInFact_m77BB2AE094534AFD7B9F68683C2A4356A75E39B8,
	Uri_EnsureUriInfo_m4B46DF8611FA6D20D497D12D00544CFB466DCFA7,
	Uri_EnsureParseRemaining_m33815B5767FAFADB762F7E39364E6432340F210B,
	Uri_EnsureHostString_m4BD63AA5A88CA09572A8A7CF3B2EDDE17EF9C720,
	Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2,
	Uri__ctor_mA02DB222F4F35380DE2700D84F58EB42497FDDE4,
	Uri__ctor_m41A759BF295FB902084DD289849793E01A65A14E,
	Uri_CreateUri_m0A20410F2B8286AE6EDCD8B5AB3E104FA095808A,
	Uri__ctor_m42192656437FBEF1EEA8724D3EF2BB67DA0ED6BF,
	Uri_GetCombinedString_m7B95A90BC09E899CF41B0047E0B681FA7CEB8668,
	Uri_GetException_m2E833A8358C84BCF0397341160FADB1164290164,
	Uri__ctor_m020E8051B3C0C9E60D8A868CBA0774B3FFB7C3FF,
	Uri_System_Runtime_Serialization_ISerializable_GetObjectData_mD4773E59427820077E86F2B298DA1386028DAC9C,
	Uri_GetObjectData_mC8CCD55C21CB624E369258E27A89F363F8271E68,
	Uri_get_AbsolutePath_mA9A825E2BBD0A43AD76EB9A9765E29E45FE32F31,
	Uri_get_PrivateAbsolutePath_mC1CDB66963BF6D6AEDE0713D3CF0CE0647A6A532,
	Uri_get_AbsoluteUri_m4326730E572E7E3874021E802813EB6F49F7F99E,
	Uri_get_LocalPath_mA82E33D3A3CC238669E0CE3B7AD298AA9C8695D0,
	Uri_get_Authority_m8C0B264FFF519F0D0C2CB3F9B6B0E87D2F3835C1,
	Uri_get_IsDefaultPort_m610C804AFABCAEFA55A81753228D21EC87C4A304,
	Uri_get_IsFile_m06AB5A15E2A34BBC5177C6E902C5C9D7E766A213,
	Uri_get_IsLoopback_mCD7E1228C8296730CBD31C713B0A81B660D99BC4,
	Uri_get_PathAndQuery_mF079BA04B7A397B2729E5B5DEE72B3654A44E384,
	Uri_get_IsUnc_m70B47E68BDAE06A7E5362DCE5AAD97C12119AB99,
	Uri_get_Host_m2D942F397A36DBDA5E93452CBD983E0714018151,
	Uri_StaticIsFile_mD270A5F6C8B59AAF6256B4565ABE5917ABA545E3,
	Uri_get_InitializeLock_m45D6A11D14958E716715351E52207DCA808F00EE,
	Uri_InitializeUriConfig_m1B2F98DF0BB1A48FEB328E9D8BF3C23B32196FE2,
	Uri_GetLocalPath_m0E14B876FC912A64FC37663FBB3F65234FD4146E,
	Uri_get_Port_m4E64AB9B50CCC50E7B1F139D7AF1403FAF97147C,
	Uri_get_Query_m3F64514B4DB7C849C8255BA3FE08C6BE983D2D56,
	Uri_get_Fragment_m111666DD668AC59B9F3C3D3CEEEC7F70F6904D41,
	Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187,
	Uri_get_OriginalStringSwitched_m79E1C9F1C4E0ACCC85BB68841C167DDEA15CC72D,
	Uri_get_OriginalString_m56099E46276F0A52524347F1F46A2F88E948504F,
	Uri_get_DnsSafeHost_mC2D93669288A9C05CC13EE5754CEBF2D74D04704,
	Uri_get_IsAbsoluteUri_m8C189085F1C675DBC3148AA70C38074EC075D722,
	Uri_get_UserEscaped_m8F29E9A593E84E66DD4AC06CBD5880B93A5F0307,
	Uri_IsGenDelim_m376CCA5D00D019A69FD746C57D236A54EB9D3CF3,
	Uri_IsHexDigit_m3B2881FA99F0B2197F8017E70C3AE6EBF9849836,
	Uri_FromHex_m9EAC76A5DBFED86532FF7E1BBD809176337A227B,
	Uri_GetHashCode_m06066B9059649A690C5B4DE58D32DF227933F515,
	Uri_ToString_mB76863E11134B9635149E8E5F59AB75A74A760E2,
	Uri_op_Equality_mFED3D4AFAB090B76D2088C485507F8F702ADA18F,
	Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B,
	Uri_Equals_m432A30F5E72A0F2B729AC051892BF9E1F4D26629,
	Uri_ParseScheme_m61CAE16F1EC76725E5E0B23B09577F91BB223884,
	Uri_ParseMinimal_m35FCFE52F12315DA60733B807E7C0AB408C0A9CF,
	Uri_PrivateParseMinimal_mE1DA461DDA053787906BBEC2BC2B3046B1B329F0,
	Uri_PrivateParseMinimalIri_m29F0CA367080586448C648332F59BED0096AB2D0,
	Uri_CreateUriInfo_mC112D6E7002CA014AB6BEA878A66ECC46340FAAF,
	Uri_CreateHostString_m6FEC48641D3786D73B50D5DC792804C9A4D70C54,
	Uri_CreateHostStringHelper_m6C5EEA8BD2CDBCDD8A63FB74D3B801329EDE7BDD,
	Uri_GetHostViaCustomSyntax_mD591A4A615803E70A03D7C75E7C114E4E460AED3,
	Uri_GetParts_mF5840DC010E6D420EB5A0722320EDAAEA2D0269F,
	Uri_GetEscapedParts_m745615124808CB89A18D499988F4425F678938C4,
	Uri_GetUnescapedParts_m051A75B5D2DDAE55F107457CA468EE9A2563FED3,
	Uri_ReCreateParts_mF50263ABC7D750E939B57BF61FA48A8762144FD7,
	Uri_GetUriPartsFromUserString_m95A7794F28625B6AFD514C08765C27CAAE4BD1B6,
	Uri_ParseRemaining_mBAE0F9850CD84965B3793B17444C677D77D58774,
	Uri_ParseSchemeCheckImplicitFile_m92A658AE6C04E038058AD8E9581A41B06B6D6243,
	Uri_CheckKnownSchemes_mCA95AE251E7C9208570543B446385BCF2C727E8D,
	Uri_CheckSchemeSyntax_m1181D9BEA35D9D22852FD2FE815CABB267BA5A8F,
	Uri_CheckAuthorityHelper_m5046CE781115A54CAE3ACD2C03987F526A761387,
	Uri_CheckAuthorityHelperHandleDnsIri_m366E36029D4C9A00C0F216055B15F5E4805AED28,
	Uri_CheckAuthorityHelperHandleAnyHostIri_m76FEA31E3FEDF3D1614987C6484ECF15022AE9D8,
	Uri_FindEndOfComponent_mF276ABD008291C1FDC4B433A2F274058D06D8A6B,
	Uri_FindEndOfComponent_mDCDF860C405E9F31F7CFE9AFFE7C096812697AEF,
	Uri_CheckCanonical_mED3910E55213D1DFEAA5B33079E3A89D369B10B6,
	Uri_GetCanonicalPath_mDE02BFA56EDD09479DDB2A5A50F6DF5210CA73F2,
	Uri_UnescapeOnly_mB8F87981CDD4CFBFCD97EE668FF281CE26453F21,
	Uri_Compress_m02224082A9665F07D35AB6EB6E3198642F9E7BCF,
	Uri_CalculateCaseInsensitiveHashCode_m634FFDF8FCD81DECCB87161B153D1093C0A6FCE4,
	Uri_CombineUri_m77B7B8B856CF8100E51250247930963E7C544F91,
	Uri_IsLWS_m7A9F3B969CCEE56B9F98E40F1903C737DA7DF0D6,
	Uri_IsAsciiLetter_m93435A20DF4DEE153B87B26D07B9963F1BF4F373,
	Uri_IsAsciiLetterOrDigit_mEBA81E735141504B5804F0B3C94EC39B24AF8661,
	Uri_IsBidiControlCharacter_mB14EA5816A434B7CE382EB9ACBD1432916EC341D,
	Uri_StripBidiControlCharacter_m49D782826401F99D943C1AD76A75125879FF332F,
	Uri_CreateThis_mCB3DC849A426498E9CCD249850CBC69C9D67D864,
	Uri_InitializeUri_m5D99BD8533F3FAAD479B1193505B5B19B8C2F2DE,
	Uri_CheckForConfigLoad_m13002EFBBFD437183ED0A7FCBE5681C510996B0F,
	Uri_CheckForUnicode_m78E4938E82EE352BD5D8493AE0314224BC2543CD,
	Uri_CheckForEscapedUnreserved_mFE708A44EC74C7E773B96B82CD9A5DF25EF97D4A,
	Uri_TryCreate_mEEB6736FEDAF52AAE36ACC1EA1EC8CEBB7C52DAB,
	Uri_GetComponents_m0346CA8037531DE1FC630775E0BD1F5D1E7920B6,
	Uri_UnescapeDataString_mE1F40FC5CA3FF03DEE9EB01E3D8BD502D36A284D,
	Uri_EscapeUnescapeIri_mDE5E4BAE74E2C2373AD186732FEE7AD6E0EA7180,
	Uri__ctor_m4605489523A7A973459720C1BBE4039FD10557CD,
	Uri_CreateHelper_m024137C47351CA9959E4AC66F9443AEEE87D89C0,
	Uri_ResolveHelper_mEDF1549C3E9AC1CF6177DCF93B17D574411916BC,
	Uri_GetRelativeSerializationString_m5D0CD02E255BB96532F056BB382CF7D74D62BE58,
	Uri_GetComponentsHelper_m28B0D80FD94A40685C0F70652AB26755C457B2D3,
	Uri_CreateThisFromUri_m9A4AE7CD70F7EDE9154634057EBE600E74A5D544,
	Uri__cctor_m2B8179039C09C64936CF8262E3EF4A7E7C2F90F2,
	UriInfo__ctor_m24EFE7B4E03C9FFB8B797770D626680947C87D98,
	MoreInfo__ctor_mFE29F028646C12EDCAF7F0F78F9A85D52C10B83C,
	UriFormatException__ctor_mBA5F8C423C09F600B1AF895521C892EA356CA424,
	UriFormatException__ctor_mE1D46962CC168EB07B59D1265F5734A8F587567D,
	UriFormatException__ctor_mE7F5B073E9F9DB5F22536C54959BEB0D1E7DA1D5,
	UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_mED4C06AC35B7F94955ECC0D8F00383888C1127DC,
	UriHelper_EscapeString_mF0077A016F05127923308DF7E7E99BD7B9837E8B,
	UriHelper_EnsureDestinationSize_m64F4907D0411AAAD1C05E0AD0D2EB120DCBA9217,
	UriHelper_UnescapeString_mC172F713349E3D22985A92BC4F5B51D0BCEE61AF,
	UriHelper_UnescapeString_mD4815AEAF34E25D31AA4BB4A76B88055F0A49E89,
	UriHelper_MatchUTF8Sequence_m4835D9BB77C2701643B14D6FFD3D7057F8C9007F,
	UriHelper_EscapeAsciiChar_mFD7DE796BD53CBD2B1E73080FE0346D37F358902,
	UriHelper_EscapedAscii_m06D556717795E649EBBB30E4CBCF3D221C1FEB78,
	UriHelper_IsNotSafeForUnescape_m1D0461E7C5A3CFBD7A2A7F7322B66BC68CCE741D,
	UriHelper_IsReservedUnreservedOrHash_m3D7256DABA7F540F8D379FC1D1C54F1C63E46059,
	UriHelper_IsUnreserved_mAADC7DCEEA864AFB49311696ABBDD76811FAAE48,
	UriHelper_Is3986Unreserved_m3799F2ADA8C63DDB4995F82B974C8EC1DEEBA76A,
	UriHelper__cctor_m9537B8AAAA1D6EF77D29A179EC79F5511C662F27,
	UriParser_get_SchemeName_mFC9EFD71512A64E640866792CCB7DAC5187DE9F1,
	UriParser_get_DefaultPort_m050510870CCD4DD08DF7E98E2AF3D616446AD99D,
	UriParser_OnNewUri_m7D55337A7A9B6B67FB0AD7CA96F472751EF5A897,
	UriParser_InitializeAndValidate_m3E31D86FEE445E313BB7141F760626301767A0E0,
	UriParser_Resolve_mF21D3AA42AB1EC2B173617D76E4041EB3481D979,
	UriParser_GetComponents_m8A226F43638FA7CD135A651CDE3D4E475E8FC181,
	UriParser_get_ShouldUseLegacyV2Quirks_mD4C8DF67677ACCCC3B5E026099ECC0BDA24D96DD,
	UriParser__cctor_m00C2855D5C8C07790C5627BBB90AC84A7E8B6BC2,
	UriParser_get_Flags_mBCF4C3E94892F00B6E8856BFED1B650FB6A0C039,
	UriParser_NotAny_mC998A35DC290F35FFAFFB6A8B66C7B881F2559D3,
	UriParser_InFact_mDD42FA932B6830D99AA04C2AE7875BA5067C86F3,
	UriParser_IsAllSet_m74BEC412DC8AF3B1A33E11964EBB3164D9D8C77E,
	UriParser_IsFullMatch_m7B5F47A62FA721E550C5439FAA4C6AFAC34EB23E,
	UriParser__ctor_mAF168F2B88BC5301B722C1BAAD45E381FBA22E3D,
	UriParser_FindOrFetchAsUnknownV1Syntax_m3A57CA15FE27DC7982F186E8321B810B56EBD9AD,
	UriParser_get_IsSimple_mDDB03A5F6EEE6E92926A386655E5BBD553719B9C,
	UriParser_InternalOnNewUri_m7D55F5CD59A3B9BF57BC68F715A27CC1A44566CA,
	UriParser_InternalValidate_mF2FEB0E76E48B621EB2058FBE7DCC6A42A1681E2,
	UriParser_InternalResolve_m2A027789CB5105E32B09810E81810E8E35DD1F26,
	UriParser_InternalGetComponents_mFD4B211C71E0506AE4E4E99D92ECAF1780CE4674,
	BuiltInUriParser__ctor_m66250DC53CE01410149D46279D0B413FC1C5CA1C,
	DomainNameHelper_ParseCanonicalName_mFE738FD1237E2D9D9A1B27BA73F58B1689D451E4,
	DomainNameHelper_IsValid_mE9672A824F71E32116358C5FA029789855A4B461,
	DomainNameHelper_IsValidByIri_m13E2A6D9EBD42326C096F2423DBB0014763D47BF,
	DomainNameHelper_IdnEquivalent_m439593BAF7C6C801F577E7C27B0C4FBB1772E49F,
	DomainNameHelper_IdnEquivalent_m459BFF3040F8E6BFE1CE1C6432A1343A2ECF2F57,
	DomainNameHelper_IsIdnAce_m2231C778C4CCE141ACDC412737642CC365307445,
	DomainNameHelper_IsIdnAce_m9193B7D824FC6965820FCE980FEE3E0B40EA94B8,
	DomainNameHelper_UnicodeEquivalent_mA80E5FF3AD6AFBB9FC257ED1C4F0D31C8F0EFEC3,
	DomainNameHelper_UnicodeEquivalent_mD5A7A659B82F1FBF7ABF30009117CFBF8BC4D55F,
	DomainNameHelper_IsASCIILetterOrDigit_mD3B0B9BD4573FADEF6AC7330A5EC58C220455F01,
	DomainNameHelper_IsValidDomainLabelCharacter_mF6DEB20D9D03A8728B1C58006C40D6603B7D61D1,
	IPv4AddressHelper_ParseCanonicalName_m2A8C35045CE02D6FC2C4251F239D1C0074E0E813,
	IPv4AddressHelper_ParseHostNumber_m798FB6828971F70775D1125565A1D1025C897F14,
	IPv4AddressHelper_IsValid_mD96D91E0F3830414F4601A4521E71DE832A45843,
	IPv4AddressHelper_IsValidCanonical_mC27E31F1F043D68BC52719892D34EDDC7851B120,
	IPv4AddressHelper_ParseNonCanonical_mDCD1CD7FB85C4FFBF3070B1435A0D632C1A7B97E,
	IPv4AddressHelper_Parse_m08110623FAC14806376148D7C16AB95A428EA6CF,
	IPv4AddressHelper_ParseCanonical_m9D4552558C934E373D188DDA0BC1D1DEF5A62C33,
	IPv6AddressHelper_ParseCanonicalName_m3944530A7B686031653F97824EF712424E0BEE14,
	IPv6AddressHelper_CreateCanonicalName_m0B1C201DFADBEB58869E0BE8BFA967EEE64B096A,
	IPv6AddressHelper_FindCompressionRange_mE70B131DDA05D3059325246A5AB7F6029B6EF6BD,
	IPv6AddressHelper_ShouldHaveIpv4Embedded_m262634E9099141536C00213C1CFC123665A641DE,
	IPv6AddressHelper_InternalIsValid_m3BD7E7524455146D4464037DA3B65530E547AB7A,
	IPv6AddressHelper_IsValid_m2383F1A867665B04A4F2B8D82FF2B62BE51C2289,
	IPv6AddressHelper_IsValidStrict_m4D3701E2EE4840DA681BB9D9BDACDDDBAE80A575,
	IPv6AddressHelper_Parse_m36CE2F56465C4F9F7791E80E954C7C0ECBD16DFB,
	UncNameHelper_ParseCanonicalName_mCBE64015FD1B6B4829CEAA89625C1D44E280E37E,
	UncNameHelper_IsValid_m4055361D79684EE7B098C055B2E9068EE06F1EF6,
	IOAsyncCallback__ctor_m1010BF5234B0ECC2FEB54105BA15B313633C1985,
	IOAsyncCallback_Invoke_mB95F7E7F0E8326CE5364A30F42FC1073B0AB2D8B,
	IOAsyncCallback_BeginInvoke_mB8CACF8990B91DF4A695E597CEBE4BA09354C32C,
	IOAsyncCallback_EndInvoke_m397237D5497A9029CC3FACE692D11BDC1558A727,
	IOAsyncResult__ctor_m757FC526BBE4506EE956B2D919E99270B6C567F9,
	IOAsyncResult_Init_m6F5F39693CDDA46556EDAFFCFBDC229AFDAE8303,
	IOAsyncResult__ctor_m95A3D285F38AF74293A4956A6232F6B11DB8CFB9,
	IOAsyncResult_get_AsyncCallback_m1D3A0A3BCC3432B64968E7DC4D3A2ECAA6ABDB60,
	IOAsyncResult_get_AsyncState_m9D507541D18B17FFF72F90D8DBB3F301213EA4A7,
	IOAsyncResult_get_AsyncWaitHandle_mBB8E187CEE0D781E6CC1C0E4576A82D02936B9C5,
	IOAsyncResult_get_CompletedSynchronously_m55D4C57A46BF019D4FAF05ABE30E6EEEA6A78277,
	IOAsyncResult_set_CompletedSynchronously_mF2CA3BB7E351A84EEC942B66816756361616EA75,
	IOAsyncResult_get_IsCompleted_m15FEFA884BA3ACC35503E54F08E209AC5A94BADF,
	IOAsyncResult_set_IsCompleted_mEC1108082A9F409122195D340A5EC901D67F013E,
	NULL,
	IOSelectorJob__ctor_m2E68791B3E12177FE5236874FA9BDBE1CA97C676,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem_mF6591C2577197BFD98B2423F8696E5816191FF3F,
	IOSelectorJob_System_Threading_IThreadPoolWorkItem_MarkAborted_m3BB2FE95A7033F6994973BF8814C16F4B163A0D6,
	IOSelectorJob_MarkDisposed_m2B168E38A597550A3605ABF0032F67967CD43077,
	IOSelector_Add_m43E2807BB2C9AE5ACB3ECDBC4E7BA2FA967504D1,
	Platform_uname_m0769828FE0BC855E1DE4129D7EBE09E999D7AB7D,
	Platform_CheckOS_mE140C06A839F2EA49C9A0FE795A85311E283CC45,
	Platform_get_IsMacOS_m7E1B4DAEFA519F65C50D16CC5DEA7A9FA0EE4D77,
	UriTypeConverter__ctor_m1CAEEF1C615B28212B83C76D892938E0A77D3A64,
	Regex__ctor_mFDE4B6A423C15AA60BF9FEC7D4D7DFD4657D7C6E,
	Regex__ctor_m2769A5BA7B7A835514F6C0E4D30FAD467C6B1B0C,
	Regex__ctor_mEF4515C4C44DF8BE410F388C82CC679D743FB5CD,
	Regex__ctor_m87918FB2A856E264A492D2A2B4B412BE4E2370BB,
	Regex__ctor_mF11825F6E24D7D780BD34C74C96392DEC3602A5D,
	Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m95B0E2523A72DF6AC56DEA7CDA286F771E06B0FD,
	Regex_ValidateMatchTimeout_m71FE7188780DEAD57093B7345CCC50D0159218BE,
	Regex_InitDefaultMatchTimeout_mC91736B02BD12B92CBD93C329E7A8233CD0B9DA4,
	Regex_get_Options_m823A30690EEA63798DB8497F3E9CF062412B8653,
	Regex_get_MatchTimeout_mD484D1CF0B6BF8516A08991D1387761CAE2340D6,
	Regex_get_RightToLeft_m546BF531C94563A11427CD24367525462CDB4509,
	Regex_ToString_mF967EF5E8BD74C3692379B8436AB8D3C5963FA75,
	Regex_GroupNameFromNumber_mDA7668FB37424BF0F6CA16764F174A6647270FFA,
	Regex_GroupNumberFromName_m770A1CA23339D6F88A539C08A6B18274780E0393,
	Regex_IsMatch_m3C44A8D92E43EA8CC8D623ECC394B27F09E2D5DA,
	Regex_IsMatch_m90348BB44AD120A322F411001522DB0758A6678B,
	Regex_IsMatch_m79684C4D2CE6C5495BCCE9A32AC029E1E5950B7C,
	Regex_IsMatch_m2FB867817B341A5FA3E64A41F31820C9658F22A5,
	Regex_Match_mA36A33D32F895CE84957DC7DA82E2CD45EF19EEA,
	Regex_Matches_mD7433E63F67A83DAFE4EFC4041ED572BD3790165,
	Regex_Matches_m8F969BF2F5491F924A581C69185C38C3C6FE021F,
	Regex_Matches_m6660280F055E0F746058C002B718CAB701CF4516,
	Regex_Matches_mBC92CBE041861471127A1764BB4318DCD2C62F26,
	Regex_Split_mACE8B6D2A871185FE109E9D131104FF28E743C33,
	Regex_Split_mB29A9BB688113C29635F3AC0C1B6E9754073CDF7,
	Regex_Split_m5E86F18B64F94BC89B5DCFEB05FDA1244344F8D1,
	Regex_Split_mA1DD4EB92F75C783439B5FE691E5323865BA86F3,
	Regex_InitializeReferences_m2CD000C1AFAA8B214F32D989C7D116B684A31840,
	Regex_Run_m74FB5EF178DF43F88B9058B94939F557479B93FC,
	Regex_LookupCachedAndUpdate_m88CA03797C5ED796BD5E1319DF6B1B6B6FCE6C0D,
	Regex_CacheCode_m68F93FF3B918776D190D4DB807A3323691C77F0A,
	Regex_UseOptionR_m84945EDBEDCD61DBCEB691C929CA28F4B0AF4B49,
	Regex_UseOptionInvariant_m0CA185DBDB15932BB8A8B4F53EB8ACECEC006566,
	Regex__cctor_m86CE9B8D0FF5F2B54D4FF27D2213A1E6917477DF,
	CachedCodeEntry__ctor_m78BCA6060E7D83B172F998AF60D17FB41BE703B8,
	ExclusiveReference_Get_mE79B077388AFBD19A4524E630701783E7DCE61E4,
	ExclusiveReference_Release_m9A1577138872106EA54A04EA4AB77F710CEDE336,
	ExclusiveReference__ctor_m0427943C75CBB283EF26034339E3D412A080B5D7,
	SharedReference__ctor_m48E749BC646BEC89282B8F336325D42DE48CFC81,
	RegexBoyerMoore__ctor_m39674FB18BB75DD891AAE3781FDA0CCDDEBC2F8C,
	RegexBoyerMoore_MatchPattern_m41D57E11972B2142649662886DA145AFE396F602,
	RegexBoyerMoore_IsMatch_m820D06ED51C062451AFAF22682D2EB06C8DFABD9,
	RegexBoyerMoore_Scan_m204A42056131A694B6D31FC69563355788CABD67,
	RegexBoyerMoore_ToString_mB0A62E68E8A3CAC5CE3AC45E1C54FA72DFB626F6,
	Capture__ctor_m6CC8A5385C7BD6B8AE63F9812293EC3252A65B3B,
	Capture_get_Index_m46BE6FFC6E8474F55B0504269903F287C45C4B31,
	Capture_get_Length_mB41E1D86823156F57D3FE0B9F31BF3C6DD3D3C94,
	Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C,
	Capture_ToString_mD49A28CAD5727E8F629643EDE0C6BAB476BA639E,
	Capture__ctor_m3ED807279C93FFCE8BE4EAF447DA01E62EF93D7B,
	CaptureCollection__ctor_m01C3DD351537D287D2ED99B7E8D0BC097F9C73BE,
	CaptureCollection_get_SyncRoot_m9ABF11C6512C617D3675D4DEADBF3DEF82508B83,
	CaptureCollection_get_IsSynchronized_mD13199DC4806A69D7396FEF31F57177C5CBAE06C,
	CaptureCollection_get_Count_m23E4D0EE1C878006553F7065AB77CB72147A1F50,
	CaptureCollection_get_Item_mD9CE0C1F3F1E0329409B5E7FB048264533722054,
	CaptureCollection_CopyTo_m6E065B3E70F6982CD53B8E4644D2D284FB33C36F,
	CaptureCollection_GetEnumerator_mB75C81A6E3B8224C667CD5FC1C8B5C5B7E2FCD03,
	CaptureCollection_GetCapture_mEADF77754DFD5D699564C9C0CE4A3DA162AB620B,
	CaptureCollection__ctor_m7CDC65BD8C8D56B84D324F56B1263A29E9B7F268,
	CaptureEnumerator__ctor_mAA9418C06B6BF091F30BE83BBAD7D5CF764258FB,
	CaptureEnumerator_MoveNext_m9BF27BBD6361C1DD7AF7E0F3D9EA2421855916D4,
	CaptureEnumerator_get_Current_m77963A5C0D5DFAFC80A3B2979E55B8DC60A854EC,
	CaptureEnumerator_get_Capture_m392E86577C0832789F9D260B47BF1609129C356B,
	CaptureEnumerator_Reset_m8035CE1B547C403D2AD3A8416961253F1EC2A422,
	RegexCharClass__cctor_m5170E52D9864BA712125FB33F309FE9E37869EA8,
	RegexCharClass__ctor_mAA44510F3E5001A8612355B4FFB718D9DDC74264,
	RegexCharClass__ctor_mB05A6CC8015C5D545C639682454A524DE7E2EA97,
	RegexCharClass_get_CanMerge_mC27A4CF83CFBEF3741A3DB4F99ABA6DE76B57837,
	RegexCharClass_set_Negate_mEB8659D83748A4DF28CDDFC3AC573A6504385E09,
	RegexCharClass_AddChar_m4C4BFD42572978A9F98ADE75BE3811593957A9E3,
	RegexCharClass_AddCharClass_m0E5DD1105844AFB7CE45B5C801304B5C803FB5CA,
	RegexCharClass_AddSet_mFFDE070E770BE967173D630AD50010C3397F7B97,
	RegexCharClass_AddSubtraction_m17E538235B02A1435BD43D4FE4501DA67AA35145,
	RegexCharClass_AddRange_mCFE9B670B3EBB13A5CDB694B1D1D6B1C0249D110,
	RegexCharClass_AddCategoryFromName_m9AD2D607E1E34A52CBC26FC38D468905C43A9202,
	RegexCharClass_AddCategory_m6A4625370DA8927DF5342275CB1F6155FC2BA255,
	RegexCharClass_AddLowercase_m01C1B11EB0B82E065276C7ECF60725886F59A07A,
	RegexCharClass_AddLowercaseRange_mCDDE9661C9C300DFEB51A8FE36E2F790E3E75D75,
	RegexCharClass_AddWord_m1D2553B878162B32B0548536AE4C3EE673041CA0,
	RegexCharClass_AddSpace_mC6557749D96EBD114BCB133D14887A29304196D8,
	RegexCharClass_AddDigit_mC4DE43D884E575729BB2E575DA5552989368F6B3,
	RegexCharClass_SingletonChar_m01C15732FAD399460FF5BB449B8177A77CAB1DB9,
	RegexCharClass_IsMergeable_mB9A0CD8306728BAFA5460C7FD748A2A7AD4BA448,
	RegexCharClass_IsEmpty_mAD6C63FE25C4CF3E52A20185418925D12C4C07CF,
	RegexCharClass_IsSingleton_m89D3E8460B0E7020DB0ABA607AC2F76FB9A34F1A,
	RegexCharClass_IsSingletonInverse_m3E75D541C85AD842B9EB80705D6869EDB3F6928D,
	RegexCharClass_IsSubtraction_m3C9EF97AFE7E4BCC24A2DF10834BF62279D7EE26,
	RegexCharClass_IsNegated_m9CEDECE7EDA98ACD502E75783CA631A719DBC675,
	RegexCharClass_IsECMAWordChar_m6E7FC296DB816D89E3D6CF8672DCE6DFC519D741,
	RegexCharClass_IsWordChar_m2DF03D32DAB403138E397CB05F45D37BD50EB18C,
	RegexCharClass_CharInClass_m194AAA57BBBD30E78E70255D6F53FAFDB785EC0E,
	RegexCharClass_CharInClassRecursive_m5560DBADE1463FDEC38643C72CDF2FD5B3F69A5F,
	RegexCharClass_CharInClassInternal_m5D1634F64092E4BD9EB6427447F952983211A760,
	RegexCharClass_CharInCategory_mCDE20DF783F8D4E4403EC7F00F9C12E34D86C2DD,
	RegexCharClass_CharInCategoryGroup_m28E498004F5EA6445C83F1B8EB4A776C210D30C5,
	RegexCharClass_NegateCategory_mF2E03FFFE79E427F39D9368013A334F5BD118E13,
	RegexCharClass_Parse_mBC3780FFF0DDFB62CA2085746618E6C256E8D86C,
	RegexCharClass_ParseRecursive_mF7E7DD4EB594C9C30A60E72CD3CFD4EC1D822CF5,
	RegexCharClass_RangeCount_mEACBB4BD08CE18A9C4F0C433A7D6C5726F563E2E,
	RegexCharClass_ToStringClass_m7A760D96732A03D46C4060064B3FC58349D2B4D5,
	RegexCharClass_GetRangeAt_mE563FF8072DD9B4E1179F55416CCD7FC4EB2C4FC,
	RegexCharClass_Canonicalize_m44EEFB16DB02E73C1E7280D15DAE98E50F4D6FA4,
	RegexCharClass_SetFromProperty_mA33170AF599765B5FDE8611BED646A850FB2330E,
	LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187,
	SingleRangeComparer_Compare_mF2CAD555BAC4D9CBF6A8F90D829CB528BD7BCCC9,
	SingleRangeComparer__ctor_m9E44BF07F0F0C9E565E0BA050C1A26F496226BAD,
	SingleRange__ctor_m4674722AFC97A111D2466AE2050C2E4E6E57303E,
	RegexCode__ctor_mBCB059D3E98AEA211794E89DDF99193231F298CA,
	RegexCode_OpcodeBacktracks_mDA23B91B55FE4991B168BF8E18F6DDDC7667B882,
	RegexFCD_FirstChars_mC60DC5CA9A078998CB55594436AB9CBFD86478FB,
	RegexFCD_Prefix_m50B30C508C6745832FD3A76B2169462455C1A28E,
	RegexFCD_Anchors_m562FA644F10503074714E0F58A2A00F9F727D75E,
	RegexFCD_AnchorFromType_m4B458E2C589633A43F9324C14F9192EF68F80A14,
	RegexFCD__ctor_mFC6A3309CAFA8C3C2B94094AD443738823388A3B,
	RegexFCD_PushInt_m63817D3969DF7BD31B7C93D43EE45C4AF539868F,
	RegexFCD_IntIsEmpty_mE825A8A0DF9D5BA6618357ABBA93421D4099AAEB,
	RegexFCD_PopInt_m1E4B64F2F6DDBCB7495E673540CF25FDD4D01B7E,
	RegexFCD_PushFC_mBE154E351E7C49FFFC26E603B4672136D91479C7,
	RegexFCD_FCIsEmpty_m57FDE5D4E352620B7773AD54B286531CA21FCDAD,
	RegexFCD_PopFC_m987A35E9ADF69335799EDEEB12C2CD3A3F40FB6E,
	RegexFCD_TopFC_m26ED21621830CF30FDA46AE8D7F3AC9F50DE416F,
	RegexFCD_RegexFCFromRegexTree_mA85E74765529D05113116C73EC397E832D81D0BC,
	RegexFCD_SkipChild_m661F5D339305B97A37D855240A0B9AF500FE03F6,
	RegexFCD_CalculateFC_m2267FAA6BCA80275E21DC9A0BAF90BBC85204BD8,
	RegexFC__ctor_m354E8197215F3EE9097B69E783B744365A38EF20,
	RegexFC__ctor_m023D08ED0365AE9AAC539333B4390A8052C59229,
	RegexFC__ctor_mDCBBCCC1BB476741943D7F9AD88731B1DCA0C1B5,
	RegexFC_AddFC_m5B05CD1D7700817843366EC1DF728977EDD4D11E,
	RegexFC_GetFirstChars_m7252E826F9A5BC1842A5A255BAC5A36EE8DADAF5,
	RegexFC_IsCaseInsensitive_mD87B0C49AAEBB61215F09A9C5ABF8CCB8B5AB64E,
	RegexPrefix__ctor_m93489A4FF55425A15BF5390E77EE0B84F6F9364C,
	RegexPrefix_get_Prefix_m7137EC6CA5B857F49946E2EAEA19784040D430CF,
	RegexPrefix_get_CaseInsensitive_m76E04480FA9FFAE4C5031CA12F4AE9A2576212C0,
	RegexPrefix_get_Empty_mAD10DECDBC7C51F9ACF5C02E3191874252DF9B8B,
	RegexPrefix__cctor_mCDCE7EDB98AFB119EE0281D37F7BC019AD28773D,
	Group__ctor_mECF4574592517D363C35ADC07F9D6F7E7DE6B4F6,
	Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521,
	Group_get_Captures_m64BC9B122FEF68D0430D27CD254624AE35A2BF4F,
	Group__cctor_m213E26F039439904671CFD5DAF5D85B47D5CBE68,
	Group__ctor_mDCB3D51B8A672B342F452177D42D6D3F2F9BA91A,
	GroupCollection__ctor_mDFB6267479B597E32357B584847B3DA68F74D222,
	GroupCollection_get_SyncRoot_m386A1A40A6B645B1F111618FEA771D48DB956D3B,
	GroupCollection_get_IsSynchronized_mC179A5EEE97BC0B080A97E41B8BE381175789BEB,
	GroupCollection_get_Count_mBDDCA62E15FC586F0CCBD75F006BF0B08713E26E,
	GroupCollection_get_Item_m5ABF137CEFD5E2F2FE2EC76835963594300D4177,
	GroupCollection_get_Item_m62ECD0C4A53BFB8F0EAFB2BD17F047451B60D886,
	GroupCollection_GetGroup_m222E408F24D187B48C39E38DF0F8C80267A98650,
	GroupCollection_GetGroupImpl_m0E3C3044F8ECDDA91FBF8FE7EA69B2F37033A8BD,
	GroupCollection_CopyTo_m1CD3BAE06E5932597BC6EDF49494A6AB3ABE63E2,
	GroupCollection_GetEnumerator_m69149E9FF8C5E3E6D3AF8C54B00A5A893B2146A4,
	GroupCollection__ctor_mBFA81C79BD34180370D227533C149E106234A902,
	GroupEnumerator__ctor_m068EE333FA25ED143CEE67A87050623565547092,
	GroupEnumerator_MoveNext_mE64A4AE66D4732D871E1E8443DA1EA0296A6D87C,
	GroupEnumerator_get_Current_mE407A8FC00E5762924C8965BD818A81F762D0B94,
	GroupEnumerator_get_Capture_m95A3AE336DB603A5FF6F66FC60E77C1C17300EC2,
	GroupEnumerator_Reset_m35E9C15B31794E7B1F8B163E299CE12812A6DFB7,
	RegexInterpreter__ctor_m7B9BA594CF5F338B2E257EDADC2481826BF4C6BB,
	RegexInterpreter_InitTrackCount_mD93771C3D75617898528698E29AD09B7EA5EE24B,
	RegexInterpreter_Advance_mCD1A51680CD0318DDF6D104DE8C722FCCC468CCA,
	RegexInterpreter_Advance_m779870D7E1FA3580492E2E8B75E2805613525AF7,
	RegexInterpreter_Goto_m438DE9CE790DF0757383C91126DEA68C6B0DADFE,
	RegexInterpreter_Textto_m6CE60A7C8FA9F9CEECD26BD6025F055EB64887AA,
	RegexInterpreter_Trackto_m0C7B05A7385BE3F9BB096FE28DC22942A9F96783,
	RegexInterpreter_Textstart_mE71CFC006954F38B9EB6CD85BCC0867E63BF0894,
	RegexInterpreter_Textpos_mC66F0DE729E76EDA0BEEA7B1ABEE369BA6C81D5B,
	RegexInterpreter_Trackpos_m472ADA4F5E1D07E71896E42714DFB723CB016842,
	RegexInterpreter_TrackPush_m5A8B9F863211AAEC7E5FAD14ECDDAFDE3059210D,
	RegexInterpreter_TrackPush_mB2AF47E651D2A3853A719EFB908C30D27EC2FF5F,
	RegexInterpreter_TrackPush_m3EA36B28D636D1C617F85CEA57650344B562A38F,
	RegexInterpreter_TrackPush_mBCAADB1DF177D91DC9AA4518DCDB3AAF7D6C0E15,
	RegexInterpreter_TrackPush2_m4EBCF8B183717311AEE3FAA6AD6FAF1F08B14F77,
	RegexInterpreter_TrackPush2_mD591F73FDDF69084636E0834BCCD530B057898FF,
	RegexInterpreter_Backtrack_m46612DE84F898D1656DE30F3BA86E93209E279E1,
	RegexInterpreter_SetOperator_m5B633C33EE4CD85364E7C60003ACE8EA93FDAC91,
	RegexInterpreter_TrackPop_m84B55BE8F346693942045E937174EC8C1AE91F08,
	RegexInterpreter_TrackPop_m73AB2E002DB92E231B62510861277320F76BEEED,
	RegexInterpreter_TrackPeek_m4EF7918CC0F10FFF7E73C1C9D13E74D1D8D13318,
	RegexInterpreter_TrackPeek_mEECF3E94E7823A68474C691F695D71087729553C,
	RegexInterpreter_StackPush_mC28C3F8B3C811C4DCA6CD312F7F487206C871E55,
	RegexInterpreter_StackPush_m911FF20379BF912884E7F98BB59CFB6C51AA1861,
	RegexInterpreter_StackPop_mD057CA7B190ED8FBD33C6CE48E1F28E4B09FC4F2,
	RegexInterpreter_StackPop_m90FC35FD76D9B63851ECFD641DAA08B1B58C7B91,
	RegexInterpreter_StackPeek_m08C28311048F6B075379EE46B924FC211BA48EC6,
	RegexInterpreter_StackPeek_m308DE22A8E1AF524319E7F1D5A94DBFEC37700ED,
	RegexInterpreter_Operator_m4DE2EAA1744D15294F2767D5217F753FE74FAC0B,
	RegexInterpreter_Operand_m1ACB9C398C9C7ADF8DA58824877B99F08F181526,
	RegexInterpreter_Leftchars_m3A200CD41FFE8C89CCB85B3CC7A367E32C5988D1,
	RegexInterpreter_Rightchars_m3DB37A53D6C3DC3311C9EA020690CC0824959D30,
	RegexInterpreter_Bump_mC33CB8A0CC0DF1C69F11115BD225D2D8B63F8753,
	RegexInterpreter_Forwardchars_mE5E437E285604CDC60551C112F7B2CEF7297F4ED,
	RegexInterpreter_Forwardcharnext_mD2C6694CC31BC75D3E20C511D1004D28AAE1390F,
	RegexInterpreter_Stringmatch_m543BC6834400A925D2603AE6FBB47944694AFDF1,
	RegexInterpreter_Refmatch_m52369ADBF64E25A9EEEBE216939454EBB8D8E138,
	RegexInterpreter_Backwardnext_mD10CE2A9E229D0655EF01565DB39C902654D00CD,
	RegexInterpreter_CharAt_mAE2AF6D293F53C2D8961C2D0C145BC3ADF6EC105,
	RegexInterpreter_FindFirstChar_m95CDB0ECB99F7850479D951A5F32BB6B19B91F44,
	RegexInterpreter_Go_mBE9DEAECBD68F60DDFE2BB5A8C24CF92A1FB503A,
	Match_get_Empty_m5D3AE3D0580F06ED901EE69FCCED6AF44715528F,
	Match__ctor_m08A8262ACD89C9E47AA7168D0F2CC6E3338855D7,
	Match_Reset_m9EDCC3689E8A5A57A644946AEC3E41C1901C7DAF,
	Match_get_Groups_m06CCC0108A4F5EAD5968631D7A8C9FFE730BDC42,
	Match_NextMatch_mA9BB438B4D7DE12D45A73720C063CFFF15FE596D,
	Match_AddMatch_m3C9178A7D6F8175A7628E4BE579FD209B7C7650A,
	Match_BalanceMatch_mCC0EC358E4C33191B896226512FE8F086EFEA4CF,
	Match_RemoveMatch_m6268C01D537F0BACB7DD707E11FA873C3E1918C7,
	Match_IsMatched_m7686CA418F588EC198A82DE287326C46F4CBDD5F,
	Match_MatchIndex_mA39CA9F84C3872675CB9C76EC342EFB30A2B5DA0,
	Match_MatchLength_m25492EACF56E8211FEEC4856F93D7A19D30A984F,
	Match_Tidy_m88B2494631267F8CF7E90F3305F713550ED39CE8,
	Match__cctor_m9158A9D469720E89CD9004B65F55EEEF5E330C0E,
	Match__ctor_m38BC8AD7EEFA99C6FC25587D6FE56450FA849E0C,
	MatchSparse__ctor_mEA523FCAF96D8A81401D3ED010CACE4463CCE811,
	MatchSparse_get_Groups_m2B6C3D8D28A4C0035833C3805882E7906642FACF,
	MatchCollection__ctor_m2684A94B54FD44877B46CA7B9A84E93237D9D0F7,
	MatchCollection_GetMatch_m6DA1F0C20625CA388837F7482DD419D7658B8D87,
	MatchCollection_get_Count_m67E3B1EA364054C83E11EEC80C4DB68B45BF01D9,
	MatchCollection_get_SyncRoot_m008A67E58936E44E12041714AAA165C5DB7080CA,
	MatchCollection_get_IsSynchronized_mCEFEACCB68B1FDDC16AC60E0960F10B2496C5A74,
	MatchCollection_get_Item_m9B6304A71B1348FDBBE222D8AE234BC6422B2277,
	MatchCollection_CopyTo_m12913FC3360BDCB05813BAF720D3C9BB947511A1,
	MatchCollection_GetEnumerator_mA2DE46F156BCE530FDDDDDCF1E413A6495CDE993,
	MatchCollection__cctor_m9E3687872EC4C04DEC341DA44CEB64342256BF86,
	MatchCollection__ctor_m8D9C2405DD6B80443C4E5BFD9B4F1E92F9F7F802,
	MatchEnumerator__ctor_m1A7719BA6E7E383B4631C4C39FF7A4C703468287,
	MatchEnumerator_MoveNext_m29652A098BAC42A976AC536C378DB8EAE5EE3E80,
	MatchEnumerator_get_Current_m28D59328A0FF6B5CE611E4920A298CB999C1D389,
	MatchEnumerator_Reset_mFB7DF97D867D5C5436B9665EBF26BDBB58465F78,
	RegexMatchTimeoutException__ctor_mCCDB413A8F68D924B276B8FED2744E81BE4C89AF,
	RegexMatchTimeoutException__ctor_m4EFD030442FEEC81E59AB8CDF35D603A5D551058,
	RegexMatchTimeoutException__ctor_m554FE8CFA7F42483517F11948A61E4D3C9F44D07,
	RegexMatchTimeoutException_System_Runtime_Serialization_ISerializable_GetObjectData_m78FACBA38C002E195A507A32CDAB768D8DBC93E7,
	RegexMatchTimeoutException_Init_m09AF601CC7369F2D7E1300B166517FE7D20EB6F1,
	RegexMatchTimeoutException_Init_m0F165C7170A46724458C06DA5EC05536D8CB95B7,
	RegexNode__ctor_m29676E9646F598C827F25E906EEB6EA14A6FD5DB,
	RegexNode__ctor_m92FB70D6C28D7E021A2A1ACBAD583461AB014F11,
	RegexNode__ctor_m89ACB97FB7FE8B38C0D69F0F2445A7916BC67D85,
	RegexNode__ctor_mAE76BA90AA85F205CB0CC6799F06D1AD85A49F64,
	RegexNode__ctor_m0EFEB707603B3C667626117E09A7EED58BBEC6D4,
	RegexNode_UseOptionR_mB931929BBD1D89F8B263AA846C1665775096713E,
	RegexNode_ReverseLeft_m994638E4886D007B9B29BC23EA3C8D76A92099FD,
	RegexNode_MakeRep_mC310B028FBE3BD5EB80F83E4E05B891ADEE45C22,
	RegexNode_Reduce_mE9E22C30C296E328ABC7EDC9C52F18059FAE27C1,
	RegexNode_StripEnation_mE19E0A57BCE0D0BF47F51A5103C08FCC7BB9E24F,
	RegexNode_ReduceGroup_m069FA93D4F88006F18473E647069B349683B9204,
	RegexNode_ReduceRep_m726F03D9E2420F276A37777942B66D15CA73F77E,
	RegexNode_ReduceSet_m912F4A0DFF694EB14DE520599369A811C2E9D10D,
	RegexNode_ReduceAlternation_m60EECC172A975620A5118D14D6ECF8B846ECED9F,
	RegexNode_ReduceConcatenation_m4BE1B6DBBC0F4BAB9A3873414B5EE77D825AD53B,
	RegexNode_MakeQuantifier_m1332537AA6BCCCD68A3E59EA7994CCFE69A19444,
	RegexNode_AddChild_m734A86A25E6074316FAC566F7D127253F7B71703,
	RegexNode_Child_m5AA4FFDDCCFA22FE70BA0F236F19A963AEF72079,
	RegexNode_ChildCount_m23B6965575DB0DBC1D90212820DEA144FCB06996,
	RegexNode_Type_mFA1C2F11F3487BB1BCBA7F58FFB7975EC18E9CD4,
	RegexParser_Parse_mD206BB554B6087ED35C5F744D72A93A07721D789,
	RegexParser__ctor_mC69D13B4FC323EE77392251139C5F2C456171310,
	RegexParser_SetPattern_m4B385D83A9680A1B2707EBCA8659B6E12EDD5E46,
	RegexParser_Reset_mEC49D1DCEBC555768D2FB90DA42374F1C547E328,
	RegexParser_ScanRegex_m62049A6C66D6D8CDD795B9C740283D1EC85126DB,
	RegexParser_ScanCharClass_mF775DA8BFD214C64BC3D91E07436543717976DC4,
	RegexParser_ScanCharClass_mFE669B1C9CB6652157D9E8DAEE5B924C581AE81F,
	RegexParser_ScanGroupOpen_mA4918ACA08C7E4C945197BBE4EF734AF5B35096C,
	RegexParser_ScanBlank_m99BA3097E182DE425BE0137BAFDD0218F0DF360D,
	RegexParser_ScanBackslash_m45E9E0ABDB7DF70F58850B48905DE9DE026EA64C,
	RegexParser_ScanBasicBackslash_m5F438E56ACBE272622D39D4208B2D5ED536DD7B8,
	RegexParser_ScanCapname_m1D4DB4E5DA312CBCA841391F729CC626DC657D85,
	RegexParser_ScanOctal_mCF3925D06CBBA1DD0CB60199F59991D099430C3A,
	RegexParser_ScanDecimal_mE966D2C7F357215A52F88120F40A37707C1AB33A,
	RegexParser_ScanHex_m296FC19218F8186D2C1B630DF9F138CFB195625E,
	RegexParser_HexDigit_m4BAEE94B2077B96A4B1D56C459EFB2B1938E1174,
	RegexParser_ScanControl_m244F59DA2B0711D154B7D68CCB5765390C65B5B8,
	RegexParser_IsOnlyTopOption_m66FE256A81BBD173C96B90EE9EBE9721F9ED16A1,
	RegexParser_ScanOptions_m5CD283C15179190846762B90F78F0A87E7495537,
	RegexParser_ScanCharEscape_mF8821EE73F3F8A5D4267642F6E4F0A666FA5E7A6,
	RegexParser_ParseProperty_m69C638E755F0A5C1A2BC8E08827E6124889C2CEF,
	RegexParser_TypeFromCode_m0969E0D233AC767039B0A333901F47A22BABE0E8,
	RegexParser_OptionFromCode_m6BCD10574DF5E08599B5F7FC8E947E3DC69EE151,
	RegexParser_CountCaptures_m5255DE4B24B8D9BA7B2A2A7A1FD79A67B36F4634,
	RegexParser_NoteCaptureSlot_m8B2D20B819C86E427837C879CCA72B9BCD1C4AA8,
	RegexParser_NoteCaptureName_m96A5301077C4C6554E993A2266EA40B690F455C4,
	RegexParser_AssignNameSlots_m168605CD3A6D6AAA52AFFDB13BE3D5DFAC3FE94B,
	RegexParser_CaptureSlotFromName_mE3FD1D57EB29D4C7A0E4029E4D4785297798EE43,
	RegexParser_IsCaptureSlot_m80540BE449D9B98B2B159CD5169F7AA6DB63CB80,
	RegexParser_IsCaptureName_mBFB85B16ED80CA59452491B4C3278C77ADCA1FDF,
	RegexParser_UseOptionN_mE9C62585222B2D99D295708E4486C952973F35D5,
	RegexParser_UseOptionI_mFA3B59BD8A6F61626E20F8FE909A23289E694263,
	RegexParser_UseOptionM_mDE945B2DE782D12A5013D408F4FFBCABEC48C63D,
	RegexParser_UseOptionS_mE96EEA754E1EEEF658AAF73885D048342D1D200E,
	RegexParser_UseOptionX_mD63DEED6741AEA0B3F6CC4239712A4B2EF690810,
	RegexParser_UseOptionE_mC171EEF863E091591BAD771F16B72D742F044096,
	RegexParser_IsSpecial_mFF68456E944ACAF048B4F96F5758FFDD1D5E7DCD,
	RegexParser_IsStopperX_m0BCF2DB4B0E1324C9109C8BFD486FC5DBA8DC646,
	RegexParser_IsQuantifier_mE0620E30A63AD0C0DB9550A52A4A7D0BB4BC3A31,
	RegexParser_IsTrueQuantifier_m4AA95A9CE7CD78600E8D525ECA5A095984FBC63F,
	RegexParser_IsSpace_m1E41FA7DD1FB93BF9220530CA91B35EF08879F30,
	RegexParser_AddConcatenate_m3743C87DFCD1784A949BFDCE9443845CCD630A5D,
	RegexParser_PushGroup_m6F4246ECA3A6F29DA096C3B41D97652427E3175E,
	RegexParser_PopGroup_m43AB1FB84E11D8DFF6C5D38B9CAD324E5425DD74,
	RegexParser_EmptyStack_mB65B33DCF98A5967407B7C6A07F8799681202BE5,
	RegexParser_StartGroup_m36A6C0ED245D844CD2E630160994C3F2D7CCA994,
	RegexParser_AddAlternate_mDBDEEF8180738DE0D31CC05B0E223EFF0D66939B,
	RegexParser_AddConcatenate_mF80F14978ED6626A8F8E5F37AEB3B946A01192C1,
	RegexParser_AddConcatenate_m81CC39ED404E571347F0E97650F3BEB14639B1B0,
	RegexParser_Unit_mEAEEAC39DBE372DC762644F49E6E163CA37EA34E,
	RegexParser_AddUnitOne_m72DFA82092408E9C63544126093D98390E0C2145,
	RegexParser_AddUnitNotone_mAA142A94BB7B6A358BA36A3920DB139382889749,
	RegexParser_AddUnitSet_m024168548909EA2DF649E6194D60135312ADF5B3,
	RegexParser_AddUnitNode_m6EE11A898128A169E41A5C7B38B1F3DD314FB304,
	RegexParser_AddUnitType_m1ECB4025CA3B580F051CF6891D9C96922CA2FA7A,
	RegexParser_AddGroup_m54BBB919E4D4AD05EFECBC3ECBE46FC4A90569EA,
	RegexParser_PushOptions_m2034533961B704CBFA0F97BD4A54CB7269F0D88A,
	RegexParser_PopOptions_mA18691037302741375A44BD8BDC9387DFB07B676,
	RegexParser_EmptyOptionsStack_m5FCB7AF81ACB5C91A73231C9F0AA0DFB32067A45,
	RegexParser_PopKeepOptions_m8ACBCD324BAF7269F90AEB3CF901B666524658FA,
	RegexParser_MakeException_m6D521D75808E2CD4255A68DC3456EAF2A88F2874,
	RegexParser_Textpos_m36658DED82367E05DF4333E68A666FEEBC3DAC07,
	RegexParser_Textto_m5C8BAB13E35429238EA9A5F13D5A5A580D0DD3AC,
	RegexParser_MoveRightGetChar_m3CF088DE129BADB346CCEEF1D547E2D260BC894A,
	RegexParser_MoveRight_m6F0A1C10AE9EA183F04A9E06B62B2B53648688AC,
	RegexParser_MoveRight_m7D1D27C901CAB81BCF60803E22FBDF2DEEC6CC51,
	RegexParser_MoveLeft_m1BC035A4EA49F4168093B2AB0EEAB2653CB04033,
	RegexParser_CharAt_m08DBAE0DFD788548F74E061031B7221154F96A77,
	RegexParser_RightChar_m9E231199A8E5EA994AA1746FC5E977AF3823FDEB,
	RegexParser_RightChar_m246E9E1F8D0A4A8E485C23E233CD3915C23739D8,
	RegexParser_CharsRight_m318662CFE3223C3FA5E921D376409B4E1B28F9B4,
	RegexParser__cctor_mF468AF3C5916BA72C579CBD41A73D2DAD004F0EE,
	RegexReplacement_Split_mDEDE59DED747E05FFD9030EF85E54E827DDF3E54,
	RegexRunner__ctor_mC04D94995556E71E813F8420C8A4EC0B66404550,
	RegexRunner_Scan_m1C3B1B034601773D510A4D2DEC337635A540BE31,
	RegexRunner_StartTimeoutWatch_m257FBE0C72761082A11D275954C6A1343EB13301,
	RegexRunner_CheckTimeout_m52486A9CE7B6EA4C83BB60FB200196AF0EE5687B,
	RegexRunner_DoCheckTimeout_mCDAA40848A2F8AAD70928FFD8A6C08FF2D9E72A3,
	NULL,
	NULL,
	NULL,
	RegexRunner_InitMatch_mF9CD772D4A8E12F89B4785324CD6939ABAE89AD4,
	RegexRunner_TidyMatch_m61A8AE20E505F2055B276EB020EB0B804ED2D924,
	RegexRunner_EnsureStorage_m6BC13F773B014E2875CCD9A83E4093A77AA1053C,
	RegexRunner_IsBoundary_m6C846E11790EC61A9E75A24230E1477913DB3441,
	RegexRunner_IsECMABoundary_m35C5F5DDC7C2F0E57EBA2E9D9892A88EDAEE4B97,
	RegexRunner_DoubleTrack_m057C14C51F137222469C6526406B0E1069747618,
	RegexRunner_DoubleStack_m8969F05F9E086EAA194DCBD2F137778239918925,
	RegexRunner_DoubleCrawl_mF0425849E5E3C2BA5E9009CED7DE245C8CA0F7CC,
	RegexRunner_Crawl_m655A5D262056F7E13F0645CE5611AE65E83D97DB,
	RegexRunner_Popcrawl_mD8C76E2C584E6908F4BB11E055B97581F0CF7268,
	RegexRunner_Crawlpos_m26A92CA69EF0C65BC7389834A12AD331538D064D,
	RegexRunner_Capture_mE34CB0D3351BCC69F6FDE6CDEA763B93C5E92642,
	RegexRunner_TransferCapture_m4F01B5A96647BC3FD338ACF6D509741D80FEC837,
	RegexRunner_Uncapture_mA7163C77BE1683E508821AB251F33FB7520CE3F8,
	RegexRunner_IsMatched_mD7F580AA0533D5C4BC41D18824FA74BE16EAE7A3,
	RegexRunner_MatchIndex_mA8EEC418C65572A82720F5D16BAC99224CF0251A,
	RegexRunner_MatchLength_m06FA694D5EFE42F89C25C8599BBE86C7726DB2C6,
	NULL,
	RegexTree__ctor_m5B10D5149928B35CE397472028EE327669C211DA,
	RegexWriter_Write_m57CF8209EF566CD40F9146C74DF889C8AA06E061,
	RegexWriter__ctor_m63A858FAE36A8640812DFF917751C1E215A2AE82,
	RegexWriter_PushInt_mFBC85956A26FEBC66244C8DFC881106D85DD2C1D,
	RegexWriter_EmptyStack_mB0C109FA21F5CFD16A34438BA1CC1CE8BED91E7C,
	RegexWriter_PopInt_m8885F9428571674EC224D6BBC93570B1B4671713,
	RegexWriter_CurPos_mEA105879492A4B415FA8AC25B29AA49153F83C18,
	RegexWriter_PatchJump_m6C0A440142E7AC772AD4AF7DF5D8291B6CA6D7D2,
	RegexWriter_Emit_mDC0B76CE49A6DE83DD2D169236BCD516AE9263EF,
	RegexWriter_Emit_m6B0ACB44155A07161060838F483D555E7EF6ACED,
	RegexWriter_Emit_m7C1D08F071C805F13DBF7684AEC3F2F7E748C497,
	RegexWriter_StringCode_m6AA17FFEBDD5E155004F05A78CF13B0D8E901158,
	RegexWriter_MakeException_m443C4CFA99AE06710D1E1BFA3D6EB9737AE70F17,
	RegexWriter_MapCapnum_m6AFE8BED80960BAA522EAA873D535C9D5AD4B811,
	RegexWriter_RegexCodeFromRegexTree_mAC489A29C00688CA929661BC394F1C4CF997CFC5,
	RegexWriter_EmitFragment_mEFDD8EA3A65320222CF4EA8A52B33C687EE0C5AC,
	Stopwatch_GetTimestamp_m7A4B2D144D880343DB783326F36F6996C1D1A1CA,
	Stopwatch_StartNew_m5AC5D6676D025980B0E5593F302FBE9AC2870657,
	Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860,
	Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB,
	Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177,
	Stopwatch_get_ElapsedTicks_mABB4710231090C75F057E90A29C71C553077A901,
	Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765,
	Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A,
	Stopwatch__cctor_m137C0B2E7182FAEA6E030CD1EDC909E5A3F7A064,
	ArrayConverter__ctor_m831D145364A55A155BC896935367961A476D53B7,
	BooleanConverter__ctor_m8293C29BCB7B90516FFE978C6295C0378C1BFEE4,
	CollectionConverter__ctor_m86DBE477F4462418329C5CFB45C86A9420F852E7,
	DecimalConverter__ctor_mB015B3871CF834D0C5D8290C9FD15509249921E7,
	DoubleConverter__ctor_m419F1E782FFBC765D22792D76E56D54FC94E6AEB,
	EditorBrowsableAttribute__ctor_mACDE45DF0DCAA6E923120D6AEC45422AEF958C2E,
	EditorBrowsableAttribute_Equals_m6F5EF9CC298CBDC862CBCA5187379A79635726FA,
	EditorBrowsableAttribute_GetHashCode_m74229847CE44E771F282E2E73FFC4DE55771A1B6,
	EnumConverter__ctor_mBA8B2E210D061A3CF86950F6D797E911A2E3C774,
	Int16Converter__ctor_mD4D022096E6FB9FFDB84D879E31177A892DD072D,
	Int32Converter__ctor_m1CD79AE5880FDE2EC91F1D67E567AAA3618D19B9,
	Int64Converter__ctor_mE4DC71A97EF110B854F22A48AB0F0D3792B53A74,
	SingleConverter__ctor_m8EA7D412C3EE9A9522E7592774DD46EBC6118AA8,
	StringConverter__ctor_m2718AC00691AF4A3AF8A8D64896BE3B5D58658B2,
	TimeSpanConverter__ctor_m28E7294174F979EF86FEF9511474B0AB9431217B,
	TypeConverter__ctor_m7F8A006E775CCB83A8ACB042B296E48B0AE501CD,
	TypeConverterAttribute__ctor_mD0795A29B6FD59978CAAC6DAF3AC7EC564C519A5,
	TypeConverterAttribute__ctor_m52D4E66A914F1A04F2F10A7131A701670225D41C,
	TypeConverterAttribute_get_ConverterTypeName_m883941C77E14FC5B4A3E32DD8F59F11739D5D6D8,
	TypeConverterAttribute_Equals_mDA74DFC28CC7ABC315407EDD1AAC14531C5F6AC4,
	TypeConverterAttribute_GetHashCode_m35874D49724DA3F72C6C2575FD595A711A659DAA,
	TypeConverterAttribute__cctor_mB1A775F56A5933A17CF349BD466B0CCE66B1078A,
	Win32Exception__ctor_mC03E215A1695ED64DDC50F4BE9F59966974DF759,
	Win32Exception__ctor_m2BEA755F6AA536ADDDF07D83BD8297F02584F714,
	Win32Exception__ctor_m94A043EE26097BBFE0ED22FD4EBEA357F142EFE6,
	Win32Exception__ctor_mC7ADDE9D2FEE4E17432F63C24EF1D872380094DB,
	Win32Exception_get_NativeErrorCode_mADB2F3845BEC2405353354CE6B6232741359D857,
	Win32Exception_GetObjectData_m7CD0D7A0806E4A9D8E78ADCBC616700379AB79E8,
	Win32Exception_GetErrorMessage_m6085687D868718B45289CB6AF6EDCB7F89D7350D,
	Win32Exception_InitializeErrorMessages_m4FE6F56C1C2CCB3F6468F0F9F5AD6E1B08673438,
	Win32Exception__cctor_m800CD9D0B3E3253B79A19B6646A7D28B29C3FC52,
	BaseNumberConverter__ctor_mD78E1C7E1F8A977BC7AD33DB0C1E5E32C60E8E83,
	AuthenticationException__ctor_m28782FCB7D9F3773F20A9F422CB2843FB70D723A,
	AuthenticationException__ctor_m431AB34EFB028337941758B192DF4D045BA93005,
	AuthenticationException__ctor_m547DE1104C83024255A4F61AAAE6C6049383C7E6,
	ExtendedProtectionPolicy__ctor_mBE44DA626D1672F2FD87B20304FE7BEBE9512FD4,
	ExtendedProtectionPolicy__ctor_mA48879FD57907A1EDB7969F89AAC217C28C12065,
	ExtendedProtectionPolicy_ToString_mA1C676C5BB8B99B58D140F5C9DC6AFDD227372C1,
	ExtendedProtectionPolicy_System_Runtime_Serialization_ISerializable_GetObjectData_m84D1771620BA27B1FEEF041D1AC46CCCA5D751EB,
	Oid__ctor_m45F49EB1ABFD4F3EB0FC9729C76FF83995752743,
	Oid__ctor_m67437A59D4E75ABF6E40D503F57F81199546E5EC,
	Oid__ctor_m0656E1FC1A7E7BBF694A568DDDF8BE4AFA544985,
	Oid__ctor_mA7AFE14DF30B47447BFFC9E41B37B8DB46C9D079,
	Oid_get_Value_mFE18BDFF095DD5A6643F4FEC3E57846716F37F05,
	Oid_set_Value_m304CEF248379566701402100FA015EAC640C033F,
	Oid_get_FriendlyName_mEA531D74DAD8FD43948097C418DA23F66399B694,
	OidCollection__ctor_m99B93BB5B35BF7A395CFB7F8B155DFA8DD734800,
	OidCollection_Add_m1FF686421A22A86F8296259D99DA38E02B8BBF5C,
	OidCollection_get_Item_mB37F923F4714BFE0DF44E8EE4A1A5EA1F3EBB1D9,
	OidCollection_get_Count_m6AC0709CDD68451F4CAC942CE94A5A97F3C294B2,
	OidCollection_System_Collections_IEnumerable_GetEnumerator_m3FD3A96DFF93BD88A3B28E35A4DEF57AF25ECB30,
	OidCollection_System_Collections_ICollection_CopyTo_mE508CB1FD9E56CCFE5A4BDD5251D815BF78AC5A9,
	OidCollection_get_IsSynchronized_m1300193FE08B13D161AAFB69DA709B41BA7A0FC2,
	OidCollection_get_SyncRoot_m6C13949F67338F684C29DD162C8228986DAB6850,
	OidEnumerator__ctor_mCA4FBC8408E2B04FD0A524E256E284E8A44E0797,
	OidEnumerator_System_Collections_IEnumerator_get_Current_mF11B1F886842EA79EDB215BD5106D0C4C65EBE53,
	OidEnumerator_MoveNext_m073D94D5D3254D53DF53429ACAD0AA9BD682221D,
	OidEnumerator_Reset_m5006C3B1283711E2BDDEA6C25FDF93BBB900195E,
	CAPI_CryptFindOIDInfoNameFromKey_mA2FD2F391E133E586BC8B827DD916613B590E698,
	CAPI_CryptFindOIDInfoKeyFromName_m7809CD491D913D58FA1B996B835A0A91C413E9DB,
	AsnEncodedData__ctor_mED24E9D1F11942741819652302C0531D18C39BE6,
	AsnEncodedData__ctor_m793EED53B4B8D49D92EE7CEED6B46B16A421D761,
	AsnEncodedData_set_Oid_m91E38503AAFD8E6FD98970D94FD43E7A738242A6,
	AsnEncodedData_get_RawData_mB9F8281A96011161C67EB3A9208E26C423B187EC,
	AsnEncodedData_set_RawData_mD7FE2383373A6AF578A4983999D677B58BD6B4EC,
	AsnEncodedData_CopyFrom_m3937C7ACC425960B8E48B7D2EB50E9417A7CD4B7,
	AsnEncodedData_ToString_m502785F2F8B4D1EBDF5CEE612FD8D0C2044390D7,
	AsnEncodedData_Default_mEEA94BA253ED1B8A719466A8152A5333E0E3FF07,
	AsnEncodedData_BasicConstraintsExtension_m64D690A2456E16AF39F6F0784CE74BC9533BB182,
	AsnEncodedData_EnhancedKeyUsageExtension_mE04DC17ACCBF3850AFBA454D9937EC4713CC5058,
	AsnEncodedData_KeyUsageExtension_m4EE74EA5C4A3C0B72C50DEB22A537812997AF590,
	AsnEncodedData_SubjectKeyIdentifierExtension_m261D32E7AE226499BA8AD3FBE24FC0E71C9DEB76,
	AsnEncodedData_SubjectAltName_m94FE55170A872B3174D5C495A27AD09F3BACAF49,
	AsnEncodedData_NetscapeCertType_m9191830C380BEC39DBE09065B2A4134193EA92D4,
	X509Utils_FindOidInfo_mE43E0522988511319B8B9F69AF7D0A10B4AE8FA2,
	X509Utils_FindOidInfoWithFallback_m98443176879ABC2054619D4AA491FE086D406950,
	PublicKey__ctor_mE8D32598F92B3941B4DC6AC367C7FFD75C7FAE20,
	PublicKey_get_EncodedKeyValue_m4BD0975B491E89FFE2A75C1ACDEB1DCCAF586D4F,
	PublicKey_get_EncodedParameters_m629FF8D7E4EEDED96BC455B7B953DC5A46D26F4F,
	PublicKey_get_Key_m9690CE02A29978F4F97623CB72361EC3E69935F7,
	PublicKey_get_Oid_mB0AD65FDF84716726D5C7756E5B50CEAD1E4C2AE,
	PublicKey_GetUnsignedBigInteger_mA92B0B30FA75335EFEFE6B5E8580543C387C3785,
	PublicKey_DecodeDSA_mFE5301F7BC0E4ED8DF0EBCCAA0D1DA48972BC901,
	PublicKey_DecodeRSA_m39565B7B6C8DDB7666D5C3ABF7951DDC93D35965,
	PublicKey__cctor_m9F739A93AE91AE86889835AAE256410F4DB808CC,
	X509BasicConstraintsExtension__ctor_m1D3F45762EB686500D2195886AD26FF84E5F4B3C,
	X509BasicConstraintsExtension__ctor_mEED7AECEE911DF6CE692301F8F6F6B197DC05729,
	X509BasicConstraintsExtension__ctor_mD08FE3682F4B2EA23450C6609360F45656495780,
	X509BasicConstraintsExtension_get_CertificateAuthority_m282E5D9E7640A06AF2CE06A0FA374571F25BAB6F,
	X509BasicConstraintsExtension_get_HasPathLengthConstraint_m463A8B4DF4BEB46A9353309AA5EF3EAA2F7A4D42,
	X509BasicConstraintsExtension_get_PathLengthConstraint_m93EF2B2BA6D6AD72DE59D98EB0E40DDD2AB3B49F,
	X509BasicConstraintsExtension_CopyFrom_mE64F232FB7DF702DCDB6692537B8F1010AA316DC,
	X509BasicConstraintsExtension_Decode_m40A688DD3A933B24A3E9EFE505299F70AFF32E81,
	X509BasicConstraintsExtension_Encode_m04068558E7AF843C57A8BA9C39E251B7B37A1CDF,
	X509BasicConstraintsExtension_ToString_m75957B2B18A84645897676F0DAC473F022848336,
	X509Certificate2_get_Impl_m94A4BA63853808B2FAC8DD5E50BF4B2FA7C223F3,
	X509Certificate2__ctor_m97D8E28308096BB3A2500555747B6483F27859FD,
	X509Certificate2__ctor_m250524B3AB0EECD558BA985D6B411D39F125EF49,
	X509Certificate2__ctor_mD1D7DED07A569B3432DC40B40AE4482B0A8C1EAD,
	X509Certificate2__ctor_m50D7739EB358531A13410F4A29353D0418F9EE51,
	X509Certificate2_get_NotAfter_mD2C055B86883353CFB0E8C1D6CE35D785756C624,
	X509Certificate2_get_NotBefore_mC074732D5C2E74642F1BA1C303B060A381A4A777,
	X509Certificate2_get_PrivateKey_m91743B42723CF3480CAD698F086CAE1DB7BBD266,
	X509Certificate2_set_PrivateKey_m88C8F93F732EFB4DA3BAC10765CAF03186750BB2,
	X509Certificate2_get_PublicKey_m325BCDA2DE132D5B7B2093BCED2942ED657D89E3,
	X509Certificate2_get_SerialNumber_m19595DBE6522106CAAAFA680EF4CE67698A8F51D,
	X509Certificate2_get_SignatureAlgorithm_mF9BED26F8117E76F230A87F79FD4C19242FAE662,
	X509Certificate2_get_Thumbprint_m4C3269CB216BC275CFEA77A808A787B5773E97AA,
	X509Certificate2_get_Version_m21075DDC00E0FA0C7A9FAA5D561973F720B7BDE3,
	X509Certificate2_Import_m5D2E42024D98335D958C3875D188C8F8127299BA,
	X509Certificate2_Import_m8687BF7214331468AE004EFE3C65E73B0057F0AC,
	X509Certificate2_Reset_mEE19ADA2C022461B3DB1F39100997A6F34FFB1D3,
	X509Certificate2_ToString_mFEEFBB4A2B5779A9D16F9E2536F1D94F423CA3A8,
	X509Certificate2_ToString_m2613DF600F5A88EC6836930FD45D6063251C9391,
	X509Certificate2_AppendBuffer_mACE3DD61A1C5C88DEF25BC5C4562B5790ED97312,
	X509Certificate2__cctor_mABA66D529C24C35091DD9560BC7314F0F3AF979D,
	X509Certificate2Collection__cctor_m8F5A775DC6302B95D1CA30B5C576AD4907E94516,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	X509Certificate2Impl__ctor_m121B40B8937DAEE3D81BA7577555E09194FF11A2,
	X509Certificate2ImplMono_get_IsValid_m4C590E5F7A23A9F1DD5594A7D88F51474646817C,
	X509Certificate2ImplMono__ctor_m9DE01D05F0A540B906D6F826B51B64FD7FC9E028,
	X509Certificate2ImplMono__ctor_mEBE15206EC5939F6722168220CB8B110FFD915D2,
	X509Certificate2ImplMono_Clone_m1870DF0CF85E284FCA158FD11238F23796354498,
	X509Certificate2ImplMono_GetIssuerName_mC61A5CC300E550C2C4C12733D6EE0C5806723233,
	X509Certificate2ImplMono_GetSubjectName_mCE8064CFCFD15F29ED869C1F552BDA1911944728,
	X509Certificate2ImplMono_GetRawCertData_mF60B75105FDED073333B0A45D417DC84970CA808,
	X509Certificate2ImplMono_GetCertHash_m552986EA33DB6FD437358D422E14B5A3BA69092A,
	X509Certificate2ImplMono_GetValidFrom_m9E27BEDF0995B987B5BBE2074C5626A6092C6AB8,
	X509Certificate2ImplMono_GetValidUntil_m221B50B0D2216CD5CCF290C4E37ADECFC723381C,
	X509Certificate2ImplMono_Equals_m072C86FBDE9AE37E0AF69E4DA7AD04A8412F7232,
	X509Certificate2ImplMono_GetSerialNumber_m0F23B3F377F4801057A57949E977918166A6DFC3,
	X509Certificate2ImplMono__ctor_m6494CD178AF6E96CE4046E4CC1AB68236CCE7399,
	X509Certificate2ImplMono_get_PrivateKey_m0F1E05FC97141DEDB3230B4B4B3617DAEBFDCD2C,
	X509Certificate2ImplMono_set_PrivateKey_mC54B0F8F8FF4B1588C1B61361DA974E8A15FD345,
	X509Certificate2ImplMono_get_PublicKey_m9FEE1E367B63542EEA2A517C7A4618C163C4B2D7,
	X509Certificate2ImplMono_get_SignatureAlgorithm_m158A12F7972A7104172BBC8F5FE31186B2758D3C,
	X509Certificate2ImplMono_get_Version_mAF4475ABA5E17ABB6FD9EE9A6BDCB8EA269836CC,
	X509Certificate2ImplMono_ImportPkcs12_m7C9D1CD7EB5D1CBD27E20EB92D494C65BDA240D0,
	X509Certificate2ImplMono_Import_mB7A89EF3758EDF0BA2BA0AF78AE2D4BB61D5E0FF,
	X509Certificate2ImplMono_Reset_m91B0462356708973478FC82A9D12EECF56FD4FAE,
	X509Certificate2ImplMono_ToString_mB5CE336C20BF230C1B0153BF1D2612FD22E0347F,
	X509Certificate2ImplMono_ToString_m88CDD1F5BDC5CDB329A872B58AF69CDB10799321,
	X509Certificate2ImplMono_AppendBuffer_mDB49D80453E139498ABF2BC30ED526A61D2F4F71,
	X509Certificate2ImplMono_get_IntermediateCertificates_m053FE037CA3747C75B056C11AA56DB1F2EE36809,
	X509Certificate2ImplMono__cctor_m8ABA0491BD741AF08233E6B3B2B4F61420FF4C65,
	X509CertificateCollection__ctor_m3CEEDA1CDA93234E6E78DFB6563738B050AFF6CA,
	X509CertificateCollection__ctor_m24BAA500237577256DCA1BD814ED88D163E702E3,
	X509CertificateCollection_get_Item_m799058377874ABF0EEE8AD63AE89B62B930A1E57,
	X509CertificateCollection_Add_mDF43F609EAE240711FCE880E66EE814178AB2E66,
	X509CertificateCollection_AddRange_m420F91827C84ED68AB81855E07BBF0CA7D150289,
	X509CertificateCollection_GetEnumerator_mD28E40E9104E833480FA012B1CE905AC08A7AD4F,
	X509CertificateCollection_GetHashCode_m383BD6816EEFE8FA5CA81CA4279B5334231EF84D,
	X509CertificateEnumerator__ctor_m81F0C80052FB25D722E5E66D5121D9F559A2EEB4,
	X509CertificateEnumerator_get_Current_mDA87DA5B1CD027E452E22112ED43423F95573BE0,
	X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m92ACFD522418E3D722E6C723FA93FBFC7A1A3EBC,
	X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m99B025AB34B4F5CFAD7836A73D01FBE1AEA019F4,
	X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m7EC63F5898E3A9881E73EB6205238C31ED4CC323,
	X509CertificateEnumerator_MoveNext_m472F420F968A52D970486D21BFFABCCE5329F714,
	X509CertificateImplCollection__ctor_mC714F3565563EC51068E2601AE9B9F34E2850876,
	X509CertificateImplCollection__ctor_mBD6BE41E55AE1A9FF1E6B528638D002209F7BFB0,
	X509CertificateImplCollection_get_Count_m1503CBCEDE4650173097C408898F1806582CC77E,
	X509CertificateImplCollection_get_Item_m24CA14D68946B6E0006B162BA284EB51F826F276,
	X509CertificateImplCollection_Add_m3A1312DA419D2777C0A5F37ADA482A40C3256BE6,
	X509CertificateImplCollection_Clone_mFA9129A5042E00B9068B45572B98E83EF3EF7368,
	X509CertificateImplCollection_Dispose_mF63BF196D21676FD5055763520ABC93F56A4449F,
	X509CertificateImplCollection_Dispose_m7C6F7B2BB470BE090CCA19E50C4A6E9004441D67,
	X509CertificateImplCollection_Finalize_mAFC19642C1398BE1591E4628C10179D4D676ED99,
	X509Chain_get_Impl_mC8D8FB1BED19A1E40D1DAA7561448ADFA094B740,
	X509Chain__ctor_mC6F6E3F01D21638D909E13D151923EB4BF592CAB,
	X509Chain__ctor_m8273B96D3DA26CDF61C71723A980E09214D1DF36,
	X509Chain_set_ChainPolicy_mFFC95743026B78C7B6DA33B51CEBD81FA2215EDD,
	X509Chain_Dispose_m4CC4E701CE9CA80CC1C3787E84D955D6B7632A2E,
	X509Chain_Dispose_m0233872244BD2AA33E6C4D2AE572FFB991909FE9,
	X509Chain_Finalize_mC31E8C29EA7A66E5B4D2D41C1CACF7AF5BB94AD3,
	X509ChainElementCollection__ctor_m035B6BC8E21811A1536A60FFA9BAB9A4159323E3,
	X509ChainElementCollection_get_Count_m93E1B437A465A5DC0D48F0184EF55370D0E29E2F,
	X509ChainElementCollection_get_IsSynchronized_m6B3C0432C195CD7A8E963B1B21451FE91B569D32,
	X509ChainElementCollection_get_SyncRoot_m376A94E55300F3C9CC2A37C50774E04FFE4F7776,
	X509ChainElementCollection_System_Collections_ICollection_CopyTo_mFB0649BFDEA056BF980F17B68DE6B66DF436E3D8,
	X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_mA687F2811DD1F678D629FC166F4288DD340D02F9,
	X509ChainElementEnumerator__ctor_mC91FB54A5BD2C0B0E972FBCA193C5A453FC6957A,
	X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mC3EC8EDFD95897AD140B4F680905E65D8B04B49C,
	X509ChainElementEnumerator_MoveNext_mF90FBF977D510F6FCF47D5B8CB34254C2822A775,
	X509ChainElementEnumerator_Reset_m1D149AB7FF36C6200FB205408D5E856FCE624CCA,
	NULL,
	NULL,
	X509ChainImpl_Dispose_m0018CE8D4317FCAEEA5465425BF5BB5A4A728CBA,
	X509ChainImpl_Dispose_m0F4B69EE7F402C78C833599FB0F4BEC101CB328B,
	X509ChainImpl_Finalize_mD3777623D36204B695026890DAAC789BE8273724,
	X509ChainImpl__ctor_m2DC75C34EFF93D4A1DEF14F168489613A557C962,
	X509ChainImplMono__ctor_m9EEB55A0D2F4EC7D21C5D8FB470A8B9B9094A935,
	X509ChainImplMono_get_IsValid_m782E5277F3BEF121956B1C90D56FA275879BD706,
	X509ChainImplMono_set_ChainPolicy_m16F6430F9445BF75D7965A0ED22F8E17E8A4DDF2,
	X509ChainImplMono__cctor_m95136BE1101C06B64816562118FA9E3502406EB2,
	X509ChainPolicy__ctor_m68882C53D2D8D22007332CCA165F650078751ED4,
	X509ChainPolicy__ctor_m53AB51FBA21115B866EB0AB6AEE039B6167F6A4D,
	X509ChainPolicy_Reset_m651C65C1321FEFE9E3EDFC1BE2706AEFE2C612DA,
	X509EnhancedKeyUsageExtension__ctor_mC91E46E79086AAFCD611FB3A223797D20BA9C1C2,
	X509EnhancedKeyUsageExtension_CopyFrom_mC206A056C8C59401AA01F8C935DDE27D7E34D96A,
	X509EnhancedKeyUsageExtension_Decode_m1865B86FE190237641C00804A058BF56F125183D,
	X509EnhancedKeyUsageExtension_ToString_m99085514587961F4AB1CA3FB82E5223801475818,
	X509Extension__ctor_m75C6A788965E9C797F3D47DEFEC366EC2F69F384,
	X509Extension_get_Critical_m8F4D4C2F0ECBE5CB4C9998CE3E56D5040E2EEBE2,
	X509Extension_set_Critical_mA2B424FF17DE53E01E586015DD1C742773B060B4,
	X509Extension_CopyFrom_m03B3EAD99E076090F01D26FF483E827397903A02,
	X509Extension_FormatUnkownData_mE5BAB7DB56CE215EB704A7E4E6866EBECA18F90A,
	X509ExtensionCollection__cctor_m6411CBA0D4CBA290257D88C740C5FD7E40B209C1,
	X509Helper2_Initialize_m6FA880503C9B3B72009F718503C6B0A0BF301004,
	X509Helper2_ThrowIfContextInvalid_mF76EFD9C0DE50B993ABBEDFCFCF4A235435E521E,
	X509Helper2_Import_mF1D23CC497CC19E02E74727315D59A28714FCA92,
	X509Helper2_Import_m3DF644063B9FF160B750E5CD056FE06B1AEEDF8C,
	X509Helper2_CreateChainImpl_m5A5909ADD8809F95E64FC576BB29EF5B5F878D24,
	X509Helper2_IsValid_mE1C295645E14225C9013A23339E52201C05419F7,
	X509Helper2_ThrowIfContextInvalid_m2CE36D57CDF7DCD4EDD5586EF5D526386B009DB5,
	X509Helper2_GetInvalidChainContextException_m6435C6B754A3A3E6A69DCF16C9F962E0205323AC,
	MyNativeHelper_Import_m447532D56EE4A4E2FD5B61528D0E5DCABF7CF6B0,
	MyNativeHelper__ctor_m3AF762F0DB59E0F744C69BB9306F39DF6AAE7516,
	X509KeyUsageExtension__ctor_mCCDDE2A55EF78832C8117C680FB264CE91893A99,
	X509KeyUsageExtension__ctor_mA9DDAD17EA38ABB83CD6CC9A353A0667A9EAC018,
	X509KeyUsageExtension__ctor_mBC544E9444992C7883638DB0B4607945F33E7426,
	X509KeyUsageExtension_get_KeyUsages_m9544DC0FAAD02C53D6C649E1831176CB54EFE505,
	X509KeyUsageExtension_CopyFrom_m8DA1FA691943CBD4B94E45096E83FC5EA9EEEA3F,
	X509KeyUsageExtension_GetValidFlags_m7946BD756F14B17D707EE12E7D82878531D115EB,
	X509KeyUsageExtension_Decode_mDE97A425A199661D89FE252A75C8644D4280F1B2,
	X509KeyUsageExtension_Encode_mBBF95E13B1FE1A0507FD692F770D6E98A68E3360,
	X509KeyUsageExtension_ToString_m4455C1B31C62530B930CFADE55DC0E77C60C7EFC,
	X509SubjectKeyIdentifierExtension__ctor_mD586705C293A9C27B5B57BF9CF1D8EAD84864B29,
	X509SubjectKeyIdentifierExtension__ctor_m45218EE7D32231FA6C44A40FEC2E5052162012D6,
	X509SubjectKeyIdentifierExtension__ctor_m182458124147FFEE402584E6415C2EA407B59C5B,
	X509SubjectKeyIdentifierExtension__ctor_m95DD08883D5E284C15820274737324063C4E4432,
	X509SubjectKeyIdentifierExtension__ctor_m98571FC543622A4BD3EA7788BB132348D9E0A3E3,
	X509SubjectKeyIdentifierExtension__ctor_mF692F46CE97CB60AF86C1A74E709E8276B7D9AB1,
	X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m3480A14D8377B6C2D220F99D37AB8B13BEFE76FF,
	X509SubjectKeyIdentifierExtension_CopyFrom_m45E7EB4E976E4759046077C79FBC4A820C9A95EC,
	X509SubjectKeyIdentifierExtension_FromHexChar_m7BDBE176CD85DCA3193FECF78D6CF15E349121BC,
	X509SubjectKeyIdentifierExtension_FromHexChars_mB2D3EBC7E627D44254A82E5628A2079C1DB24C38,
	X509SubjectKeyIdentifierExtension_FromHex_m654E8BB1D2F9D8C878EF854D7933C6EA825F272B,
	X509SubjectKeyIdentifierExtension_Decode_m6EB136D7525F3DFB9FA93F8B3653D2F6FA3B72D1,
	X509SubjectKeyIdentifierExtension_Encode_m11C84A3DCE621526C1FC282E214001D70937D6BD,
	X509SubjectKeyIdentifierExtension_ToString_mB22086D5277B22093240BB9841D32D9008D26AFA,
	HttpStatusDescription_Get_mAFB12EDE2A87E466FD399A8D246B99A6EC9345F5,
	AuthenticationSchemeSelector__ctor_mF1BA87F03767AB9794B4F8F86EF2955393672E06,
	AuthenticationSchemeSelector_Invoke_mE57292EBF99538732BF84075F1F9854AC4132407,
	AuthenticationSchemeSelector_BeginInvoke_m487973860B7C17A557BA41612EB3296AC7170E6C,
	AuthenticationSchemeSelector_EndInvoke_m3FB9ABA28933CF17C959412BDDF345BB0968A9F8,
	CredentialCache_get_DefaultCredentials_m669684689D1F69432F33D9B1E0ECF53080BB8CDC,
	SystemNetworkCredential__ctor_m51111F468A7CFB7B990C2C618A99EDC7FA7B307A,
	SystemNetworkCredential__cctor_m42F0FC8A6A428F7764FC5A86B38469FC032D3340,
	EndPoint_get_AddressFamily_m7B7DC3AE75480FCA543AE5434EFA8C8C09450C66,
	EndPoint_Serialize_m118001AAA9AC84B4B28E8267055A7173D8C1F376,
	EndPoint_Create_m98FBA607C33234AC35DF79DB6494D13AED7A501C,
	EndPoint__ctor_mFCD3A4BB994F59D40A3A94A6F1DEC4A731CC8776,
	GlobalProxySelection_get_Select_mE826A34EB04E3906E699A317417506C89551F54B,
	GlobalProxySelection_GetEmptyWebProxy_m66C1CA6E4480F45F78145DD23AB51A59B5A246AD,
	HttpListenerException__ctor_m9BC4BC074F9B7B9D678C057D56A4CFCCB37E2464,
	HttpListenerException__ctor_m6C470B076D54477CFC20D98E0E38EBFF07C7A878,
	HttpListenerException__ctor_mB812D3DB9D6A3899809B8A82D70F3D2143300FBC,
	HttpListenerRequestUriBuilder__cctor_m104F4B27BEA2C76C833192A0F5563A07DFED469E,
	HttpListenerRequestUriBuilder__ctor_mB131B04B2FA97630C9258565DE33111752C5E994,
	HttpListenerRequestUriBuilder_GetRequestUri_mDB82A173CA80B73EDD411DFC82B5A31A703E5A7E,
	HttpListenerRequestUriBuilder_Build_mB1CC1A9F3413331412F227BF61F746FC1FA6DA19,
	HttpListenerRequestUriBuilder_BuildRequestUriUsingCookedPath_m70FCDC32D4A7EE40ACE71EEC3AE44FE131889415,
	HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_m0E453F2D4D1D95031CD4DF88ED066E22D8BBB034,
	HttpListenerRequestUriBuilder_GetEncoding_mB17CEA06BA892446D8EEEE2AE099D7A9EE52D1BD,
	HttpListenerRequestUriBuilder_BuildRequestUriUsingRawPath_m819EC39E6F94B9BFD094449FEF47DF777EBBB79A,
	HttpListenerRequestUriBuilder_ParseRawPath_m2A69E420163F21437CE379DF1337117914056C62,
	HttpListenerRequestUriBuilder_AppendUnicodeCodePointValuePercentEncoded_m4A3489918AADAF645FCB04734A34EC09DB69161A,
	HttpListenerRequestUriBuilder_AddPercentEncodedOctetToRawOctetsList_mFC7200F04648EF2DF3D7A66B63D39BA44D70AEE1,
	HttpListenerRequestUriBuilder_EmptyDecodeAndAppendRawOctetsList_mC17513EEC8F7BC45957D0102E8A37E59261D68FD,
	HttpListenerRequestUriBuilder_AppendOctetsPercentEncoded_m2E001B9A8DA251D3108F15BF1C54F0489BABC4C0,
	HttpListenerRequestUriBuilder_GetOctetsAsString_mD0A57ADD1236B1A0384A9BB37D7D30CBBCFFFE86,
	HttpListenerRequestUriBuilder_GetPath_mB084C11F2138AB64E91DD4C1AC28705AC1FE3F16,
	HttpListenerRequestUriBuilder_AddSlashToAsteriskOnlyPath_m17DA8197FC3F43E2FA74F9A7AA2698C7317CC71F,
	HttpListenerRequestUriBuilder_LogWarning_mA13DF789A9FEEAA85BCD4F58C580E706296D128C,
	HttpVersion__cctor_m19EB2E84E83F160B93594A35BB6C96C5B50D6856,
	NULL,
	IPAddress__ctor_mFD0AF2F6A282D1158DF3C34EF2E63B73814E7748,
	IPAddress__ctor_m373D3930BEEA00EC628E98C5A13AE9BE2B2CEC84,
	IPAddress__ctor_m7A866EC7E9B1A8F89158C0EA1AC0A966CFE819ED,
	IPAddress__ctor_mCC321EEDA0750DA97447EB60529BCBCB4EA0249D,
	IPAddress_TryParse_m3F9E06DEEC1600AF06B7C91C3DD03218F2E242FA,
	IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273,
	IPAddress_InternalParse_m69E95769392647AE9B82AFEC6D7E74C4F7CCFD47,
	IPAddress_GetAddressBytes_mC41BB4B3EAEE51DBB2A2115EC2DD87D7587355D2,
	IPAddress_get_AddressFamily_m5FB6DC510A9C84046F0C38C7C7823FE6A565A693,
	IPAddress_get_ScopeId_m941461DEBDECCD858F8D3165F3CA366A318064D9,
	IPAddress_ToString_m0CAEDDAF2A42F23EB1BE3BB353ABE741486710BF,
	IPAddress_IsLoopback_m84B87F0732723BE939EB9534E8271A13EE599027,
	IPAddress_Equals_mADA54686760DE75E2C31B8651224FFEB019316D6,
	IPAddress_Equals_mB38BAC1A15885A3181507BC9FD4E8F5765FA6678,
	IPAddress_GetHashCode_m36CE850AFAAD382A29B7D72844989A3105565D7C,
	IPAddress_MapToIPv6_mC852A3F6831381331095C81AB75B0A70ABD2498B,
	IPAddress__cctor_m4DF372012DF900E7BB489931296D0BFE4EBD4AEA,
	IPEndPoint_get_AddressFamily_m53CEE40486A2F3615571B5255CA6D4C28387703A,
	IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845,
	IPEndPoint_get_Address_m01D2AB4ACC29D3E3A79D3D2A207CE3063336F2A4,
	IPEndPoint_get_Port_mC1FBFBB50CEDC03F683C9EB23C2ACECCB5AE3DA9,
	IPEndPoint_ToString_mB132354BB333FA5FD9CA5B6B86F751AAA87AFEC2,
	IPEndPoint_Serialize_mE4201DDF2EB6D872A31A2620D20C718DC1F28962,
	IPEndPoint_Create_m1B1932CCD58627047FAEDC2402C333BF6468A3D7,
	IPEndPoint_Equals_mBD402EE46BB0C0922C25E2DEFB64412E4666EC6D,
	IPEndPoint_GetHashCode_m52D8AEEDB5B1409EDD08F18B2018CEB1712266C0,
	IPEndPoint__cctor_mD88387D86BAE58328D7BA158704E91B0415F9B81,
	IPHostEntry_get_HostName_m58DC3A2664BA86513E055ECA103214D00EFD1605,
	IPHostEntry_set_HostName_mE132ABF58C3C4C28A58A48132698FA99F55C328D,
	IPHostEntry_set_Aliases_m4D05E9F3D5C6FD0996C86816B36B1DF9BE79D8ED,
	IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56,
	IPHostEntry_set_AddressList_m057A9B8FA93A129A0DAF5222231BD155B774B50B,
	IPHostEntry__ctor_m539B6CE87B29D7B23A4F46C73BF7D6BB74D0331F,
	InternalException__ctor_m4963B2F0FC3F351663C67F3F71CAC601D73DF499,
	NclUtilities_IsAddressLocal_m15E0BC8FA72FF335F31D5377AC1ED599FA5966DC,
	NclUtilities_GetLocalHost_m05F1444B07A59C035365C4F17DD28959EA8843BD,
	NclUtilities_get_LocalAddresses_mCD150C4D4468FA5A5841F1A9DEA23779221321D8,
	NclUtilities_get_LocalAddressesLock_m873FF32D6C0398541CBB1CE734A5A66A8ED1A2C2,
	ValidationHelper_IsBlankString_m78C3603B0E8C93CAD3FB945CA57C3E4729A09B89,
	ValidationHelper_ValidateTcpPort_m899B89B4810C6531306EC6C34FF452732D41979D,
	ValidationHelper__cctor_mE5C7F68FC003121FE3AC2039FFA9B2E88500E16A,
	ExceptionHelper_get_MethodNotImplementedException_m607FF8B70BAE0BB51B306CC3282A08B59C657D84,
	ExceptionHelper_get_PropertyNotImplementedException_m7A641AB1C2BDAB3199A4A2674561E23302FB637B,
	NetworkCredential__ctor_m6FAE0A13FFBFC74F1E810399223B5297DF9B4C76,
	NetworkCredential__ctor_mFAFA0E2205D5A144C0EAB9420F7FBBE71ED677D4,
	NetworkCredential_set_UserName_m17D8E6ABE7EDA733A8E01967698669293FCF2E22,
	NetworkCredential_set_Password_mEEF6A7577788282996C4A5A989D9BA47B13D882E,
	NetworkCredential_set_Domain_m5046BA97B0F1D839ABB6F928C1DF2FA2387DBA9C,
	ProtocolViolationException__ctor_m9E1CE4D0A1DBB0EAE0BE6C7C026154C789F41A49,
	ProtocolViolationException__ctor_m36E802912D318858D2D98F929722AACA1A2EC38C,
	ProtocolViolationException__ctor_m63A4EA715BBFE3D72929AD3FEDB1E398B75C41F5,
	ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m044186C620380DB9812441EE011806354C23D0B6,
	ProtocolViolationException_GetObjectData_m37E19ADFB1B9FA924D562BDFE0D57728AD5F2A37,
	SocketAddress_get_Family_mA5C74070602CE88CF4E8C77A06B7B60D73BC736D,
	SocketAddress_get_Size_mF4849EFEEA3BA3E2109D3E05E635072F89DE57CB,
	SocketAddress_get_Item_m9B0A7BADAFEC83332452472EFB0F2B2A8AF7C442,
	SocketAddress__ctor_m8ACFF855B4B34E64D63221D8964F67393AC5C2C0,
	SocketAddress__ctor_mBD53CC91765543655C8A685599BF9E83CBD7EDA1,
	SocketAddress__ctor_m727264D4E76104274842A01FCA0C42F424463B5B,
	SocketAddress_GetIPAddress_mB6CBFAEAD75170561033660215DAA67EE91E6A85,
	SocketAddress_GetIPEndPoint_mDB28840AEBFA9C37CC41BEC66E67BA9EDCEC2700,
	SocketAddress_Equals_m51EE0D3DF560D78987904A2F7D449D9008B7F4E7,
	SocketAddress_GetHashCode_mD765A06DB2C807684567958F8B82266A72A51B63,
	SocketAddress_ToString_mDF5B4B0AF200471C84B09D553EB33BC4F0EE20EB,
	WebException__ctor_m3CC3B7531100A92762AB2A131B85742D403D6370,
	WebException__ctor_m864B9642C3D47B5ED0CDA9397ACB8CC70D2B9E4E,
	WebException__ctor_mABBCD10936CE582BDF68BA0204ECBDA253119AFE,
	WebException__ctor_mC093D93CFCE3064622C7AF755BC3D3150E5A8D2D,
	WebException__ctor_m5363C3AC28BABD353ABD5295C3A4FD44724D9407,
	WebException__ctor_m4BFDADE5C6613BE14CE11DE30B350A671DDA7C16,
	WebException_System_Runtime_Serialization_ISerializable_GetObjectData_mE242FB2EA4DB6AAC3C6C08DBEFD8F3A7D8C9E2DF,
	WebException_GetObjectData_m72AC26432F46DEC77E8BEE3B60150CA524EB8D43,
	WebExceptionMapping_GetWebStatusString_mEB4A50FC87E40382A86D007C2E80FCCDEFCB5B91,
	WebExceptionMapping__cctor_m25DD11B1F6D1AFB6D3DCD727B6D0D0F9C551EDE6,
	WebHeaderCollection_NormalizeCommonHeaders_m3FE2945857B86D96E0B495218D61593CC6AD1991,
	WebHeaderCollection_get_InnerCollection_m74FAC0EF1815ABEA9D44E817BA54B413A7D21645,
	WebHeaderCollection_AllowMultiValues_m078D979B7DBF77A8640B1DFAAAAAA280065567EE,
	WebHeaderCollection_AddInternal_m6D3C568730974B187804895F8F3DAA50AB37C6A8,
	WebHeaderCollection_CheckBadChars_mDBB3AA0A529389E24E9DFBD08C259F34412C0523,
	WebHeaderCollection_ContainsNonAsciiChars_mA89278F21B4B5F507898C91472747092C3E152BE,
	WebHeaderCollection_ThrowOnRestrictedHeader_mD66B7AB428CEE7686AA15963F42F6645880A7A6B,
	WebHeaderCollection_Add_mB254E228D958CFE984049FBFA75815196B1BB993,
	WebHeaderCollection_Add_mAAA624D792BE679F4583C3413A249F3BC6302175,
	WebHeaderCollection_Set_m113A8E6210BA3E7D4B3B33E378FF3EBEF757F07C,
	WebHeaderCollection_SetInternal_mFB16D4B140F7B3136B1B9AB8785DD3FD9A83FA90,
	WebHeaderCollection_GetValues_m38ADF029537D145653A9CB8ECA1AB60A0CCC7E5F,
	WebHeaderCollection_ToString_mAF0DD5057B67B6D935F9F81254FE4EF3816AE1F5,
	WebHeaderCollection_GetAsString_m2446E221F9367C3C2D0FCC9E1686E3E5292B6932,
	WebHeaderCollection__ctor_mDE789C8E11131B5FB1FD5FF79382893DE73E8752,
	WebHeaderCollection__ctor_mD9851B680C175978BABED32CA813D66553B5DB48,
	WebHeaderCollection__ctor_mA6673D3256664909BD3B6BA1DED72901CBF302DD,
	WebHeaderCollection_OnDeserialization_mFD1302BFFB2508360BB2241B4F6AEBF47F6FB53E,
	WebHeaderCollection_GetObjectData_mBDBD7A68D3851F96DCFE6819ECE1FB5B7B733D50,
	WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_mF606120A9A8D480A73ECC80F3134437CC170DACC,
	WebHeaderCollection_Get_mBAE90C4839B7748D8889C011ADE5E8CD9ABADD7C,
	WebHeaderCollection_GetEnumerator_m3B38A75F803A0EA365EC3A5FB2E71F85B784B71C,
	WebHeaderCollection_get_Count_mF4776644017CCC37A364707BC35BD4431BB66C80,
	WebHeaderCollection_Get_mB4CF6863B19E3815EEBE1A86F1881B6F744A47B2,
	WebHeaderCollection_GetValues_m5A28C9A66037695AF2FE3FAEE61567D5E415BCBB,
	WebHeaderCollection_GetKey_mC4DBE9E8F0044B4F1AA95F5DF76955E8692655F0,
	WebHeaderCollection_get_AllKeys_mB5C074D07B937C684FCC6B1D1A4D9A523E7EA7B1,
	WebHeaderCollection__cctor_m779CABD05DE263A98071763B54A53757E33B9A6A,
	CaseInsensitiveAscii_GetHashCode_mEDEDA9FD6885627614E710E60A2EA06D69F6D436,
	CaseInsensitiveAscii_Compare_m89633B3A475AC918C505843E6F7824FE789A6E4B,
	CaseInsensitiveAscii_FastGetHashCode_m3718D0BF4E0D19D8DBBD9E3177B8B1479EEB7090,
	CaseInsensitiveAscii_Equals_m31D348231E3122FF20FA5BDEFC6BC3A8B65CB9C0,
	CaseInsensitiveAscii__ctor_m3C5EA0D73AE6F2E60CC2335DFC861C64B2FCEEBA,
	CaseInsensitiveAscii__cctor_m759446C030AB0E794F53B4D3E38A5813361A7886,
	WebRequest_get_InternalSyncObject_m80BB55BB5C09059A46F4E10599FA455F41286330,
	WebRequest__ctor_mFF46D19A613D1A8E5E9318DEFA794B18AC206D57,
	WebRequest__ctor_mD4C70AB50E522A71C1B47263DD8714FC3B52A3C1,
	WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_mA128ED1898FD0A9943A96190103BE40F418BAB03,
	WebRequest_GetObjectData_m06BD9D15936178B48D44F18C02CD94EE21DD1CF0,
	WebRequest_get_InternalDefaultWebProxy_m13E2CAB3FE298CF26023A3626454FE989CF687C7,
	WebRequest_get_DefaultWebProxy_m65F367761268F3797F96B8BE99F85FF8CB1C117A,
	WebRequest__cctor_mF114B4DA7976F2211658435221ABC2968FF13798,
	DesignerWebRequestCreate__ctor_m57F5ADABDB3D9A8F8617EBFD5F40FB0D8A9DF7D3,
	WebProxyWrapperOpaque_GetProxy_m1A8A0E96628ABA4A57B401AC2D60016808BA840D,
	WebProxyWrapperOpaque_IsBypassed_mAB04ED8FC80CF3E3045042D4F618C3189ABBF07C,
	WebProxyWrapper_get_WebProxy_m64892D5D4C1D1C4A11188F1549D2762AF50A5EE8,
	WebResponse__ctor_m0A254FF1607AEACDAA102A8ABA8941A42B2929A6,
	WebResponse__ctor_mC4FCBBBB946A8703F5279A1390D56A50CBE7164B,
	WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_mE662B42630016B991CFC1E861F774DC1CDDD00DA,
	WebResponse_GetObjectData_m52CD293C2D47F35D8FF1EA2769D272E48398EB4A,
	WebResponse_Close_m970DECB5745AACAC9CA7B88FB818066A0DFC4998,
	WebResponse_Dispose_mC0C80BE4CDA26A6A26EEAE961C588A461FEE9FE4,
	WebResponse_Dispose_mD37AF3FE467717A008830A34E72215D3DBC244EC,
	WebUtility_HtmlEncode_mC07FA9A01485BDFE784053F14C093CBD65FA08D7,
	WebUtility_HtmlEncode_mE3B0D23B992B904F7BD4F9C4A9F0BB548F3263A8,
	WebUtility_IndexOfHtmlEncodingChars_mC8DE0713C0407BB3B402359BAB1A7E629C86852B,
	WebUtility_get_HtmlEncodeConformance_m3B04A7783AD7F067FCB195544FA750DC2E5BC191,
	WebUtility_UrlDecodeInternal_m0BEED16B1B04C06F4552F5586179290B64199D35,
	WebUtility_UrlDecode_m5A955DBE636F9E3058F7C66E9A3379CD531AC7CF,
	WebUtility_GetNextUnicodeScalarValueFromUtf16Surrogate_m238FB369923DAB313E950CF99EFBB162BA4F69D6,
	WebUtility_HexToInt_m068D8AD6D40D404E4098C1DD87D6D612FA86779D,
	WebUtility__cctor_m9AA0F4E8EE017CC44615DC945E7C16E0A00D863E,
	UrlDecoder_FlushBytes_mAFD14D4BDFF7772D27C4586780A60F552789880A,
	UrlDecoder__ctor_m2B5D57D1C2AE5272B5AC08B537C9FD4E09710F11,
	UrlDecoder_AddChar_m89D9F2E86F612C9768AB05982E02785283826EA9,
	UrlDecoder_AddByte_m936E7648F5846D98D36148AF23F34CB0DF08C0A3,
	UrlDecoder_GetString_mF1C119F237D06847A3C03ACF4A2F7278509931A4,
	HeaderParser__ctor_m3505961B694DA7A327216C93C9ECF14883F0FD76,
	HeaderParser_Invoke_m9B1C027C8642CE3AA54366690471A23E181D41B6,
	HeaderParser_BeginInvoke_m9FD2F44038291DA86379F725BB39C636E9442D6E,
	HeaderParser_EndInvoke_m357E4BCDE566A5DCB07B1F07F6EEC3F0BBD05E8A,
	HeaderInfo__ctor_m0A21C755086755564093EE140BB76B17BF19D119,
	HeaderInfoTable_ParseSingleValue_mCE6140F9CE345D6AF51B89C7D8C42E6C7AC41EA0,
	HeaderInfoTable_ParseMultiValue_mF581CA5C6C9D338CC17232EC49C4471DB5DFC014,
	HeaderInfoTable__cctor_mE96A69FD8B8F938623442DCD661EA5FB8E608B16,
	HeaderInfoTable_get_Item_m87D6C7DCC3A5EA433F038365677E93B311A41885,
	HeaderInfoTable__ctor_m7CAFD794EF41A0799F26DF974DBC848A03275531,
	NULL,
	LazyAsyncResult_get_CurrentThreadContext_m72EA4FF3D8FA7A473BABC9CB6C74D197BC1CCD98,
	LazyAsyncResult_get_AsyncObject_mA91273208B3DCE1E9830B3CB028298D40C635059,
	LazyAsyncResult_ProtectedInvokeCallback_mE4BFC9A8F54A60F45DC23A775D75E7F9B3BE61AE,
	LazyAsyncResult_InvokeCallback_m61F2403E47B10A03CA2CCE45D5DB1C5033A57C8B,
	LazyAsyncResult_Complete_m1149B1B2741B4B2D22775A68D74B955BC3EA4A64,
	LazyAsyncResult_WorkerThreadComplete_m9144EAFE34F64C805224410D61F45300D854A6BD,
	LazyAsyncResult_Cleanup_m60696D3703963856A2069A821F8F68DEE1F81D4F,
	ThreadContext__ctor_mA7A43774615EA8E5A20D406F33EFE2004B9944E2,
	NetRes_GetWebStatusString_m507D1110F525757C699C6F95A3AA4B8AD41BED81,
	ServiceNameStore__ctor_m4838CDA22690B3A0975C7B32C2EDA15853A28F89,
	TimerThread__cctor_m92260B88BACC7706E288A0AD202FA71CD0696199,
	TimerThread_CreateQueue_m38F306BCB0D055ADBC36F3D8F2B77EBE4BFF8C82,
	TimerThread_StopTimerThread_m5D33E7D7EAAB667AEE1ABC6E0F832DA361BA83CB,
	TimerThread_OnDomainUnload_m3CA503B871CEE33D278B6995FBF8ED5B92001E1D,
	Queue__ctor_mED7AD466F7A2AD32777D05229BE4E7A6BC358C06,
	Timer__ctor_mF6B46FBB94C7B044423D0931A24646947612D40E,
	NULL,
	Timer_Dispose_mCB85185EBA6CE836BDAA5CB5B5D98326E0279F0D,
	Callback__ctor_m4E3A7A3D8252FA436373FF975A78C11BFE218BEF,
	Callback_Invoke_m429C63F5BE16B526F6875846B107639638CF2F75,
	Callback_BeginInvoke_m41DDA2A728FAF5D8FC7BDD6BAF1E5A5FAA44067A,
	Callback_EndInvoke_mCA87962B7FC7ACCD1BD62977C8A1DF1F2ECC8D1F,
	TimerQueue__ctor_m0AE128C18B38F02F946242A6D18C788B83CF4A0F,
	InfiniteTimerQueue__ctor_m9399FB8D3AF6FCE71EB29A97665E871E9D13C5E7,
	TimerNode__ctor_m18DCD26BDC1FE8F661FE7C056F59785CB48F09E7,
	TimerNode_get_Next_m91904310F38E6EF8D94261890F86387942EA81DE,
	TimerNode_set_Next_m6A6F1ACDE24E867EA3D88F2C889C677AE7AAC3BD,
	TimerNode_get_Prev_m694B4D7BD49FE9A47B961DE0E12FF036B940CEE5,
	TimerNode_set_Prev_m6AE80A4996048AADCBD43D8CFEB5DDB8CAAC1B8E,
	TimerNode_Cancel_m691597518E9CAF2719C10B63577E24DC65A4B974,
	EmptyWebProxy__ctor_m1087116F8816BF3AD6D7ADE134F1579659AA00A5,
	EmptyWebProxy_GetProxy_m41932E59E773523BF705A1FDFD168CAB61F9C4FC,
	EmptyWebProxy_IsBypassed_m91E4C131B35CBE9CE062B93710BC938A608CC445,
	Cookie__ctor_m4C6213C74DBEE7EA95551715F3121F0F59169D16,
	Cookie_get_Domain_m69CE1A4F6A72175C911F5E7137543D8633EDDF8A,
	Cookie_set_Domain_m22FD40A6FA2856E7F8B2B4871951C7DD8CB91E65,
	Cookie_get__Domain_m87C0AA28DF5C3EFA7EC6A84D1D648A6AB7B65A15,
	Cookie_get_Name_mB5D7C54A81F9DE0CC2A28C34A8E1A6728706CF1F,
	Cookie_set_Name_m8CD087B7EAC9BBB3102588927D537E47DC8E854C,
	Cookie_InternalSetName_m119BC4E6C4D01CCF3E10E00D1D0E1A9B3F7F418F,
	Cookie_get_Path_m23B2078A5FEF68D1DF767270BE7F654A730DB7D6,
	Cookie_set_Path_mA51AE39D41EA9A1A6B47C6A735EE9C490CAB02FD,
	Cookie_get__Path_m3BC69BAA03E72DE447FD41AD437B8E4AECE105AC,
	Cookie_get_Plain_mE690884D12C79ABE5CB6C196CB9DEF3E2DF04C78,
	Cookie_get_Port_m1C41A0A7C2A95B29D82FA11B383B4AA84AE1FE9C,
	Cookie_set_Port_mFB8C36FFE4B7D5F19D21A7285D209B3CD44C0DDC,
	Cookie_get__Port_m2842F50E250F1263917F5C9F9EEF4EDA74E578E5,
	Cookie_get_Value_m5DF850D18AEA9A7CA9F9F5B4B1B320263B7F13C1,
	Cookie_set_Value_mD408DC9C452695090A5BFDA8D7977E49868408FC,
	Cookie_get_Variant_m6FDA5BC7A2071B73CA7163197349952BC959272B,
	Cookie_get_Version_m99362C7681CD66CFD1B4E379144A55511C1678AB,
	Cookie_set_Version_m4059439CDC5C879D40FB23F89ED92872CB1C8E13,
	Cookie_get__Version_mE3373F85D5CDF535705977B029D34D742076FBB3,
	Cookie_GetComparer_m82EFA0E1AD44C930482B4B82E5E3A7E811B35724,
	Cookie_Equals_m74305F8EA7C93F817EC69275DC908E47FB301BF6,
	Cookie_GetHashCode_mF39EC56666F1E0C0233FE18131B00E5607A95150,
	Cookie_ToString_mFC5C73DC436E950266395CBEDAD0A11A810B938F,
	Cookie__cctor_m650C2BB9FCA1DDF4624BA3C89FAAEB77D8815A87,
	Comparer_System_Collections_IComparer_Compare_m5F0251A5FB72061E6E62456AD2EFFC72EC38ADD9,
	Comparer__ctor_mF8BEE6E98AA318C038B7E523C70590B404EE4CA4,
	CookieCollection__ctor_m3742A309F3C387A152B388E2A46E8EB3D820131E,
	CookieCollection_get_Item_mB4DA63640CCA0D270DBF03376BCF0CA3CF3F0D0E,
	CookieCollection_Add_m79F761F0B6996E16AE9C0E14FE2F89CE6A57E744,
	CookieCollection_get_Count_mD446FFA03292CE8B411EF6F749E9EDC504F415FA,
	CookieCollection_get_IsSynchronized_m83B74F498AF726EE70F05844578A0DE6A547937D,
	CookieCollection_get_SyncRoot_mDD065ED6344025A5FBB2E02C19E7153E259CFA5F,
	CookieCollection_CopyTo_m0C63CDBC3A59242D48DCCADB513AA13EF3AA284C,
	CookieCollection_IndexOf_m919B3286409A7C63D5AD9C1D3048257B8066FD6F,
	CookieCollection_GetEnumerator_m744F05CAE90510145E97197016AD7DA9EAF85687,
	CookieCollectionEnumerator__ctor_m8C55845548C7E5591CC2F53838F3117A635911CB,
	CookieCollectionEnumerator_System_Collections_IEnumerator_get_Current_mA14163AE9BDD398876E89ABAA64BB74E3B8FA191,
	CookieCollectionEnumerator_System_Collections_IEnumerator_MoveNext_m8136554DDFD93AA8E272ED8D736C5F999AF5D013,
	CookieCollectionEnumerator_System_Collections_IEnumerator_Reset_mB2ABB3AC007745755ED5B2E1A453F1A83465B1CB,
	CookieException__ctor_m75DDC43119C2CC7281EE61CF116B4B6CA7C0A35E,
	CookieException__ctor_mF0D16BDBAD5FBFB8C985756860566CEF64D4F58E,
	CookieException__ctor_m06B64C33C3BED301B52C09B59C59B0C6933F8495,
	CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m8DF4F39BFE904F6E496ACDCB30D29E1AC231C09F,
	CookieException_GetObjectData_m14EBAD80E96AF641B838F61E498562E8C12CC1EB,
	FileWebRequest__ctor_m6BF9BF0E17060D4E719795DE5742BFFC65D34C6B,
	FileWebRequest__ctor_m1FFFB33A0414E016669B3179FF16F141FA6E838D,
	FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m9B6440775FE50243D85010EB8F8D6DDBFE8A3BE4,
	FileWebRequest_GetObjectData_mC8A7DDCA00C0E3ADADB267284F196C4EE9E8D3BB,
	FileWebRequest_get_Aborted_mD504D723802D217E3F741C68EF2576AFC2C0006F,
	FileWebRequest_GetRequestStreamCallback_mCC6AEA46D613AA7B5035F4C5C27E848DC601951C,
	FileWebRequest_GetResponseCallback_m1C0A747466A03A05FF9D6D45456DFAFEEA38BF48,
	FileWebRequest_UnblockReader_m9E687E8F4413F2727339A41C3DE03A7D8ADBEDE3,
	FileWebRequest__cctor_m98058ED26B0744413A32327D2FF6778E4B52D5F4,
	FileWebRequestCreator__ctor_m550EAB9632992C942E14D5B34C48FA6196595B9B,
	FileWebRequestCreator_Create_m5A5314BCF6AA30E63196C05A64ECE6EA11D4E545,
	FileWebStream__ctor_m80D7CF5508F845D57EF371DD820A480A53D5C27C,
	FileWebStream__ctor_m087F956637DD4C2FCE8247EC13021B1E75B35609,
	FileWebStream_Dispose_mC797EE18FAAF3613C73EF95AB81D1E9C0EE9A40A,
	FileWebStream_System_Net_ICloseEx_CloseEx_mDB04D260B47E82C6161F2D65EA9EE8A832D03D18,
	FileWebStream_Read_mBA56658D84F3C5742FE812D1A7AD58116541C779,
	FileWebStream_Write_m79C3CB2CE195D5348D313E6CFA6C8F4394E9681F,
	FileWebStream_BeginRead_m1E98F98D1956A77B4CBD4F111EC895A855C291D8,
	FileWebStream_EndRead_mD4F843221DB3767E3CFB3E052E24E9CC94135302,
	FileWebStream_BeginWrite_mD2E9B62CE8C7FF3A16763BB128E6AC9E31C985D0,
	FileWebStream_EndWrite_m9505A80B585F611DE18E22C9ACC319FB901E6A94,
	FileWebStream_CheckError_m70F0ABB558C83EB00CB830DC1B449E7254B561D7,
	FileWebResponse__ctor_mD521D067A1815BD4E42DE18E13B82FC6EAB58379,
	FileWebResponse__ctor_m8596AAABC73AFAF749351F4B0D2CBFB9214726C1,
	FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m1A6DD095E9F848AD3951E80A670DA080CED12BCB,
	FileWebResponse_GetObjectData_m1553AB318AB78A871A047F1D842356776B283E4F,
	FileWebResponse_Close_mBD2FC4D7E4EDE7C10648E463201E1A1DDEE7D551,
	FileWebResponse_System_Net_ICloseEx_CloseEx_mEB324E8E15B8A2D26F34220B88A2667EEBB02C8A,
	NULL,
	NULL,
	WebProxy__ctor_mD47326CF9857B797EFCC3CA369F83D51D19317CE,
	WebProxy__ctor_m2354821664C2380AF107CBC5C66F0325068C5DA7,
	WebProxy_get_Credentials_mF546D5D8441F10F4A46A9A3C5D52BFFBE7D735B0,
	WebProxy_get_UseDefaultCredentials_m661B51178D8050D605835FCB034A166BF33B009B,
	WebProxy_set_UseDefaultCredentials_m53AF92FFC63A223541B629E01D939AF2A75BB4E7,
	WebProxy_GetProxy_m59215526173C7FD907EC86C35C44AF4FC4EFF28A,
	WebProxy_UpdateRegExList_mEAE558ABD241391C3AAD19D62066AB67EC3AE46B,
	WebProxy_IsMatchInBypassList_m6B8C5DA8C56E6D50B0C84CCD094DB8FFBECDCC93,
	WebProxy_IsLocal_m22583E899743095130F899378336361304BE71AC,
	WebProxy_IsLocalInProxyHash_mB4C405FEB5AFC01644FFE81AA3CB76918A7D45A5,
	WebProxy_IsBypassed_m1DB51D78C18C700F26EEE00938F4A202EF944B5E,
	WebProxy_IsBypassedManual_m96199F172C51F06EE36CCE5D937BDD7BF873FEFC,
	WebProxy__ctor_mC76DA2892292BF1609EE4874C11206819F96899E,
	WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_mB855266F0AA17F2652B6BF6286A749097A9455E2,
	WebProxy_GetObjectData_mF4C20C0FADD55674E00C1E13A16F4A14B2777D6B,
	WebProxy_get_ScriptEngine_m6E040080EC0330E0C15849B1BB6469DBFE92A057,
	WebProxy_CreateDefaultProxy_m0F1C8D957370920707869349941412B6BC3323A5,
	WebProxy__ctor_m387E8EB6694953D1FA4E77E00D449B20E2C0B84F,
	WebProxy_UnsafeUpdateFromRegistry_mDFB67EA19AAD6F1D5BCF9B7D585B33A84D14DC4E,
	WebProxy_GetProxyAuto_m1EACF0FDED5E764C7B3EAF243F39A73646B94CD2,
	WebProxy_IsBypassedAuto_m96DE81A96B947F6F6A25A49D5F5D8430346809C0,
	WebProxy_AreAllBypassed_m6E869A92B478E61C29F0B9D9085E2AC6A075B59E,
	WebProxy_ProxyUri_mE09DD6D37536E7D5AC20A9519DFABCDB974F2B42,
	AutoWebProxyScriptEngine_GetProxies_mCBAD00EC0BE65DF947C48B1DBC377EB80F075902,
	AutoWebProxyScriptEngine_GetProxies_m228520D18B1350998E32FCACF796316DBBBA111A,
	SecureStringHelper_CreateSecureString_m36F065E59FF9B8AC79289E4B2A42F96C23BD4F0C,
	ServerCertValidationCallback__ctor_m01DC1DC5935B7807EA9D35D50BDF9F00B68E1A23,
	ServerCertValidationCallback_Callback_m2F51ACBBF63B010C39B4C415ECD209BFB4243733,
	ServerCertValidationCallback_Invoke_m9A3D9984E12278ACD7DEEE5E4B039A3250D6A8D0,
	CallbackContext__ctor_m98617E58A5FC792C785185C96D2AACADB98B89CB,
	ChunkedInputStream__ctor_m2DE712FA7423338EF880394909919394664ABACD,
	ChunkedInputStream_Read_m59B92BEB22D6F208AC0C0EFD36BDD1A09F9D99C0,
	ChunkedInputStream_BeginRead_m68675B92B4D743BFE4B70DAA940DBB2C324600C6,
	ChunkedInputStream_OnRead_m97AE0F11FDE54199C9EA9A27615906EED3FA4867,
	ChunkedInputStream_EndRead_mE864CF4F961A8BFF84BB85AEB7F9A5A3190109DE,
	ChunkedInputStream_Close_mBB8EBFC866444C7F7CE3B6FD34D78D960A34F668,
	ReadBufferState__ctor_mA8A380510054E0DCC95284E6DBEB22BECACCE83C,
	Dns_GetHostByName_internal_mFEA5DFFBD99C1E7364B146B0F95FDE3F5DA67EC8,
	Dns_GetHostName_internal_m69BF784F0F6C595AFC4B0027E8EB0D465B6845F6,
	Dns_Error_11001_m783146DF96023BA4CAD30F55D8DC527D2ABBCB72,
	Dns_hostent_to_IPHostEntry_mCD03D1D4689BF1B272CB8212506C4C853C6D06C3,
	Dns_GetHostByName_m1DD689606F93DAAB12896C4D3CA6A33731A4CE62,
	Dns_GetHostName_m64F06885E07F05B7FF1AA4F07DD14D2BDC5D6EF2,
	EndPointListener__ctor_m54C31D3CBFD441298FF6A9EC24A0321F8D38ED12,
	EndPointListener_get_Listener_m2CA93971A1BA3BDBFE9DFAE5DA0A1DC9BDB170A6,
	EndPointListener_Accept_mD8F52B46ED8860B598BFCD3258E6487B3638416D,
	EndPointListener_ProcessAccept_mE8F096F5DEFE9260A1E130BB0E9A27EDFEDEAA9E,
	EndPointListener_OnAccept_mA1AF3044F6DD5EEAA1B86DF722CD2363EB9769B2,
	EndPointListener_RemoveConnection_m7742B882C4F715B2F4F665CA40C6B0B363A3D4DB,
	EndPointListener_BindContext_m05EB3B7D9258B12EE03EC62EC8451B4BCD6D7A3C,
	EndPointListener_UnbindContext_mA6A15B7443628157D0201F10BEBC075A0187006E,
	EndPointListener_SearchListener_m93F8A0611DDE2E400DCCB1801AE56033213E9992,
	EndPointListener_MatchFromList_m5CC12177B69E44E9A45D0C32877FCF28CD6A5B6B,
	EndPointListener_AddSpecial_m4D0E9F6B90ADC8786D8EC0B46335C2CBE5A96A17,
	EndPointListener_RemoveSpecial_m5E9261172CA43199B70BB440BD4520B09A8C8EFC,
	EndPointListener_CheckIfRemove_mD62FEF6EE0CD6548E66098B4DF983EC5850C67FC,
	EndPointListener_Close_mA522B3A4C420D3262951C8CC0B054775E7B1B282,
	EndPointListener_AddPrefix_mF0DD3A430CCD8F6A320B64439B28A7650AC90D1F,
	EndPointListener_RemovePrefix_mA0C980601BB75FC311C21125BF9D5FCA6A6B836F,
	EndPointManager_AddListener_m3C1EC5A14C176F471E0A80FCDC998B514A00147D,
	EndPointManager_AddPrefix_mA5662947912D99CBE026EDFCCBFDBD11A1A42FD7,
	EndPointManager_AddPrefixInternal_m73BD9CE096BAEE46D79410CEF14B1ABC03B757FE,
	EndPointManager_GetEPListener_mA47783DB52E13ECDD39BCDD994D90DB23CF8591D,
	EndPointManager_RemoveEndPoint_mCE275FC1DA33EAA113BA3C56D9B9DC35DE020BF1,
	EndPointManager_RemoveListener_m7464BB72956341252E1F2BD4D4F216532423D432,
	EndPointManager_RemovePrefix_m2E92AEE8CDED69211E11C510E34004F30CB75D21,
	EndPointManager_RemovePrefixInternal_m140D5617E211EFF83619F1EBD2D586A2ED303A91,
	EndPointManager__cctor_m1E711681C1B32404C007186BD6480962BF319A42,
	FtpRequestCreator_Create_mB9CD950EDF1B3F06F7C928E490806C12FB1D7306,
	FtpRequestCreator__ctor_m0DACF33EF40A75AE489FEF288DC61837FFFA8BEF,
	FtpWebRequest__ctor_mEB166EB5A1F20FC008DA66D46AADE550EE176892,
	FtpWebRequest__cctor_m3652EDD67F0C55207C33B710F1DA9808E1D31AFB,
	HttpConnection__ctor_mC89B8E8ABF3FBD49061C8815E4C684903F615E33,
	HttpConnection_Init_m5E016F01121112486E95B008DE64DED3D576227B,
	HttpConnection_get_Reuses_mE082676455201FFE36A8AC8CFFDE303261E50262,
	HttpConnection_get_LocalEndPoint_mAA7194231A0274AF6B272FB592C73AFA68B35EC8,
	HttpConnection_get_IsSecure_m37AADCAD76AAF8EF8D43C9F81B7F03198F88A070,
	HttpConnection_set_Prefix_mEED0A522D359C7063D523774E6FDC400DCE9D5F4,
	HttpConnection_OnTimeout_m995D49B1EF3B50A765E6923361214F1E2F1D44B8,
	HttpConnection_BeginReadRequest_m49E9C5419554CDFDFD015538D4E7DB451F995ECA,
	HttpConnection_GetRequestStream_mD0B9231D2AD11FA79DBEB76BCF4A5E001DD18387,
	HttpConnection_GetResponseStream_m8D1FF7A2F3E7418B0423BBF8840A88D26E3FB85A,
	HttpConnection_OnRead_m25FCD298724C68C39C38A6E1413DAE5200A4B4A5,
	HttpConnection_OnReadInternal_m21F283ABFFE293CB1CF316C1AFA644F9DC0B5433,
	HttpConnection_RemoveConnection_m825DFD965E0DD9F3FBAF0E602BC4C1F5009BE8AC,
	HttpConnection_ProcessInput_mC775E5BF8EA69F9655B166D26AADE38D991ECAA1,
	HttpConnection_ReadLine_m37DD80AC98202982E34432F40E43785C3490CA2D,
	HttpConnection_SendError_m35C1F2F213A5F9099F4C65FFCC70B7E435005C22,
	HttpConnection_SendError_m5E862B9B410A7A66A8EC0BB071BACC10901A3FE6,
	HttpConnection_Unbind_m377518619413A3C578AF4AF3FB18BAB3EDE7BDB0,
	HttpConnection_CloseSocket_m027C057CDCB8A9C13A4CE0938207CCCC30ACDE12,
	HttpConnection_Close_mCA444D5DFFA3D155AB639B5446AAB3A2831289C1,
	HttpConnection__cctor_m706E6BF3D3307F00707F3D521175B2C3A28F3D47,
	HttpConnection_U3C_ctorU3Eb__24_0_m579DB39285B169C68A29571D00577071265335B7,
	HttpListener_LoadCertificateAndKey_mE776961752BF6408CD74C8DCE60A50F3A58923B6,
	HttpListener_CreateSslStream_m317FFED208849D80505030EADECD5A8D3F1C4B10,
	HttpListener__ctor_m59C511B3E5BDB0D23075C4340C860D1126D0453C,
	HttpListener_get_AuthenticationSchemes_m294558B2F1C001485D4E9906D5678045A66C3F56,
	HttpListener_set_AuthenticationSchemes_m6951DB842EC8A0BCAD513D393FF10A1F615EBC1B,
	HttpListener_get_AuthenticationSchemeSelectorDelegate_m0ACF2E7E170954F70E19941F3FFA40503D27A864,
	HttpListener_get_IgnoreWriteExceptions_m2046086D2E972DB9E30242023F4029091A597621,
	HttpListener_get_IsListening_mD5CECF2E549AB93219ECB920A005C3582D5C35F3,
	HttpListener_get_Prefixes_mA88067E63B7DB286AA7100BC37AB146F60D0E2E3,
	HttpListener_get_Realm_m82C2D05926740AB57E934D7D59BE5D3B055A8798,
	HttpListener_Close_mC91CB50428FAEDFD0F54FCEFA68916D3C85E9B23,
	HttpListener_Cleanup_mF6730F2869A448F0552CCB0F352F8FAFBCCB3A9B,
	HttpListener_BeginGetContext_m0830C8243AF34181A120D719329696659640385D,
	HttpListener_EndGetContext_m6745B6B41D204243343F344EFD35BE7CE512D6AA,
	HttpListener_SelectAuthenticationScheme_m74CC9D17A6DD6D98E97643AEF65B555FCAFCB013,
	HttpListener_Start_m0E024DAFAD85BCF05C8D3EBD27B2A13DC8A0CE5D,
	HttpListener_System_IDisposable_Dispose_m83461203F6F2EFD10F40FA8784A0B3894CB3C26F,
	HttpListener_CheckDisposed_mB5B9D9C1CB58A767A8C2E7EB609094F4BA139D66,
	HttpListener_GetContextFromQueue_m0123ED8CE2EBE8EBADD43B3BAF15B6E5A3666B62,
	HttpListener_RegisterContext_m87E14D3A83E9BCC20DC3CE87C4B84BB10B634DCB,
	HttpListener_UnregisterContext_mB17E2AEFD86C23D8515D88603C99A6635A5D9202,
	HttpListener_AddConnection_m8B74A1D0207D6557348C47FBB13D69D34FF8FC90,
	HttpListener_RemoveConnection_m8671F8EC617E0FE8C2505A262EBAE20F4C66B523,
	ExtendedProtectionSelector__ctor_mF12DF1826EE9DD0DFE653DF2ED6AD8ABBF8D5EF2,
	ExtendedProtectionSelector_Invoke_mC5DB64A93FE40C877DBE168087C44AC3A0766DAF,
	ExtendedProtectionSelector_BeginInvoke_mC1C578FF0D7A67E16147446242EB654C349A7D4A,
	ExtendedProtectionSelector_EndInvoke_m940258FBEEF451BF5EF56481921E931E4CB42EFD,
	HttpListenerBasicIdentity__ctor_m10B28B31D0EA57A9D0CB762A762CED2A5331A175,
	HttpListenerContext__ctor_m74FA6EF51D915EDB82A5D6FDB6897BCD8DC70CBD,
	HttpListenerContext_get_ErrorStatus_m281DD827BBFEA59124F6DB7AC4B357C053F61833,
	HttpListenerContext_set_ErrorStatus_m1F1D72CF97FE5ABB9FBD3C032A0715F455102DF1,
	HttpListenerContext_get_ErrorMessage_mCC16741387091E5B2D8ED97FC76D8100F0A11710,
	HttpListenerContext_set_ErrorMessage_m43D9416187ABA26AE090D81A2C96ABA41589B180,
	HttpListenerContext_get_HaveError_m1DB88FFE938554B1611A620932A4671A46FE0C09,
	HttpListenerContext_get_Connection_m23EA69C5DF40D21EC8E390156F4ED8CC1C12E8C3,
	HttpListenerContext_get_Request_m31DDE359F2E159B3D9484A1E24578A2B8B92884A,
	HttpListenerContext_get_Response_m2085D1445CC3EF8F9A94E07D7DB4269615F727B6,
	HttpListenerContext_ParseAuthentication_m20EEE3907637C01C767B761F12B910F342DC467E,
	HttpListenerContext_ParseBasicAuthentication_m425EC9CDED67EB011EF3CB6022EE9867D923CBB7,
	HttpListenerPrefixCollection__ctor_m7F843382088E5E0C856663CD18856FACDEFC27C6,
	HttpListenerPrefixCollection_get_Count_mB0E5FCD1820438F55EDCA9F6C0635564A8461115,
	HttpListenerPrefixCollection_get_IsReadOnly_m4A3BA267C6539C7A9CCA8F9D12BF2C075718D819,
	HttpListenerPrefixCollection_Add_m0693A426561DB4401E5961FE76EBA43881C47680,
	HttpListenerPrefixCollection_Clear_m98F488FC3E3387167C423415123A702A94A62FBC,
	HttpListenerPrefixCollection_Contains_mB5E5DED725A213FB1718B58C1082CC4377031EF4,
	HttpListenerPrefixCollection_CopyTo_m1600BAAC627A2DCA1370DF640D4FDB58CACAFCD3,
	HttpListenerPrefixCollection_GetEnumerator_m1AF6FD036D49288BC42C489FE3A0739A6AC612EE,
	HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_mD1B11C52B10F4CEFD7D6439EE9B7085B717E5C3E,
	HttpListenerPrefixCollection_Remove_m62EBE00D6A52DBAFB32F0F1DA2B10D7FE4E8D735,
	HttpListenerRequest__ctor_m05F44E2041D0DE97E280BE5FAA1D877F15BB8F2A,
	HttpListenerRequest_SetRequestLine_m918E4F404836802794B9410349A9C1F49A6115CC,
	HttpListenerRequest_CreateQueryString_mF0443B6BBE24E0E4409C8BFAAD4CCF2D87B99CE8,
	HttpListenerRequest_MaybeUri_m6FBA976D26E206B7303461DB0CA6C425886668A3,
	HttpListenerRequest_IsPredefinedScheme_m3C944DB8ACB5215D3A112D1C65F4F92DCF4AE221,
	HttpListenerRequest_FinishInitialization_m99A3F1FCF7AF0871ACFD2192983E7964D2BC359D,
	HttpListenerRequest_Unquote_mD47B61B703A8C3ADB6210306EC779F0367C6FC35,
	HttpListenerRequest_AddHeader_mF2BFD4B0B577C18C7E48618310D5CFC10C3BC50C,
	HttpListenerRequest_FlushInput_m3DC653BB14BCC7F4E5E0AC36314BF8043C1AE7A1,
	HttpListenerRequest_get_HasEntityBody_m4C06CB7257D7C96A8CFC9254D990958EF9E89370,
	HttpListenerRequest_get_Headers_m6BC33B14947E185AA62CF9A5B5126E85E573E0C8,
	HttpListenerRequest_get_InputStream_mCAACCC5B94ED051304D3C3F5E9E9B13E36EB0485,
	HttpListenerRequest_get_IsSecureConnection_mDA2EEFAE0538342F28A395DEC35638419FAD5940,
	HttpListenerRequest_get_KeepAlive_m42403F34CF14A8BB0835F2C5CE726977FECB4AB6,
	HttpListenerRequest_get_LocalEndPoint_m4DF657A94279FCA01508F38E49F240FF540E0255,
	HttpListenerRequest_get_ProtocolVersion_mFCBF5E363AF6B80131A3F0432254F35F3B0254E2,
	HttpListenerRequest_get_QueryString_m53095961ACB1683994DE2E840BEE6D4655BC4995,
	HttpListenerRequest_get_Url_mD93614A6AFD2D6B55C6E9A21C8A2BC061A00E295,
	HttpListenerRequest_get_UserHostAddress_mEC524FAE07839AA2F95F6A5268816BA0BE3633B5,
	HttpListenerRequest_get_UserHostName_mD2F1DF70E8DEEB5956755C2C7E18E71B2C6DB584,
	HttpListenerRequest__cctor_m3677A5F3BD973B779B9E1D9BFA2E631EEB215CED,
	HttpListenerResponse__ctor_mE3EDE6FF5F3A7CC558B5D454A2981A95A57BCC68,
	HttpListenerResponse_get_ForceCloseChunked_m3894D8E041E4E813C01623CBCA5DE0A8094923CC,
	HttpListenerResponse_get_ContentEncoding_m4859C117644716FC7C59F71E234E3BC63DFA98C8,
	HttpListenerResponse_set_ContentLength64_m6FB267A501DF573E6D049379263C64FF6AAE4FFB,
	HttpListenerResponse_set_ContentType_mFBCB2B715262024BD94011123DC12EA214FCF03D,
	HttpListenerResponse_get_Headers_mB59CF931610417635CC4BABE8B7D290BF03EEDE0,
	HttpListenerResponse_get_OutputStream_m01ABC46AE997BB7B8444851022CB8AF5A5BDE04A,
	HttpListenerResponse_get_SendChunked_m69AB28998775B4010F9F825CA9CFDAA5991D2BF2,
	HttpListenerResponse_set_SendChunked_mFA4042777705A2ADE772E9451289A9C202B92752,
	HttpListenerResponse_set_StatusCode_mE5177189858DC4387B64BE25C2CD1EB2CA640B7E,
	HttpListenerResponse_System_IDisposable_Dispose_m00D3944B2EC3F9427839928E72F40AD604DF2D50,
	HttpListenerResponse_Close_m4D6239F656BA5A27B356F2CC4CB3282EA3F9941C,
	HttpListenerResponse_Close_m4BC799B13E1F8179C28DC06D88BB785E1D5E5CC7,
	HttpListenerResponse_Close_m3DC2839AF58BFE3EB51DF9EB85C417937ED2D727,
	HttpListenerResponse_SendHeaders_m920B4970C235685AF9D31922F439BC17BEDAA72D,
	HttpListenerResponse_FormatHeaders_mA8396DD070238C3BD0ED86D8BB3FAE5EDA57685B,
	HttpListenerResponse_CookieToClientString_m40C1D48DC33DB88C8828C0E1738EC76979A518CE,
	HttpListenerResponse_QuotedString_m229C13FBD29DEF4B1473C47E715D562EEC04D3DE,
	HttpListenerResponse_IsToken_mFA72D36AD4201A6F67F8B02903A01C059C8BF69E,
	HttpListenerResponse__cctor_mB4BD1B27C1FE93201D3D7080B07A3B4F3E74F9E7,
	HttpRequestCreator__ctor_m2B7DE24FCB9C1814F8972B4B167127F86DB1BF39,
	HttpRequestCreator_Create_mE3E077C98503C150AA328D4EED41FE9F8F518F46,
	HttpStreamAsyncResult_Complete_mDB23BE76DFB365414990E99E2E92444A227962C9,
	HttpStreamAsyncResult_Complete_mC1030C76F1981781353B3794B07449EAF2EC285B,
	HttpStreamAsyncResult_get_AsyncState_mB0FB22F9CEC2E745C0FED548AE2F8C7E8BD273E3,
	HttpStreamAsyncResult_get_AsyncWaitHandle_mECD39326E9A99354CF5BC0F65DE933F9596E3D13,
	HttpStreamAsyncResult_get_CompletedSynchronously_mDB9C9040A74CB55EBECF27C408A83CC469268033,
	HttpStreamAsyncResult_get_IsCompleted_m477D426A6F4664A5B440A9EC03E401E7D027FBAC,
	HttpStreamAsyncResult__ctor_m25F2E2EDB37FA185E2405746C68F72213F2BDD14,
	HttpWebRequest__cctor_mA59FB9F51019C563A3B276B79A1131CFDBE0035D,
	HttpWebRequest__ctor_m85AA1BD537DCDBF3B1BCD75F6C93C6AA8B831D7F,
	HttpWebRequest__ctor_m85CA8AA15E849598BC5ED6217805CBDF8D5BAA0E,
	HttpWebRequest_ResetAuthorization_mAA12582B7D5B809AFFA7559AEA5582AADD6B23AF,
	HttpWebRequest_set_ThrowOnError_m7A186C503E47933A82ABC3AA32081213004BF0FD,
	HttpWebRequest_get_ServicePoint_m7E95E58719904639C79F9420F080A3F94BAB63EC,
	HttpWebRequest_get_ServicePointNoLock_m6749645299E6A6C85445E9B7F2DAD248FC6FA1E1,
	HttpWebRequest_get_ServerCertValidationCallback_mE535B7C3510E634EF8B2E2C9698BE4069D376619,
	HttpWebRequest_GetServicePoint_m2F4A5E8A7A723C3CA97203FE2A4D9913EAC185E6,
	HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m14EED4626353FF9CB5ABAC2978C2CA37890306AC,
	HttpWebRequest_GetObjectData_mF600B207AECA50F8B6ACB8D4C29366A6ABE36C45,
	HttpWebRequest__ctor_m71D51512F53504F6BCBCFBCBBCB5D803357145D0,
	AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D,
	AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A,
	IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497,
	IPv6AddressFormatter_SwapUShort_m6B7BA905E96BB0889C580EE25F3614C7A4A9164C,
	IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F,
	IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC,
	IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127,
	IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F,
	ListenerAsyncResult__ctor_mC4AB3908C39F37C81C2075AE812A9BDC17064201,
	ListenerAsyncResult_Complete_m0D2E6AA7B5F6B994246DA97EA3C561417ACC5249,
	ListenerAsyncResult_InvokeCallback_m920A16394D6A979A9C570077092A83851A8B49BC,
	ListenerAsyncResult_Complete_m15E80200E8288CDBE4D5353239C1FE651AAF0573,
	ListenerAsyncResult_Complete_m9830113594EF45845D7C0E6B4F7B4BEE485CCF36,
	ListenerAsyncResult_GetContext_mA02D57CC97748D24774E9D8A633F779EDFBE5B7A,
	ListenerAsyncResult_get_AsyncState_mEA260222B73D72FDAF085C356C3C14875FC3BDCF,
	ListenerAsyncResult_get_AsyncWaitHandle_m4EEF3C3D11E1DC77400AB151DD0F144243EAD673,
	ListenerAsyncResult_get_CompletedSynchronously_mAA0469DBFA03A6D5C09ABD25C37AF31DF64DA6C1,
	ListenerAsyncResult_get_IsCompleted_m50AFF9534CD79AB2A8F9892F32D776FF2C665D83,
	ListenerAsyncResult__cctor_mF218123055CF8AD57E687710FA42C42E4A1220B4,
	ListenerPrefix__ctor_mDC93EB3FEF4952C672F2DA112BE72A5128D32EAA,
	ListenerPrefix_ToString_mDB70910FF216C56828DC906D6D723AD54A1E5A1C,
	ListenerPrefix_get_Secure_m78CA8306058F230CF33357CE64BB406C99BE9FC2,
	ListenerPrefix_get_Host_m8B025062AED48A389D360E5634CB1D8F71C57922,
	ListenerPrefix_get_Port_m97510B4B7EC01259CC6AC92ABFBC46A59759078D,
	ListenerPrefix_get_Path_mC718A6512953E27A7E9E7BD9EA15411E64810154,
	ListenerPrefix_Equals_mC9483483C94A3A626D590ABB264B1DD36D1556DD,
	ListenerPrefix_GetHashCode_mFD8AEECF3DCD25CC9BBA2D0E2D312365DD6382DC,
	ListenerPrefix_Parse_mF1EA321D12DE0832152341C3F266BE8327AF3BCF,
	ListenerPrefix_CheckUri_m0C7B48BA9940B32FB2350DB875E96F4279A25423,
	MonoChunkStream__ctor_m0ADB25AFE1F9EE78C3304F9B7133F6F2F21013E8,
	MonoChunkStream_Read_m951C0443C1B74F4CFAFEB6ED95552A7C76D4E982,
	MonoChunkStream_ReadFromChunks_mC95825D03391872071791EA8FB8D4A0B6CFA26A5,
	MonoChunkStream_Write_m045364F47D0ECD587C1022ADD5047BEDEF1DC27D,
	MonoChunkStream_InternalWrite_mD2577E7811A8F5E5FF8E2B7AA93CCBD5312B3FB9,
	MonoChunkStream_get_WantMore_m8815C437B775BD488B25574CB64E644AD9A1A73F,
	MonoChunkStream_get_ChunkLeft_m564BBC27EC047620C34B5FF91B304BC9263E85B9,
	MonoChunkStream_ReadBody_mDDD46697977E46299A9ED189BDF61C5AC53A8002,
	MonoChunkStream_GetChunkSize_m2C862194032B260C7AD357B7CE2295A6ED488FEE,
	MonoChunkStream_RemoveChunkExtension_mD14D135C11A5F24FC208CAD57322D9C800B047FF,
	MonoChunkStream_ReadCRLF_m3D8A642EDF489046BDCD5A0515D74628F1222E18,
	MonoChunkStream_ReadTrailer_mAB5F0EAFABB2F3FCB6748ECED41E840872B40AF9,
	MonoChunkStream_ThrowProtocolViolation_mC9B0B1760F312148830161608B10224D40D42192,
	Chunk__ctor_m8FECC33DD2DE884EC860B9832A223B11CD5465FF,
	Chunk_Read_m765BA24769BDBF6F3D285F0190A62AAE5144E072,
	RequestStream__ctor_m206B954FD7FF9D6909349B9A0E8A4537C3DA2995,
	RequestStream__ctor_m5B593BCC47660821F7B48C3D9DF600B84B8A3E0C,
	RequestStream_get_CanRead_m9DC20E266493489F0B335674DB39398B5790428F,
	RequestStream_get_CanSeek_mCB2D57FCC50FFAC8CB771DE4A72EB55D388E99E8,
	RequestStream_get_CanWrite_m1BE35FA0841A3F6473CB907ED00BE5EE5C395AC4,
	RequestStream_get_Length_m495CBB4B82A6D15639A15EA48FDA891A57A446E0,
	RequestStream_get_Position_mD09795CAF2174A973327DFF5CC84631FDBC2ACE4,
	RequestStream_set_Position_m15113E234853DC0E6A760182CEC38CE5815C0EA4,
	RequestStream_Close_mE980137D9C7032A1EE81EA0E80C3EB0B0A2A1399,
	RequestStream_Flush_m11BEFF827D83476ECB749C24CAAF9B7F02F42A38,
	RequestStream_FillFromBuffer_m0BB2E8FEE8C021609ADAE797F4EFF5166CB57E3F,
	RequestStream_Read_mE62ACA4C7054DE2BD0AFCE5CD5D657DFA1215DC0,
	RequestStream_BeginRead_m0CB60D3D0E40A8131E7CC0BB697333ED9D58F4C7,
	RequestStream_EndRead_m250B13E91C2C7F972B29831BCC50D768EC810A21,
	RequestStream_Seek_mDDD627D28FE9B5901757B13B404BA78D7F4C1B3C,
	RequestStream_SetLength_mCC207986CE0F6119592D750BAF18A36D8A1B6C02,
	RequestStream_Write_m72B1E1200FA740C6265394FD377A77596E388546,
	RequestStream_BeginWrite_m661C0D319597DBC0D231BE52AFAD6FCB19479FAA,
	RequestStream_EndWrite_m390E25600DA0661FF308E11D0E381FC0BBE94209,
	ResponseStream__ctor_mAFF4A2172A39DF0068BF11AF2390A060319D76F8,
	ResponseStream_get_CanRead_m9D9F9E34C01491124441AE0DB15EC364AB4239EF,
	ResponseStream_get_CanSeek_mEA5E20F91EF981676080D94EFB0F1527A0D383D0,
	ResponseStream_get_CanWrite_m1CA988F132FB0ACAA82A5F0D38DF9F3DA9E94203,
	ResponseStream_get_Length_m0A6B96CF12EF3ABDBC1A9179D5A3E2E57A100387,
	ResponseStream_get_Position_m684A9CC1D14D52FACD8A46B49DC1DC80891C0476,
	ResponseStream_set_Position_m9CE3868FFDF13E23BB4BA8076A4BA52022AA9BDC,
	ResponseStream_Close_mF68760CB56FF4EA4A09925C002DD6A13DDAF6512,
	ResponseStream_GetHeaders_m6E864FA81F8D6AB2DC6549EC411B3ECB79AE5E6A,
	ResponseStream_Flush_m2392922E717821AE222DF0158A900C349F9DAFB3,
	ResponseStream_GetChunkSizeBytes_m95DA9A4823789C2538080E440343D2D9190B7A13,
	ResponseStream_InternalWrite_mCF6D9641906703FBEEBFA2D087903089555DEAB9,
	ResponseStream_Write_m9E43D95A2A7102BC29773D390A50CC950CA62E9A,
	ResponseStream_BeginWrite_m51AD3DFB657F82FAF1981E5433B5740EDAC1D9C4,
	ResponseStream_EndWrite_m303729170A8235CF049994EB4CB57A9919FF57C0,
	ResponseStream_Read_m1F5B4ECC41231E2FD90B685824613F1CFA4E2B06,
	ResponseStream_BeginRead_m04740FAAD574339F4575D4D663370527394CE6AD,
	ResponseStream_EndRead_mA77EA9FF6E1B15E736FE17E6778ED26ADAAA27AF,
	ResponseStream_Seek_mE257A659671903F4ACB52BCB21FC7431817028FC,
	ResponseStream_SetLength_m534BB0958AFB203D407F2DD8182EAFD905A9BF46,
	ResponseStream__cctor_mA2E2C0D564ACECC92E3D3F9A35C63303FB024BF1,
	ServicePoint__ctor_m788957B0CF9F256F581975F6ACDA0DB122D2BE85,
	ServicePoint_set_Expect100Continue_m9F795AEF8CCA79C80CDD27F7EA7AD01DAD92618B,
	ServicePoint_set_UseNagleAlgorithm_mA40D127E6B6DDB7FE8EBDE9A075FF0FF96CAE3FB,
	ServicePoint_set_SendContinue_m92320EA69F94AE266D2C8797E5DCEA965DF5C8ED,
	ServicePoint_SetTcpKeepAlive_mBA9E8F9615C7BAA38E396F21B73549BE72AFB165,
	ServicePoint_set_UsesProxy_m81B24DCBB2CDB67877B1631AD53EA4925B2D77D2,
	ServicePoint_set_UseConnect_m63B28421D36EA6064A66588382A7381C9318CAA2,
	ServicePoint_UpdateServerCertificate_m4D130D9346CC9D940FE6CB00B40FB9B976853F01,
	ServicePointManager__cctor_m5E74472D2F21CBE2808E62160416C0F572306498,
	ServicePointManager_GetLegacyCertificatePolicy_m91F5A99F923B7085226C21F50BD30C1BC056EC98,
	ServicePointManager_get_SecurityProtocol_m4A583697C87EDA716E3512FB151B3916B770C667,
	ServicePointManager_get_ServerCertValidationCallback_mD060FAFC9DC69DA28963397C5C61BED8343C0381,
	ServicePointManager_FindServicePoint_m9941E847AA8745D9CEC1CCB2559BD0348B3B58BF,
	SPKey__ctor_mEFB0271B87BA8145BF5ABFBFC580444AC87E8378,
	SPKey_get_UsesProxy_m43005CE469081EA1C0EBCDCEF7047817882A13EE,
	SPKey_GetHashCode_m4686BFC3EE7C5322B912BCC739EA3C2AB33D8622,
	SPKey_Equals_mF29C836C97373F9F739EE977115DB8F521921CFB,
	SocketException_WSAGetLastError_internal_m18F05CF8D9CE2435225A4215ED757D8D98716FC3,
	SocketException__ctor_mB16B95B2752EAD626C88A5230C1A8FEB7CF632CA,
	SocketException__ctor_m68F7126C5B5AD6C6E1EF8A06DE8F5068D6A46002,
	SocketException__ctor_m1853BFE92CDFB7A46B2AD59841A3B1DB95244533,
	SocketException__ctor_m2687C4EFA4D012280C5D19B89D8D01F97B6A2F1A,
	SocketException__ctor_m4C36461DF98089890FBF01908A4AAD301CABE071,
	SocketException_get_Message_m50B9DF4BB6F3B20F650E2F965B3DD654C8970378,
	SocketException_get_SocketErrorCode_m2ADCFE3E77E69B2C54930319F2B72BABCCB8A824,
	LingerOption__ctor_m3DF407AEF218AA4C7291FF92543BE0BAD40B760A,
	LingerOption_set_Enabled_m698CECD028CDD6D6E7CC82C12D5A0B7A291A74B1,
	LingerOption_set_LingerTime_m366DDFE3598E938C9EA7C288E306682E64D44755,
	NetworkStream__ctor_m9629E0E9BD6011BA4E7E923B71410EC3A611FE83,
	NetworkStream_get_CanRead_mBF98E4498C6F7C76D911F675962F544DD6336BCF,
	NetworkStream_get_CanSeek_m6D65109C6D751B848B97C220FC02B75A4B833A14,
	NetworkStream_get_CanWrite_mDA3F37747199641E18F088E19FDE4E05BD45B4A2,
	NetworkStream_get_Length_m6CF8079769A034BEE882C1E02FCA16F67F80DC11,
	NetworkStream_get_Position_mB8AF2E84720E0D5FDA49C24673667566316C167F,
	NetworkStream_set_Position_m07B5B94010D39A5EBBE763C916F5A344DD99DAB4,
	NetworkStream_Seek_m206C93B5C10E443853C7DF8C0D094328AEF9F94B,
	NetworkStream_InitNetworkStream_m4749E17D45A2B9F3452ED76D673C59B6CF09E542,
	NetworkStream_Read_mF5137678893C1868A0B56475E63493D349A17A5E,
	NetworkStream_Write_m2CF72A308913D3CB3EA37F5A3493FDA0A51FE910,
	NetworkStream_Dispose_mC4F2E85F8F098254D60ED053F5D3E45CF7B2B4E0,
	NetworkStream_Finalize_m97B1A123AB9C7EF73CB91684189632C4E86BD422,
	NetworkStream_BeginRead_mB4803C638A3A3265669A663DBDA859DC5A5ED009,
	NetworkStream_EndRead_mAFBB41B6DE1BD74C47DB890C5BC3617172F9F14E,
	NetworkStream_BeginWrite_mCC5FAC2886E330DE2E1DB4B7D4509F6F110396D7,
	NetworkStream_EndWrite_m9A30266EFA0648D3E2E22F6097271FFF8C00E501,
	NetworkStream_Flush_mD24343AA0BED24CC098BA9BFF2F118CC0865DB40,
	NetworkStream_FlushAsync_m4E4DE1531B963961E9FAED684DC08375EA0FE2DB,
	NetworkStream_SetLength_mA3CA693C34E7EF187E55731B089D4A38319F2CB0,
	Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83,
	Socket_get_SupportsIPv4_m2D8B6C4B1E1359F09B4C8C422B2AF38A39C41F81,
	Socket_get_OSSupportsIPv4_m0A5CF1017F08C741FE899C3D457A1C678EAFD599,
	Socket_get_SupportsIPv6_m76AE5D0EA624C0AEB6EFAE0E56B3956C9A734FA4,
	Socket_get_OSSupportsIPv6_m923EC612566AEA217F71397FD8BED111AC951DED,
	Socket_get_Handle_mA1965009F9BACF2047AB982354B00E1C0A95D4DE,
	Socket_get_AddressFamily_m33B7B2581828A024C81CE52DF4287A2447A54D6F,
	Socket_get_SocketType_m61AE4997710B0CE75832B42919A2892F00740E37,
	Socket_get_ProtocolType_mE9C131BE9AEA271B35821FC80C8CB62414E1546E,
	Socket_set_DontFragment_m2683AAA1C87A0E2CCC426EFA4D8BF5790AA2D136,
	Socket_get_DualMode_m6FB7069091397FB35DE520DADBC6F28A45E6B68C,
	Socket_set_DualMode_mDC9084953B95EBF0B75B69D0E37F7E8B43612C9A,
	Socket_get_IsDualMode_m5F32679545518176E4AFE66901AF86DFA6499655,
	Socket_Send_m1ED8F737070D66D68B93B64E09ED9C726AA75638,
	Socket_Send_mBBAB318D0BB5BF0B8FA4C9192EABCC4B179429EE,
	Socket_Receive_mFC7C84096D49297C58D498DB0DF7496967FC9759,
	Socket_Receive_m69B3F392972DFA666F0C869F2349F8486DE472D6,
	Socket_SetIPProtectionLevel_m01CE85FD88045EA923BB9F8506C467883B5C7F52,
	Socket_BeginSend_m05E491600486AAC8EFAF5F4EB0C24B13210D640E,
	Socket_EndSend_mD941F4E5F502FC0EDCA70BB7CB637217320709EC,
	Socket_BeginReceive_mB2AF6DAADA16F7F3EC36ED5A05C7A22C2F819E30,
	Socket_EndReceive_mF4C73ED2C78731706B7891AB94B7D4EF084476F0,
	Socket_get_InternalSyncObject_m7325FA3D411ED7E590F9E026CE2859CB654B614F,
	Socket_get_CleanedUp_mFEF17F0AD881817F7A8A0B584E0077E968373684,
	Socket_InitializeSockets_mB1CBCEFBB0AC0E6848D38A0EEA33EACDF6A9EC7F,
	Socket_Dispose_m34C079AE162CF588FB9FFA9F76B010DF337DE362,
	Socket_Finalize_mF2575EF924283A62F9064992816393410D7C880C,
	Socket_InternalShutdown_mE1DDB563CF7D94D792F6C2F32FECEBC8270D4E81,
	Socket__ctor_m6F08E0C60ECB2DC6DDD921D729D7BD7AEB6A633F,
	Socket_SocketDefaults_m3AE1F652A9ED2E599A57BFDF82EB39C4EF32DB32,
	Socket_Socket_internal_m6EC2025D3A1C29EB966E6FD091C28ABEAB080E21,
	Socket_get_LocalEndPoint_m5BA68FA5F390F1F8913FA78F919FD9364B669E9C,
	Socket_LocalEndPoint_internal_m3042AF8FDDF9D3409FBFBCD332CAC9DC84D43319,
	Socket_LocalEndPoint_internal_mF6DCD0F8A684DC0ABBD07C1CF36BA9741B39410F,
	Socket_get_Blocking_mBEF4541F893F4ECE9354245BF7E6D8C5118206FF,
	Socket_set_Blocking_mB447A573F44452B55F5D6B6105FD1C55865E0EDC,
	Socket_Blocking_internal_m13B3D6C3A383411BD26F8EED6BCA4C6517E49BAD,
	Socket_Blocking_internal_m4F1F07A40A6FD3CFECC7F7F836B52337C61833A9,
	Socket_get_Connected_mB757B01CF081289D443081672D65CDF8AD76D3DE,
	Socket_set_NoDelay_mB51929BB6C13E4C051C59B62A9C5CBEA3A129D76,
	Socket_Poll_internal_m0EB7285E1AE8CC42F200FDE13C8991EE4659D276,
	Socket_Accept_mDF6F7AA1AD7C6E5AB1154C94BF6C7294B7E410A7,
	Socket_Accept_mC12CAE783F87CD63E6FF83D55F1973C2E5E7BDEC,
	Socket_AcceptAsync_mA1AFDA952C7982309B9A1FDB18FF69DDC75A3FB9,
	Socket_EndAccept_mABD175ECBE095DE93D623259610B1332911266A1,
	Socket_EndAccept_m005E845E347FEA71E41BDB1AFE9E5A39BC393D04,
	Socket_Accept_internal_mE1FADFF816972DDE8AD35519E92D69B4F9D9109D,
	Socket_Accept_internal_m52A4190380D5DFBB0AD1F4AB6D2F0A49850FD3B9,
	Socket_Bind_m839E8CD90EEB61CE1AE5274224F9049A7D4C7A30,
	Socket_Bind_internal_m3E7154040E7446689883A441D55456E7562F2E47,
	Socket_Bind_internal_mE7C0A0306E3AEC46ED06CAE920C799B7B92AC8E9,
	Socket_Listen_m2926E72970BEAACEBD9C140E89DE47A523BAB540,
	Socket_Listen_internal_mF351F058B339E905D497FE522C2E74080A444D10,
	Socket_Listen_internal_m9B7599632C30804400D22A556A758D4A0B02F145,
	Socket_BeginMConnect_m97B0959875F9DD732C1B90D08E00018D383AFFE4,
	Socket_BeginSConnect_m91344C94E64D4215A8CD2F6FD63067DBF32D97F7,
	Socket_EndConnect_m0CFDCA9629EAF8E764A7EB9D61C9DDA83988209F,
	Socket_Connect_internal_m907A5990A8F440BA59CE041CF7881FF9C2D7E8AE,
	Socket_Connect_internal_m0CF19A6266F179B65384D3FBB8B0D0792E055A97,
	Socket_Disconnect_mBE602342DA1C63767110C02BEFF1C45E45037619,
	Socket_EndDisconnect_m3CA2C23A595DAB49DB71A18E24E98BE63ABB09B9,
	Socket_Disconnect_internal_m3CE5479D4ADE00354F21C2B6B40B7DE4C30F8068,
	Socket_Disconnect_internal_m97B2794B8CF301AE28B1151EDF0CE8F810636D0E,
	Socket_Receive_mC87CCEF55EF312730B08629F4EA24F4D4311FFC3,
	Socket_Receive_mA822C50F868C16CA33ED8BEAC5AE2F7D0018F345,
	Socket_BeginReceive_mAB09C0EF50CCA20B368771E0FB56F788A10C5C21,
	Socket_EndReceive_m76672177BFAD926BA214D664EEE7827AFEA0693B,
	Socket_Receive_internal_m55FA162A25E221777277E755B9A3B4D8BCB1CDB0,
	Socket_Receive_internal_mC2987A1339F02BD493366DF0C3FD9A63BF9F0268,
	Socket_Receive_internal_m0DBCB62396D083723FA9E43B847278DE07591E59,
	Socket_Receive_internal_mED8291F42882678A0E7D65A7697E890FCCDA9A46,
	Socket_ReceiveFrom_m743C33ED62910EE4B6850400AA0FE7D44337C112,
	Socket_EndReceiveFrom_m534A60EABD1A1FCE593901355FC7E840C94B1AA4,
	Socket_ReceiveFrom_internal_mEA5003975D91AB2F18A6CF7E6889FF0D3D139B31,
	Socket_ReceiveFrom_internal_m43D3E1FA721210154B38D2EF7F2135625C61A613,
	Socket_Send_m4652C4C32F15F5B18A7AF28086B87C074844AEA4,
	Socket_Send_mFBF7C653CB5BC6BA91F4415378F34F13897259DE,
	Socket_BeginSend_mA6C244A07735EEA6B4DA335545237F0FF42F8A7C,
	Socket_BeginSendCallback_m2E4DF0CAEE665252159EE10E8EFA46463980F5CF,
	Socket_EndSend_m58F48E67A449034B31B52F7EF2F46856FBCE0310,
	Socket_Send_internal_m23758BA709E17D55050E23A679DC8149B2944C1A,
	Socket_Send_internal_mF991C3643BB5E358474652659680232787B12927,
	Socket_Send_internal_m1D6B90528CD689D0E857CAE776E573E178362D37,
	Socket_Send_internal_mC7309CA15FA175E000DCF98711950B46D1250D8C,
	Socket_EndSendTo_m8A51FA7E8F6D65435DA47F1DD7D74C9695884CF1,
	Socket_GetSocketOption_m0810701BA5C30F393D05386BA150A87CA905710D,
	Socket_GetSocketOption_obj_internal_mB80B47214B569FD08FD3D83DC4AD23F30EF0E1F5,
	Socket_GetSocketOption_obj_internal_m7C531C9B7D40C1730EBEDF12EA12559B3AC6A95D,
	Socket_SetSocketOption_mDD4791B69C63D5156C5F733593D5888EDF7A7C93,
	Socket_SetSocketOption_internal_m4CD6A4EB2E6B43A654E7393C15E6339DA717699A,
	Socket_SetSocketOption_internal_m79AFC3FAB34B01E7749886DF7D3DFF10223953AF,
	Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09,
	Socket_Close_m77322C5F6C16BCE94498430C920EC1EBCF8BC8A2,
	Socket_Close_internal_mDC62C0CC0402756EC2AF208253EA987D38C1C97C,
	Socket_Shutdown_m196EA3E73DC67F9E14D6A129945D862131D6AABB,
	Socket_Shutdown_internal_mDB5B705BAEE0962DF070CC97E4569277C1BAB3C7,
	Socket_Shutdown_internal_mEBB0DF91C761500931F2A3D7CE3103ECE0553060,
	Socket_Dispose_m24CC84D16DA94C78C460A3E2EC7068273E40B710,
	Socket_Linger_m8BC490F462914AEE570BB8C5883DF5B70967D823,
	Socket_ThrowIfDisposedAndClosed_mCDA9C2603B4166665F14BABFA4FB3423508DEAA7,
	Socket_ThrowIfBufferNull_m038FD1656C891AD4AF2883AFBA1084CF95286252,
	Socket_ThrowIfBufferOutOfRange_m06C012616B2650E2344CFADF8D7DEDE3A1F6272F,
	Socket_ThrowIfUdp_mCC07B58F7A539B485A355A28D36174F6F1CC3FEA,
	Socket_ValidateEndIAsyncResult_m509940324A570251B33301A59DC3C01B5DAB944A,
	Socket_QueueIOSelectorJob_m5BF661B575E897D2F8A03CB1A189674EA977EFB5,
	Socket_InitSocketAsyncEventArgs_m5D1AF2CB3DAADF1216305B4989DA2909F5D81CE5,
	Socket_SocketOperationToSocketAsyncOperation_m245531592E8980B0CCD21BDDABE0645163837B54,
	Socket_RemapIPEndPoint_m3EF595CE2E7BCDF1CBFEA02E101908877FF90706,
	Socket_cancel_blocking_socket_operation_m14366BBE65240C8833ED22AE8DE299E771FA3058,
	Socket_get_FamilyHint_m9C8E3739473BE1AF6E8FDD6FD3579BE5A9675224,
	Socket_IsProtocolSupported_internal_m5C586C81E1F7B545669E57AE413AF07A6400B907,
	Socket_IsProtocolSupported_mD0EC79AB174CC92B01EEC866E6837CCF1B330A37,
	Socket__cctor_mC1130CB5B4FF386DBF641F72A301C65142EF6AD2,
	U3CU3Ec__cctor_m189E5660A587DF9A7CA7B87434E92DB20CFE6DD5,
	U3CU3Ec__ctor_m421B31AEC17C6130D0F77B8823F05048643B8A2C,
	U3CU3Ec_U3CBeginSendU3Eb__241_0_mED3657F5D9278E1CF28553337FDB5BB377EDFCF4,
	U3CU3Ec_U3C_cctorU3Eb__309_0_mA1E4E9EBD8C59F3452F3C291A116338BD04123B3,
	U3CU3Ec_U3C_cctorU3Eb__309_1_mFE31CFBA6F2BE4A47926572EE46D8368D4BB6D3D,
	U3CU3Ec_U3C_cctorU3Eb__309_2_mEEA9AFDA35A729986A198CCC9785205946F10425,
	U3CU3Ec_U3C_cctorU3Eb__309_3_m6DC581C3C4C027974F71C41B8E3AD0E9C64405BA,
	U3CU3Ec_U3C_cctorU3Eb__309_4_m8D8DA2E8BC6EAD867C7FB95D126E3C0B8CBC2630,
	U3CU3Ec_U3C_cctorU3Eb__309_5_m124EFFED3D1E44E4C1A5F5A1E586AFBEC6EB42D1,
	U3CU3Ec_U3C_cctorU3Eb__309_6_mC8539B0D721812B995C06217EC22C578EF76E01A,
	U3CU3Ec_U3C_cctorU3Eb__309_7_mB19175AFC1F2BB2A749184A61DD84BBB76135E45,
	U3CU3Ec_U3C_cctorU3Eb__309_8_mA9F0B14FEA60E5CA4D29CDF2F8BBABE4CEDEDB5F,
	U3CU3Ec_U3C_cctorU3Eb__309_9_mBA3DCDDE64656E216E23EC585A364C692370765E,
	U3CU3Ec_U3C_cctorU3Eb__309_10_m7AB7D356C3FD8B2B8BF0C280B14675A3D597501F,
	U3CU3Ec_U3C_cctorU3Eb__309_11_m54D0A1A002B2CA233DAA2E13818D0B514C750156,
	U3CU3Ec_U3C_cctorU3Eb__309_12_m6A2545287216688A2636B385C1E550CA4C6E12F7,
	U3CU3Ec_U3C_cctorU3Eb__309_13_m557F5E3E30E4AAF3D185278BAB5EEC27AA33C657,
	U3CU3Ec_U3C_cctorU3Eb__309_14_m2E7D16D51C6DFA7706CFBC0A906A81BA94CA2932,
	U3CU3Ec__DisplayClass242_0__ctor_m37038B01FD9E383353E2D3618C0E6C1CA443298F,
	U3CU3Ec__DisplayClass242_0_U3CBeginSendCallbackU3Eb__0_m2D1B9158103E534CC52214422CE5B043F4CEE08E,
	U3CU3Ec__DisplayClass298_0__ctor_m24532A068CEE2B919D0FD16BC70121982187EB94,
	U3CU3Ec__DisplayClass298_0_U3CQueueIOSelectorJobU3Eb__0_mF53A22B944AA6C92B918DF06ABFAF923D53824F9,
	SafeSocketHandle__ctor_m7A417F105464C193628218AF4E93B797E8888480,
	SafeSocketHandle_ReleaseHandle_m2DF10268C0814FED4266C031FD32D58B31CA5409,
	SafeSocketHandle_RegisterForBlockingSyscall_m648E07077BFE30CFD66FEAAFD0AE595F8BD67E60,
	SafeSocketHandle_UnRegisterForBlockingSyscall_m2F2BD3A6CFE6CEF5587ED4D8EAE441CBC0E945AB,
	SafeSocketHandle__cctor_m53EFD60FADB351C93A9ECAEF0F7F41A6C5D79A84,
	SocketAsyncEventArgs_get_AcceptSocket_m3BD8876BC4B1859E1E7956AD9B3E0227B9E77F75,
	SocketAsyncEventArgs_set_AcceptSocket_m7EEFF83859DD66A54E98A34FB7000DD670F1B1C1,
	SocketAsyncEventArgs_get_BufferList_m36AD40ABBD5550DC719DE1F6F97AE2F842E9DF88,
	SocketAsyncEventArgs_set_BytesTransferred_mFEA9222385B83E3CAD5546E53F1C3F81C5EEA4AE,
	SocketAsyncEventArgs_get_Count_mD310020ADC070DDAFBFE894CC64D0D4FF40DF82F,
	SocketAsyncEventArgs_set_LastOperation_m21AA999097C6C90025DCE4C5D59AE10A03D99602,
	SocketAsyncEventArgs_set_SendPacketsSendSize_mA62CA1722F6D35FC87703464B23BD389DDCB3F11,
	SocketAsyncEventArgs_get_SocketError_mE67DE393630123A96C61F8D93C449965D6D98675,
	SocketAsyncEventArgs_set_SocketError_mFCDAA84BC41D0B28B2517AFD1DCBADCFAAE29499,
	SocketAsyncEventArgs_get_UserToken_mF5C6E94F6889138CB1C7A72BC3EA1FD5E3FAB200,
	SocketAsyncEventArgs_set_UserToken_mD6DB38B4BB5D1D5E89854CB95F9722457EC1290E,
	SocketAsyncEventArgs_add_Completed_m748D6284717FC97F9AD5F7274668BCDDB00F0DDD,
	SocketAsyncEventArgs_remove_Completed_mF88367E7CDB6D58580B034CD0EDC75FC131B53D2,
	SocketAsyncEventArgs__ctor_mEA838D3983A5131BD7324196A90D92357EE0B81D,
	SocketAsyncEventArgs_Finalize_mEC1508C00D7079F51376E9C574D2678722B1402C,
	SocketAsyncEventArgs_Dispose_m1CD7F7378013D412BAEAAE4E96CC7DBEB54A7168,
	SocketAsyncEventArgs_Dispose_m2E653A7ACE155AA1533C72CF1C07EDD2258DB39E,
	SocketAsyncEventArgs_SetLastOperation_m38C9812B6E470E0C19A3895E5F94F267D2D1278C,
	SocketAsyncEventArgs_Complete_mA77F4405B5C9CF2AEE3CA78A8E4BDECE9F6B972A,
	SocketAsyncEventArgs_OnCompleted_m330F7F5F140260C0AFCAC74F160C2EF9BA23AAC8,
	SocketAsyncResult_get_Handle_mA1FCAC625E2265493F931EF8C717E50BE7921ABB,
	SocketAsyncResult__ctor_m5E87FAF5B6141B41C7AEFC5D2181DA4B51073C77,
	SocketAsyncResult_Init_m7C6BE5B35B1D15776AEF6F2FF1A28B71998FF658,
	SocketAsyncResult__ctor_mA600493FFA7C8A3553FA39CBFF18CF8A8F890E0F,
	SocketAsyncResult_get_ErrorCode_m0888A12E8AE75A62CDC76F139829240215E8B6DE,
	SocketAsyncResult_CheckIfThrowDelayedException_mA857B11642F239B6FE95EC9E57F99E01F114FCAD,
	SocketAsyncResult_CompleteDisposed_m7D814AACBE449F4F68500B3594EB71E755FCDBE9,
	SocketAsyncResult_Complete_m956632BDCB195816D5BD8F57B6493329C10DCD32,
	SocketAsyncResult_Complete_m7D9B9A60DFD7281D5EE7FD6EFE07BA4E9CB07CA1,
	SocketAsyncResult_Complete_mDEB3A49AC0BAC2FAF31ABA8523371C5B1B813776,
	SocketAsyncResult_Complete_m16E71358A4FB937FCC3DC080EBB00C4C350DA31C,
	SocketAsyncResult_Complete_m2319BDC7E4BBE78746850481BBD1711916949DF6,
	SocketAsyncResult_Complete_m2644D553368DA3CF95D49473AEA8B656E73463DF,
	SocketAsyncResult_Complete_mC7A67AFEC2C33BD0D7E191EB6AA0658C1A53907A,
	U3CU3Ec__cctor_m0096D8732373ECAFCCC3553EDDE54F1CB40D6EA2,
	U3CU3Ec__ctor_m6E4EE081CCEE6E72C143685C5612BA492B00F1BA,
	U3CU3Ec_U3CCompleteU3Eb__27_0_mBC254448542DAB8EBC47160EB33A36700D1A32E9,
	AuthenticatedStream__ctor_mFCFA51BD3C5544DC6390CF5094E1C0DBA133C172,
	AuthenticatedStream_get_InnerStream_mB7DF06B2F011B3F9F301D068438BBD01C24DCDDC,
	AuthenticatedStream_Dispose_m5610A806886C36698AC932D21F5FBDCAE9FA3E14,
	NULL,
	RemoteCertificateValidationCallback__ctor_m830361B1E3107AC75A34E07042B4A2567B331E3F,
	RemoteCertificateValidationCallback_Invoke_mD2863E7241D3768F16B3F85589623B4397EDF86F,
	RemoteCertificateValidationCallback_BeginInvoke_m21A4B4335CCCDF893A38C75DD1171A31B466A687,
	RemoteCertificateValidationCallback_EndInvoke_mB5C28FA15AC0883EC65DBD8E6FC5610BF91B9140,
	LocalCertSelectionCallback__ctor_mEA7E533B4C8CF46131F4097785E653C9DF1E2A85,
	LocalCertSelectionCallback_Invoke_m710A68C0A2D13DBB5E8434FC6E0ED75F90E7C176,
	LocalCertSelectionCallback_BeginInvoke_m52E115683F283EFE63006DC899952C6958350285,
	LocalCertSelectionCallback_EndInvoke_mAC5037A64623906D66FB80410DF916D3A47E09C4,
	SslStream_get_Impl_m29F58D35745DFC013BFAEFCF3952391234D8BC9A,
	SslStream__ctor_mA434A097CD9B052AC8510C8B5BFF9E5E6B541DC9,
	SslStream_CreateMonoSslStream_m2DA6B0A589490351B37010F5BCF2DA3D734FF266,
	SslStream_AuthenticateAsServer_m18D11C1C45EA1C59C392FCE79CCCE0E7F40B1F96,
	SslStream_get_IsAuthenticated_m273C64C4DF6FFD4E9772EF714EFA982D4C0A9D83,
	SslStream_get_CanSeek_mD0CB66ABEA39EE6BEAB9BD53ADF03476FEA2E266,
	SslStream_get_CanRead_m49799854D297DCF71A497F8858B64DDD1C10BF00,
	SslStream_get_CanWrite_m25569C1704B5F54A27234D1B9B69647D5018CCEF,
	SslStream_get_Length_m1A4DBA93F0D140FA33892E0193DDE8C6E4175763,
	SslStream_get_Position_mDCFD4EFB697DAFF90BA366ED8519487027E21671,
	SslStream_set_Position_m4D2093D31E1557590786FA41197CD585CAC79E3A,
	SslStream_SetLength_m76EF6CF39E831CF1C3E0DD70598938B46441504C,
	SslStream_Seek_m53AB94845DF9E4A126414BC25E024053D43627D1,
	SslStream_FlushAsync_mAB1051AF0DDB8C2D84D54F526A2436817F88CAB9,
	SslStream_Flush_m409B5ED6ACB6B2496DAF6725C6CAAF5D51BEADE3,
	SslStream_CheckDisposed_mFCE61CD9DDFDF97DD850B2EAF0908EFE50008DE4,
	SslStream_Dispose_mFDB97E2E26CD194DBCBE47710EE5402B2298B919,
	SslStream_Read_m4FE23134855CE89200771C5A8851DDDDDF182FF3,
	SslStream_Write_m262369AF62D8AA0CCC4EAC5BF3274693AA27B1BC,
	SslStream_BeginRead_m4D96895D1B0C302EF4D52681FEDA82D1E53E7C3F,
	SslStream_EndRead_m918E3DCEB2DE563A21B042D7FF530E96EBA8EF51,
	SslStream_BeginWrite_mB8CC50460AFEF640D3C36C68938EE921F3E11844,
	SslStream_EndWrite_m796ACEAE821536F59642EDC2748B2A5F232953AB,
	IPGlobalProperties_get_PlatformNeedsLibCWorkaround_mB5BC19873B5F06D8F8EE23856B7736ECB9C7722B,
	IPGlobalProperties_GetIPGlobalProperties_m9754DEEC16047B231DA6208C8AE6317BB0F3D8CA,
	IPGlobalProperties_InternalGetIPGlobalProperties_m74758C4E4DB69BA34CE6923E5C640D335BC6E014,
	NULL,
	IPGlobalProperties__ctor_m1C3267FBFEC8DD72CC56A4C5EC19C76AA7680B6B,
	NetworkInformationException__ctor_mBA60EDC47C5B8373C69C2BB998014CB1B99319FB,
	NetworkInformationException__ctor_mFF36F090C8A2438A1C8B75BA60B47933B13DD876,
	CommonUnixIPGlobalProperties_getdomainname_mF48E7AAE74313578ACC25E8C9FBAAD66F280DDCD,
	CommonUnixIPGlobalProperties_get_DomainName_m8F359828BAB5DC5F338C2384908E2D34799BAE86,
	CommonUnixIPGlobalProperties__ctor_mD26E185C9CE6B7E2D0E6B11FDB9BA7C73429CDDF,
	UnixIPGlobalProperties__ctor_mD82447A37FC171F372C28E442583745EB4D0E744,
	UnixNoLibCIPGlobalProperties_get_DomainName_m472CDAA87DD800EE30A6C2F3154F836CD067538E,
	UnixNoLibCIPGlobalProperties__ctor_m9FFB83304274EEBCE61CDE8E3E0F86B4B04D49FF,
	MibIPGlobalProperties__ctor_m5C3492BED5AC48BA43C068B00D70FF8CC55816E7,
	MibIPGlobalProperties__cctor_m874A8D290A3B1DBFD14A091E479BE2924DFA547D,
	Win32IPGlobalProperties_get_DomainName_mF0BAF6309AF69217DF87D3EB0C44589ED70419B6,
	Win32IPGlobalProperties__ctor_mCCF10D6073FCA3B87D513794539C831D75E8D236,
	Win32NetworkInterface_GetNetworkParams_mC4CE2C65E1AC80E4C2371950E3201D2DE40A62B7,
	Win32NetworkInterface_get_FixedInfo_m5C321EB3F491660D8054D89A57FE8842DE2755E9,
	DefaultProxySectionInternal_GetDefaultProxy_UsingOldMonoCode_m1FBAB2FA8C0B87ADA0523CAA34F9D5230098A795,
	DefaultProxySectionInternal_GetSystemWebProxy_m7BE3F8E1011DD7156B05BEA3264DB8ED549072C0,
	DefaultProxySectionInternal_get_ClassSyncObject_mB2D90511F956EA13FAB810CBF9A4C656E5D56F65,
	DefaultProxySectionInternal_GetSection_mC140525EBD14DF74602DFCA7AFECE376AFADE34F,
	DefaultProxySectionInternal_get_WebProxy_m38F5DF1772271FC6014B56D93654B771D745AB9B,
	DefaultProxySectionInternal__ctor_m0C5C6CB50669D34ED3B3699B39170041383E0005,
	SettingsSectionInternal_get_Section_m109D7450776A48BEFA47FA7CBB521CE6BA0CA5C9,
	SettingsSectionInternal_get_Ipv6Enabled_mA9CA51E8A3512524460E9AC8C9DE920F64C33FB8,
	SettingsSectionInternal__ctor_mED2DFF382A20FC3136B1514D8BD40B520758F636,
	SettingsSectionInternal__cctor_mB44A40867AA454670DC1D71ADE59576183610030,
	HybridDictionary__ctor_m18ABDB797A0591DF595BBDD2A03F1670DDD07AA7,
	HybridDictionary_get_Item_mE16332A6CE6880D436633519FAC3662ED4A89E11,
	HybridDictionary_set_Item_mFFC14A7F4B45807D97503616AF98160061F6B9D3,
	HybridDictionary_get_List_mA5314524D5C411AFB165F07D860010DC0E11D28E,
	HybridDictionary_ChangeOver_m41ACD333E29ACCFF1C0CF45DF9E09E84EA28F173,
	HybridDictionary_get_Count_m170B942CEB7FA1B42BFFB246D72B583BD1397738,
	HybridDictionary_get_IsSynchronized_m16E1CEF05CA968B2C844104334996CEE3335EB0E,
	HybridDictionary_get_SyncRoot_m3A81A716ADC2A40444AF517E38EA943FDC72AB97,
	HybridDictionary_Add_m8022C90B2CAE2484ED0D740734EA4E512D8B130D,
	HybridDictionary_Contains_mF8C826101599A5F6EDB300954BD90FDEC4BCA6D6,
	HybridDictionary_CopyTo_m130965C0084284EE331912B40157958A1075E4A1,
	HybridDictionary_GetEnumerator_m02B2FC70ED4C2E91818DC8EAA3F3602B0DE81437,
	HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m4B6D49D2814E11C16C7005F84DFC58333BCBFAA0,
	ListDictionary__ctor_mEB7BEC57F72A27168FCCE46DAC90CD5B8B7088A5,
	ListDictionary__ctor_mD1A7D146747D4E3AD93C261C1783CE34B10E48EC,
	ListDictionary_get_Item_m34D2DAE21AFFB6B1801EDE8A6998732CD9B45605,
	ListDictionary_set_Item_m89155730D3E404A1270CBDE7BEEC99138FBC64A0,
	ListDictionary_get_Count_m4CB9ACB21730241E566764AAB76B8B2A3D72418B,
	ListDictionary_get_IsSynchronized_mDFF1DD86417A74961730C434782CC2532A8B7CDD,
	ListDictionary_get_SyncRoot_m58A889327021D843C7EB9171BD6B0D1E482C8BD7,
	ListDictionary_Add_m2204C61650D1B23A093627DF4D87009A7E3F9EDB,
	ListDictionary_Contains_mA832E669186A7B91FF5819A535F8D394C963C508,
	ListDictionary_CopyTo_m9B1961C99A5B80996E42431630907C6BC02627A0,
	ListDictionary_GetEnumerator_m17E264D47385C88C7C366177CE8127CE933B0F9D,
	ListDictionary_System_Collections_IEnumerable_GetEnumerator_mF0DF8988C2CA6D5D493A61C502F20DA7879FA8E3,
	NodeEnumerator__ctor_m61652E6AF76A5460A6F4EA14BF97B982B7BB0261,
	NodeEnumerator_get_Current_m08DA3FD558CA771BD75B9C9A54FE681EDE668D25,
	NodeEnumerator_get_Entry_m5C0AAD879BADE3838D42B8525084C8C5DF96C56D,
	NodeEnumerator_get_Key_m83C059C6F52DE85B2E1605051400F3751534F8FF,
	NodeEnumerator_get_Value_m8532A492ECB3CE11B557109057E81DD2175070C7,
	NodeEnumerator_MoveNext_m111785D3C26CEB364566F3E517B3EB7528940552,
	NodeEnumerator_Reset_m66F3E60AB0A5AFCB3B3A8C37399B5357098BDD2E,
	DictionaryNode__ctor_m824EFE3D79F05D11FE0DE6FD5491D2FB1D382619,
	NameObjectCollectionBase__ctor_m97EB64FF4F1733FB7BA9C6427EA871813AD49C8C,
	NameObjectCollectionBase__ctor_m3A2420574843F0567355F3B2F79D8BB4229580B6,
	NameObjectCollectionBase__ctor_m1C0BA736F4454310BEAAB54CB2307F905C1A1F8C,
	NameObjectCollectionBase__ctor_mA553427255D475EB21A48A9C585885E3E4335EA3,
	NameObjectCollectionBase__ctor_mFC42544A14AA22758AB189CD5BCC8FE563A9569A,
	NameObjectCollectionBase__ctor_m0995BB1255888BA4156EF35F69462ECDEBB39C13,
	NameObjectCollectionBase_GetObjectData_m751D688171C6E676A6778036561E47AD1E0BD772,
	NameObjectCollectionBase_OnDeserialization_mE380D49EDB18F4456CF66DD8790E289BB3D091CD,
	NameObjectCollectionBase_Reset_m3446C8F69C1CD6228C6AB5CE0CB1EB90342B4C4A,
	NameObjectCollectionBase_Reset_m6D9FEB20EBE98529CF3A8A66566526F965D0FC03,
	NameObjectCollectionBase_FindEntry_m718AABE1DF5F139F552DAA073FB2863EBE4AF77F,
	NameObjectCollectionBase_get_IsReadOnly_mACD1AE0A27A5AC2E06C73AE37B012D2DE43A1FF8,
	NameObjectCollectionBase_BaseAdd_mD6FC01196B5CCF6591834C8A9F183B477202B129,
	NameObjectCollectionBase_BaseGet_m34B277D6BF8AE4C4BCCDA290D62897C9739EA626,
	NameObjectCollectionBase_BaseSet_m85584732956158CBA89BBC5CC5316F96DAD90B14,
	NameObjectCollectionBase_BaseGet_m6C79F9B2DF510481D1D71FEE71782074781B8E71,
	NameObjectCollectionBase_BaseGetKey_m695607B27E3D7C591C5E630DA5DC611C47B195B7,
	NameObjectCollectionBase_GetEnumerator_mAAFB01528169706D8E604D3EA8C9CE9EDAB9B3FD,
	NameObjectCollectionBase_get_Count_m55654BD7ABD342E64543B6B34A0ED2E55D14172A,
	NameObjectCollectionBase_System_Collections_ICollection_CopyTo_mAF83DFFCF913CB0EB4EA054599CFBA83B285B4E2,
	NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_mDAD72AF014EA323F18F7E6C4DC71DEE13A1CE909,
	NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_mEC25AFAE52FBFF5C5C399297B36F4CEEF9EBD98D,
	NameObjectCollectionBase_BaseGetAllKeys_m9812C7E099B81CB36A2D2B67C84D9A53AC8A3B05,
	NameObjectCollectionBase__cctor_mB31DAEC0EB0A04003468496FC87D42812F0A0691,
	NameObjectEntry__ctor_m995C545D6465499656D27A10071FE7C670DCD6A1,
	NameObjectKeysEnumerator__ctor_mB9768A57865CD35FD66913A54BD288CD9D6036F3,
	NameObjectKeysEnumerator_MoveNext_mEA36FF36EF6F1956ED9F9D6D8559A22482760F52,
	NameObjectKeysEnumerator_Reset_m150D4F13AFA8D2D5D6E26B0A8C05FCE847C02FE9,
	NameObjectKeysEnumerator_get_Current_m140DD35019E2A824900B7F4A9F116E8AEB80256F,
	CompatibleComparer__ctor_m26DB6C338A8491558326D0F472D432EAC4D5D3D4,
	CompatibleComparer_Equals_mBB2FF4E0B234C0A1854821B349899246FDD37E95,
	CompatibleComparer_GetHashCode_m02DFA8D6B5B49382CD4FA659D2B7F8C7E9000A6B,
	CompatibleComparer_get_Comparer_mF8B7EDA05E675046EB7BF2E6DEEFBAE1C2AA5E2F,
	CompatibleComparer_get_HashCodeProvider_m2CED6D7A8ED865AE214D806F751C7F17BD24BED3,
	CompatibleComparer_get_DefaultComparer_mA4978DD07C60DB282096F4C5C8E66D7D935C83CB,
	CompatibleComparer_get_DefaultHashCodeProvider_m0BD9F3BFCB9AD8D80E14EE483C42A81CA36A9D20,
	NameValueCollection__ctor_m778D8601E84C12D4EABEAA3A8B495FB92A953909,
	NameValueCollection__ctor_m47444DC49F8EB616594E32AE9BD59976CF2DB439,
	NameValueCollection__ctor_m5E1391BA01E5D9BAF25A865025F031283B05AC62,
	NameValueCollection__ctor_mC65E70EA2E216395614CCAB82401B9853AED94AA,
	NameValueCollection__ctor_m5BB309F095815D835ED9E9BF73266383892215C3,
	NameValueCollection_InvalidateCachedArrays_mBBA5CF68C6D8E24D304B2A6C94B423702BE024F3,
	NameValueCollection_GetAsOneString_m701748B8F46B509BA82DE9C72F7EC4E0FEEC664F,
	NameValueCollection_GetAsStringArray_mCE36368E109CC044906EFA208B0F99D0D8ED9818,
	NameValueCollection_Add_m2BA01C700F8C0A5A2F6550DA7298887A4FE5C249,
	NameValueCollection_Get_m300E47F531EE449FC72B6319D6AC7423AB9E991C,
	NameValueCollection_GetValues_mC60A341A340822C2CB825630A75A4F0A8C05D6BD,
	NameValueCollection_Set_m964E6C417970F6DD9A7EC003F9CC85B153E4E982,
	NameValueCollection_get_Item_m2A6445E94FF2B24C9DF6190767D14E7920871CDC,
	NameValueCollection_set_Item_mD7117BA970BD749C64FC5D5352530E422B754ADA,
	NameValueCollection_Get_mBB1620F0B7E68EA41CE34FACBF5429DC216817DF,
	NameValueCollection_GetValues_m636A791E94412318935C3601B1C13C81A451FBC4,
	NameValueCollection_GetKey_m61FFBF58CDF5769282DED45F920161A89276EAE2,
	NameValueCollection_get_AllKeys_m58B1B3117D3249B9580FB4D350B29FC595614448,
	StringCollection_get_Item_m6289E4904A6358446DE30B8D06EFAD2FEEB2EDF8,
	StringCollection_set_Item_mEAE8DDA53D08232F6597E9091A7FEB8496BF7FDD,
	StringCollection_get_Count_m4307EBE5F76A894AE550321977CE58DDDFCB85BF,
	StringCollection_System_Collections_IList_get_IsReadOnly_m4A1506C2B94AF66FB47FDCDFC434ACB8488AC47F,
	StringCollection_System_Collections_IList_get_IsFixedSize_m26E281D01AF589C9BB1C09989C6F2AC9AFFE01D4,
	StringCollection_Add_mF15C799896470DD2C807334107ADFD01C8BAF497,
	StringCollection_Clear_mD4940751F46D8B3EBCB148A0A5B14A5AE2FC217C,
	StringCollection_Contains_mF8AD018C19F7760E4693B1A24148F8659C486502,
	StringCollection_CopyTo_m22FDAD087DBC9ACAC1C2BD3614AD448C173F8893,
	StringCollection_IndexOf_m860B2D7C91CE7633F376CB8AB7C46CC1E103EC17,
	StringCollection_Insert_m9847FF62B17A3776A419642922F93D39356198BC,
	StringCollection_get_IsSynchronized_mF01A6B1F560EF9BE2F0CC998E7330BA7A685C313,
	StringCollection_Remove_m3FF866980BE6C484CEEB9C42B97BAC6B602AE95E,
	StringCollection_RemoveAt_mA455E99CC2C275AC94FE206E49E87B433257EAA2,
	StringCollection_get_SyncRoot_m2A6A118CF992AA80F7923CE3E6A49D25AC7F730B,
	StringCollection_System_Collections_IList_get_Item_m1FB397E9881B366B0E0BD85883F5F8EE4B0A2E66,
	StringCollection_System_Collections_IList_set_Item_m84FFCB0C0EDF382722E6D86EA441056197E742BC,
	StringCollection_System_Collections_IList_Add_m31EA60F5452738475A79F562CC741336D2C9A2CF,
	StringCollection_System_Collections_IList_Contains_mF385154C4DDD61DDFE3D9273598E212977DDDDF8,
	StringCollection_System_Collections_IList_IndexOf_mDE4B1B0D406BCE5065474EF50EED32663E996177,
	StringCollection_System_Collections_IList_Insert_m97C6AF183F6E33425F90A6746B1B9BCA2EC18DB2,
	StringCollection_System_Collections_IList_Remove_m81D305F7785DD4D4BCDBD5439004D122E26A6A36,
	StringCollection_System_Collections_ICollection_CopyTo_m911BB41A37B6860D0E98A5EF71F0C00797408A77,
	StringCollection_System_Collections_IEnumerable_GetEnumerator_m1620B22B92CB96A6E4AFB2775FBB9D5E0F9666DE,
	StringCollection__ctor_m4358E3B91F6861DD166CAC4BD9B2D353FDA5FA14,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7C7DB27BC4297A74A96AC53E1EDD3E7415DFB874,
	BypassElementCollection__ctor_m867AF1FE6DBB2768AA199F45039C3E2641A9627A,
	ConnectionManagementElementCollection__ctor_mA29AB3A62411F032C5EF86B16E7633A386000C7B,
	ConnectionManagementSection__ctor_m1112C1BE1A9466BBCDD5C2ED20E80CDE03B46CA4,
	ConnectionManagementSection_get_Properties_m1737189D2D78E81728CFF1CCCEB99E1FFFEA3F19,
	DefaultProxySection__ctor_m41EADE87065B61EDF32F67D2E62F04946886DAF6,
	DefaultProxySection_get_Properties_m6F70EC02D977EB16F86354188A72DC87A8959555,
	DefaultProxySection_Reset_m54AC9323047B1FB38795C9F466C1C01192F75276,
	ProxyElement__ctor_mAFD852231DF0231726E41911409CB2725BE990AC,
	ProxyElement_get_Properties_m8A3EE4A3EEF2571DE4768730CEF4107331490377,
	HttpWebRequestElement__ctor_mE3A4CA43FCC72E10B6C7B4920F429C028765E233,
	HttpWebRequestElement_get_Properties_m531EDF2F56823100C47A9EEE1575143E5EB5463C,
	Ipv6Element__ctor_m3F7DF39E6E51517E1429BAE43FA782BF3AF17965,
	Ipv6Element_get_Properties_m156008D7E5279C50DE4CEDB6D4D3CEDAF2ACF8DC,
	NetSectionGroup__ctor_m566D7C9466957BCE3B8FE2D0EA2582CC2F95F269,
	SettingsSection__ctor_mC5F3D29EDC94D87B0B0542DE3702795441AC3005,
	SettingsSection_get_Properties_m1ABB76DEC7441CFEDD4E7EDF99B8F5C258101254,
	PerformanceCountersElement__ctor_m5A090222699B48BEB5FCC743198613FA8D081083,
	PerformanceCountersElement_get_Properties_m3C7B73AC6E5F5E92426D7DC091A2ECE5CFCD9FD0,
	ServicePointManagerElement__ctor_m61B031714F8498D467B5A0958EE62F73E0C58EB7,
	ServicePointManagerElement_get_Properties_mC1C586246B4FE10AC90622A0CC6A5936D501B677,
	SocketElement__ctor_m428B7094399223FFB9A5B62BF9D8CEA18A00A4C3,
	SocketElement_get_Properties_m9CF8E9B1A9B41B7EC24A4F91CE2E8ECBF317426A,
	WebProxyScriptElement__ctor_mC8AF875E80D96B18AA387148009AE1C630D83591,
	WebProxyScriptElement_get_Properties_m8AD25399F804B2D22BC8312102EBC28A0CAE6E26,
	WebRequestModulesSection__ctor_m0CAB6F207E3B29D65AEA38A6AC191873E3000F02,
	WebRequestModulesSection_get_Properties_m909A3E4C4A61BFCC9D09F397D9314E5F74F3FE44,
	WebRequestModuleElementCollection__ctor_m8B880B0EAE7CEF1CB79CD264A9B6D62AB6A22961,
	DiagnosticsConfigurationHandler__ctor_m185BC74B0225A3E16EEB4164923931B79AAA0CF0,
	DiagnosticsConfigurationHandler_Create_mCC7EF5B43B6913E2429B37EC5923202EBB20AA96,
	ThrowStub_ThrowNotSupportedException_mF1DE187697F740D8C18B8966BBEB276878CD86FD,
};
extern void CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D_AdjustorThunk (void);
extern void U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82_AdjustorThunk (void);
extern void U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466_AdjustorThunk (void);
extern void U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96_AdjustorThunk (void);
extern void U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542_AdjustorThunk (void);
extern void U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A_AdjustorThunk (void);
extern void LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187_AdjustorThunk (void);
extern void AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D_AdjustorThunk (void);
extern void AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A_AdjustorThunk (void);
extern void IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497_AdjustorThunk (void);
extern void IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC_AdjustorThunk (void);
extern void IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127_AdjustorThunk (void);
extern void IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[23] = 
{
	{ 0x060000D9, CFRange__ctor_m647706088E75E3F793355F805624EF70D55041A2_AdjustorThunk },
	{ 0x0600013A, U3CStartOperationU3Ed__23_MoveNext_m8BB4BB3D517CE898003C10FE5B80D375FA4D30A2_AdjustorThunk },
	{ 0x0600013B, U3CStartOperationU3Ed__23_SetStateMachine_m0D9AFFD785F28428CCC846BD6A8FCFD38F9B0F9A_AdjustorThunk },
	{ 0x0600013C, U3CProcessOperationU3Ed__24_MoveNext_m8B20266FC4831A26E691F83D54C6903CF264999D_AdjustorThunk },
	{ 0x0600013D, U3CProcessOperationU3Ed__24_SetStateMachine_m9710FA92383D6497F1A16F90563A9056800A59F3_AdjustorThunk },
	{ 0x0600013E, U3CInnerReadU3Ed__25_MoveNext_m4AD149EC4A2E6FDA803D63FB72A354300DBD3D0D_AdjustorThunk },
	{ 0x0600013F, U3CInnerReadU3Ed__25_SetStateMachine_mEBFC49E17D2A224B493E390CDDD4D211EC701EC3_AdjustorThunk },
	{ 0x06000181, U3CProcessAuthenticationU3Ed__47_MoveNext_mF34091B95847AEC5A49F30AD28F776B39A7CFA82_AdjustorThunk },
	{ 0x06000182, U3CProcessAuthenticationU3Ed__47_SetStateMachine_m4B5E500700B7B947C0989BB42930E976B131758B_AdjustorThunk },
	{ 0x06000183, U3CStartOperationU3Ed__58_MoveNext_m8484CAD90FCBB0E2C0D16FFA928EF43362834466_AdjustorThunk },
	{ 0x06000184, U3CStartOperationU3Ed__58_SetStateMachine_m2DAE3399BC870A25A88A99F04B5C36A1FECC47BC_AdjustorThunk },
	{ 0x06000187, U3CInnerReadU3Ed__66_MoveNext_mDF4D1A1689C7CC5B3E42580E12BA513E31959F96_AdjustorThunk },
	{ 0x06000188, U3CInnerReadU3Ed__66_SetStateMachine_m27E2C20E7DC4AC988ADDF81E73A957C100424381_AdjustorThunk },
	{ 0x06000189, U3CInnerWriteU3Ed__67_MoveNext_mD7A964B6974275AD771AB15475A775E3393EE542_AdjustorThunk },
	{ 0x0600018A, U3CInnerWriteU3Ed__67_SetStateMachine_mDEA51EA28DEE2587F5E63C6D535E4EDA8943C11A_AdjustorThunk },
	{ 0x060002EC, LowerCaseMapping__ctor_m881B66875631FF0DD253696FE56313A9E3F24187_AdjustorThunk },
	{ 0x060006EA, AuthorizationState__ctor_m69A0EFF9B7497316A6F0FE2896C466CDDE89E88D_AdjustorThunk },
	{ 0x060006EB, AuthorizationState_ToString_m91603A74B89DD49A7CD4B9878309E458BD7F002A_AdjustorThunk },
	{ 0x060006EC, IPv6AddressFormatter__ctor_m94725668992E78AA0D75E1C072E8A567E9C34497_AdjustorThunk },
	{ 0x060006EE, IPv6AddressFormatter_AsIPv4Int_m94B06C695C45C85A90F95CAAF4430772EFC16C4F_AdjustorThunk },
	{ 0x060006EF, IPv6AddressFormatter_IsIPv4Compatible_mDC05432DB57ED01219A35BD1B712E589A527A5FC_AdjustorThunk },
	{ 0x060006F0, IPv6AddressFormatter_IsIPv4Mapped_m0BEBB1DE4A773028D3091D8321106BE92519A127_AdjustorThunk },
	{ 0x060006F1, IPv6AddressFormatter_ToString_mBBBF9A3ABB56F52589BD211DD827015066076C8F_AdjustorThunk },
};
static const int32_t s_InvokerIndices[2368] = 
{
	1,
	2,
	0,
	26,
	1115,
	1115,
	1116,
	1117,
	1118,
	765,
	49,
	4,
	131,
	1119,
	1120,
	121,
	131,
	1121,
	1122,
	160,
	131,
	1121,
	1122,
	160,
	131,
	1123,
	1124,
	26,
	131,
	1125,
	1126,
	26,
	131,
	1127,
	1128,
	121,
	23,
	131,
	1129,
	114,
	1130,
	131,
	64,
	1131,
	26,
	131,
	1132,
	1133,
	1134,
	131,
	1135,
	1136,
	1137,
	131,
	1135,
	1136,
	1137,
	131,
	6,
	1138,
	26,
	131,
	1139,
	1140,
	160,
	131,
	1141,
	1133,
	1142,
	131,
	1143,
	1144,
	1145,
	131,
	1146,
	1138,
	1137,
	131,
	1147,
	1148,
	26,
	131,
	1149,
	1122,
	26,
	131,
	6,
	1138,
	26,
	131,
	1150,
	1151,
	121,
	131,
	1152,
	1153,
	121,
	131,
	1154,
	1155,
	1137,
	131,
	1156,
	1157,
	1137,
	131,
	1158,
	1128,
	26,
	131,
	1159,
	1160,
	26,
	131,
	1159,
	1160,
	26,
	131,
	1159,
	1160,
	26,
	131,
	1149,
	1122,
	26,
	131,
	1161,
	1133,
	121,
	131,
	1161,
	1133,
	121,
	131,
	1161,
	1133,
	121,
	131,
	1121,
	1122,
	160,
	131,
	1121,
	1122,
	160,
	131,
	565,
	1133,
	26,
	131,
	6,
	1138,
	26,
	131,
	1162,
	1163,
	26,
	1164,
	1165,
	89,
	1166,
	1166,
	23,
	31,
	23,
	89,
	23,
	1167,
	1168,
	1167,
	1168,
	1169,
	1170,
	1171,
	1172,
	21,
	21,
	21,
	47,
	21,
	14,
	711,
	89,
	89,
	89,
	89,
	10,
	1102,
	1107,
	1108,
	23,
	1173,
	1174,
	1013,
	925,
	25,
	925,
	925,
	177,
	23,
	15,
	7,
	1008,
	23,
	25,
	23,
	31,
	23,
	177,
	3,
	1008,
	10,
	1175,
	16,
	1176,
	169,
	136,
	177,
	1177,
	0,
	1008,
	1008,
	1178,
	18,
	14,
	3,
	177,
	1175,
	1179,
	1179,
	177,
	1177,
	0,
	1180,
	1180,
	1181,
	765,
	25,
	177,
	4,
	1182,
	1182,
	1183,
	23,
	3,
	26,
	169,
	15,
	15,
	14,
	14,
	10,
	10,
	14,
	3,
	26,
	14,
	1184,
	1185,
	3,
	1184,
	716,
	716,
	716,
	716,
	1175,
	1,
	1,
	1,
	765,
	4,
	4,
	3,
	23,
	23,
	131,
	1186,
	1187,
	26,
	23,
	678,
	1188,
	1188,
	712,
	28,
	9,
	23,
	1186,
	10,
	10,
	35,
	14,
	32,
	23,
	32,
	35,
	10,
	14,
	32,
	26,
	14,
	89,
	14,
	10,
	32,
	102,
	32,
	23,
	726,
	726,
	726,
	37,
	14,
	23,
	26,
	23,
	26,
	23,
	26,
	102,
	37,
	14,
	10,
	32,
	1189,
	14,
	1189,
	37,
	1189,
	37,
	131,
	1104,
	1105,
	9,
	1,
	1190,
	350,
	14,
	1101,
	1102,
	836,
	1191,
	1192,
	1173,
	14,
	14,
	42,
	0,
	1,
	28,
	1103,
	1193,
	1174,
	729,
	121,
	729,
	26,
	501,
	35,
	727,
	727,
	1194,
	625,
	1195,
	1196,
	1197,
	1198,
	1199,
	37,
	1200,
	1200,
	89,
	31,
	23,
	728,
	213,
	89,
	89,
	89,
	186,
	186,
	213,
	3,
	23,
	23,
	26,
	23,
	26,
	23,
	10,
	23,
	26,
	23,
	26,
	1164,
	14,
	14,
	89,
	89,
	14,
	14,
	14,
	23,
	89,
	23,
	1166,
	1166,
	23,
	90,
	9,
	114,
	23,
	31,
	23,
	4,
	3,
	167,
	3,
	4,
	4,
	3,
	14,
	31,
	1,
	4,
	3,
	0,
	109,
	0,
	0,
	0,
	23,
	1104,
	23,
	1104,
	23,
	132,
	1201,
	1202,
	1203,
	1204,
	89,
	89,
	89,
	89,
	186,
	14,
	89,
	109,
	89,
	1205,
	9,
	89,
	23,
	249,
	428,
	428,
	1206,
	1206,
	14,
	23,
	31,
	26,
	137,
	27,
	162,
	27,
	1207,
	43,
	120,
	120,
	120,
	14,
	14,
	14,
	14,
	14,
	89,
	89,
	89,
	14,
	89,
	14,
	109,
	4,
	3,
	14,
	10,
	14,
	14,
	14,
	89,
	14,
	14,
	89,
	89,
	48,
	48,
	103,
	10,
	14,
	141,
	141,
	9,
	1208,
	14,
	10,
	940,
	213,
	23,
	1209,
	23,
	204,
	34,
	204,
	1210,
	34,
	23,
	1211,
	1212,
	1213,
	1214,
	1215,
	1216,
	1217,
	1218,
	1219,
	1220,
	1221,
	1222,
	94,
	547,
	48,
	48,
	48,
	48,
	1223,
	1224,
	823,
	9,
	9,
	9,
	415,
	204,
	0,
	59,
	944,
	1225,
	1226,
	34,
	204,
	26,
	3,
	23,
	23,
	23,
	26,
	120,
	120,
	1227,
	1228,
	1229,
	1230,
	1231,
	1232,
	1233,
	48,
	48,
	48,
	48,
	3,
	14,
	10,
	14,
	626,
	679,
	54,
	49,
	3,
	10,
	30,
	30,
	30,
	52,
	32,
	0,
	89,
	14,
	626,
	679,
	54,
	35,
	1234,
	1235,
	1235,
	1236,
	1236,
	106,
	388,
	1237,
	1236,
	1238,
	1238,
	1234,
	577,
	1239,
	1240,
	1241,
	1242,
	1242,
	1243,
	96,
	1244,
	379,
	1245,
	383,
	383,
	1246,
	1234,
	1247,
	131,
	26,
	218,
	26,
	23,
	27,
	27,
	14,
	14,
	14,
	89,
	31,
	89,
	31,
	23,
	361,
	23,
	26,
	23,
	1248,
	169,
	3,
	49,
	23,
	23,
	26,
	137,
	1249,
	120,
	120,
	990,
	989,
	10,
	315,
	89,
	14,
	34,
	121,
	141,
	1250,
	9,
	147,
	58,
	547,
	1251,
	28,
	58,
	1,
	1251,
	28,
	54,
	23,
	1252,
	0,
	28,
	89,
	89,
	3,
	1253,
	14,
	26,
	23,
	23,
	1254,
	147,
	1255,
	502,
	14,
	35,
	10,
	10,
	14,
	14,
	23,
	26,
	14,
	89,
	10,
	34,
	137,
	14,
	34,
	23,
	26,
	89,
	14,
	14,
	23,
	3,
	23,
	1256,
	89,
	31,
	599,
	26,
	26,
	26,
	1257,
	1254,
	26,
	26,
	1258,
	42,
	42,
	1259,
	244,
	109,
	109,
	109,
	109,
	109,
	109,
	48,
	48,
	1260,
	1261,
	1262,
	1262,
	1263,
	0,
	0,
	126,
	10,
	14,
	34,
	23,
	1264,
	1265,
	41,
	23,
	1257,
	1266,
	46,
	0,
	0,
	94,
	21,
	23,
	32,
	89,
	10,
	26,
	89,
	14,
	14,
	28,
	23,
	792,
	31,
	1267,
	801,
	472,
	28,
	89,
	102,
	14,
	89,
	4,
	3,
	1268,
	89,
	14,
	3,
	23,
	27,
	14,
	89,
	10,
	34,
	28,
	34,
	34,
	137,
	14,
	23,
	26,
	89,
	14,
	14,
	23,
	27,
	23,
	23,
	32,
	32,
	32,
	32,
	10,
	10,
	10,
	23,
	32,
	136,
	38,
	32,
	136,
	23,
	32,
	23,
	32,
	10,
	37,
	32,
	136,
	23,
	32,
	10,
	37,
	10,
	37,
	10,
	10,
	10,
	10,
	249,
	9,
	52,
	23,
	412,
	89,
	23,
	4,
	1269,
	1270,
	14,
	14,
	38,
	32,
	32,
	30,
	37,
	37,
	32,
	3,
	23,
	1271,
	14,
	1270,
	34,
	10,
	14,
	89,
	34,
	137,
	14,
	3,
	23,
	26,
	89,
	14,
	23,
	1272,
	23,
	120,
	120,
	23,
	1272,
	136,
	1273,
	608,
	38,
	334,
	89,
	14,
	38,
	14,
	34,
	14,
	14,
	14,
	14,
	14,
	1274,
	26,
	34,
	10,
	10,
	126,
	26,
	26,
	32,
	14,
	130,
	362,
	14,
	23,
	14,
	14,
	14,
	249,
	10,
	412,
	103,
	249,
	30,
	23,
	249,
	14,
	243,
	103,
	23,
	136,
	137,
	23,
	121,
	30,
	9,
	89,
	89,
	89,
	89,
	89,
	89,
	48,
	48,
	48,
	89,
	48,
	1275,
	23,
	23,
	89,
	26,
	23,
	23,
	1276,
	14,
	599,
	599,
	26,
	26,
	32,
	23,
	23,
	23,
	89,
	23,
	28,
	10,
	32,
	249,
	23,
	32,
	23,
	412,
	249,
	412,
	10,
	3,
	482,
	23,
	1277,
	23,
	23,
	23,
	23,
	89,
	23,
	23,
	130,
	23,
	771,
	771,
	23,
	23,
	23,
	32,
	10,
	10,
	38,
	334,
	23,
	30,
	37,
	37,
	14,
	1278,
	0,
	23,
	32,
	89,
	10,
	10,
	136,
	32,
	136,
	38,
	121,
	28,
	37,
	28,
	792,
	164,
	4,
	23,
	315,
	186,
	186,
	23,
	23,
	3,
	23,
	23,
	23,
	23,
	23,
	32,
	9,
	10,
	26,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	23,
	26,
	14,
	9,
	10,
	3,
	23,
	32,
	62,
	120,
	10,
	120,
	43,
	3,
	3,
	23,
	23,
	27,
	120,
	32,
	120,
	14,
	120,
	26,
	353,
	27,
	26,
	14,
	26,
	14,
	23,
	121,
	34,
	10,
	14,
	137,
	89,
	14,
	26,
	14,
	89,
	23,
	126,
	126,
	23,
	27,
	26,
	14,
	26,
	26,
	130,
	130,
	130,
	130,
	130,
	130,
	130,
	130,
	1279,
	1279,
	26,
	14,
	14,
	14,
	14,
	0,
	1,
	0,
	3,
	23,
	102,
	1280,
	89,
	89,
	10,
	26,
	121,
	14,
	130,
	14,
	23,
	26,
	26,
	120,
	119,
	119,
	14,
	26,
	14,
	14,
	14,
	14,
	10,
	110,
	110,
	23,
	14,
	130,
	143,
	3,
	3,
	14,
	26,
	14,
	14,
	10,
	14,
	110,
	23,
	23,
	89,
	26,
	26,
	14,
	130,
	130,
	14,
	130,
	119,
	119,
	926,
	14,
	23,
	14,
	26,
	14,
	14,
	10,
	114,
	110,
	23,
	14,
	130,
	143,
	14,
	3,
	23,
	26,
	34,
	121,
	26,
	14,
	10,
	26,
	14,
	14,
	89,
	23,
	89,
	23,
	26,
	10,
	34,
	102,
	14,
	23,
	31,
	23,
	14,
	23,
	31,
	26,
	23,
	31,
	23,
	23,
	10,
	89,
	14,
	137,
	14,
	26,
	14,
	89,
	23,
	89,
	26,
	23,
	31,
	23,
	23,
	31,
	89,
	26,
	3,
	23,
	26,
	23,
	102,
	26,
	121,
	130,
	23,
	89,
	31,
	26,
	28,
	3,
	3,
	168,
	1281,
	167,
	812,
	109,
	168,
	4,
	28,
	23,
	23,
	102,
	140,
	10,
	26,
	37,
	121,
	14,
	130,
	23,
	102,
	102,
	102,
	102,
	353,
	14,
	26,
	48,
	247,
	0,
	121,
	14,
	130,
	43,
	131,
	121,
	218,
	121,
	4,
	23,
	3,
	10,
	14,
	28,
	23,
	4,
	4,
	23,
	62,
	120,
	3,
	816,
	505,
	14,
	23,
	23,
	43,
	121,
	121,
	9,
	90,
	9,
	143,
	0,
	0,
	0,
	211,
	3,
	1104,
	213,
	185,
	137,
	32,
	228,
	0,
	167,
	14,
	10,
	186,
	14,
	109,
	472,
	9,
	10,
	14,
	3,
	10,
	137,
	14,
	10,
	14,
	14,
	28,
	9,
	10,
	3,
	14,
	26,
	26,
	14,
	26,
	23,
	23,
	109,
	4,
	4,
	4,
	109,
	46,
	3,
	4,
	4,
	27,
	211,
	26,
	26,
	26,
	23,
	26,
	120,
	120,
	120,
	10,
	10,
	30,
	136,
	26,
	137,
	14,
	14,
	9,
	10,
	14,
	23,
	27,
	137,
	1268,
	1282,
	120,
	120,
	120,
	43,
	3,
	23,
	14,
	109,
	27,
	167,
	109,
	26,
	27,
	26,
	27,
	27,
	28,
	14,
	566,
	23,
	599,
	120,
	26,
	120,
	120,
	28,
	14,
	10,
	34,
	34,
	34,
	14,
	3,
	121,
	41,
	121,
	90,
	23,
	3,
	4,
	23,
	120,
	120,
	120,
	4,
	4,
	3,
	23,
	28,
	9,
	14,
	23,
	120,
	120,
	120,
	23,
	23,
	31,
	0,
	143,
	138,
	115,
	1,
	0,
	336,
	103,
	3,
	23,
	62,
	599,
	31,
	14,
	131,
	28,
	218,
	28,
	1283,
	0,
	0,
	3,
	28,
	23,
	32,
	4,
	14,
	131,
	26,
	7,
	26,
	23,
	23,
	126,
	23,
	3,
	43,
	3,
	143,
	32,
	32,
	89,
	23,
	131,
	116,
	564,
	26,
	32,
	23,
	23,
	14,
	26,
	14,
	26,
	89,
	23,
	28,
	9,
	23,
	14,
	26,
	14,
	14,
	26,
	9,
	14,
	26,
	14,
	89,
	14,
	26,
	14,
	14,
	26,
	10,
	10,
	32,
	14,
	4,
	9,
	10,
	14,
	3,
	41,
	23,
	23,
	34,
	26,
	10,
	89,
	14,
	137,
	121,
	14,
	26,
	14,
	89,
	23,
	23,
	26,
	120,
	120,
	120,
	26,
	120,
	120,
	120,
	89,
	168,
	168,
	23,
	3,
	23,
	28,
	1270,
	1284,
	31,
	32,
	501,
	35,
	729,
	121,
	729,
	26,
	23,
	736,
	120,
	120,
	120,
	23,
	32,
	28,
	9,
	23,
	923,
	14,
	89,
	31,
	28,
	31,
	9,
	9,
	9,
	9,
	9,
	120,
	120,
	120,
	14,
	4,
	31,
	23,
	926,
	926,
	614,
	0,
	926,
	642,
	0,
	26,
	26,
	1104,
	123,
	1285,
	501,
	729,
	26,
	121,
	23,
	1286,
	1287,
	379,
	168,
	350,
	0,
	4,
	736,
	14,
	682,
	168,
	143,
	26,
	9,
	26,
	475,
	1288,
	27,
	90,
	23,
	23,
	27,
	27,
	168,
	143,
	143,
	1289,
	143,
	168,
	143,
	143,
	3,
	28,
	23,
	26,
	3,
	1290,
	23,
	10,
	14,
	89,
	26,
	26,
	23,
	1291,
	14,
	168,
	26,
	23,
	9,
	1292,
	137,
	23,
	23,
	23,
	31,
	3,
	1104,
	58,
	1102,
	23,
	10,
	32,
	14,
	89,
	89,
	14,
	14,
	31,
	31,
	114,
	28,
	121,
	23,
	23,
	23,
	14,
	26,
	26,
	26,
	26,
	131,
	28,
	218,
	28,
	27,
	26,
	10,
	32,
	14,
	26,
	89,
	14,
	14,
	14,
	32,
	28,
	26,
	10,
	89,
	26,
	23,
	9,
	137,
	14,
	14,
	9,
	26,
	26,
	26,
	109,
	109,
	23,
	0,
	26,
	89,
	89,
	14,
	14,
	89,
	89,
	14,
	14,
	14,
	14,
	14,
	14,
	3,
	26,
	89,
	14,
	213,
	26,
	14,
	14,
	89,
	31,
	32,
	23,
	31,
	23,
	102,
	88,
	0,
	0,
	1,
	109,
	3,
	23,
	28,
	26,
	23,
	14,
	14,
	89,
	89,
	23,
	3,
	26,
	120,
	23,
	31,
	14,
	14,
	14,
	14,
	120,
	120,
	23,
	102,
	14,
	185,
	246,
	10,
	89,
	89,
	14,
	27,
	26,
	168,
	26,
	102,
	14,
	14,
	14,
	89,
	89,
	3,
	26,
	14,
	89,
	14,
	10,
	14,
	9,
	10,
	26,
	168,
	26,
	501,
	501,
	35,
	91,
	89,
	10,
	1293,
	1293,
	0,
	1293,
	1293,
	168,
	26,
	501,
	36,
	1294,
	89,
	89,
	89,
	186,
	186,
	213,
	23,
	23,
	501,
	501,
	729,
	121,
	728,
	213,
	35,
	729,
	26,
	162,
	89,
	89,
	89,
	186,
	186,
	213,
	23,
	130,
	23,
	795,
	35,
	35,
	729,
	26,
	501,
	729,
	121,
	728,
	213,
	3,
	35,
	31,
	31,
	31,
	1276,
	31,
	31,
	26,
	3,
	4,
	115,
	4,
	1,
	162,
	89,
	10,
	9,
	115,
	23,
	62,
	32,
	32,
	120,
	14,
	10,
	817,
	31,
	32,
	102,
	89,
	89,
	89,
	186,
	186,
	213,
	728,
	137,
	501,
	35,
	31,
	23,
	729,
	121,
	729,
	26,
	23,
	726,
	213,
	38,
	49,
	49,
	49,
	49,
	15,
	10,
	10,
	10,
	31,
	89,
	31,
	89,
	500,
	502,
	502,
	500,
	32,
	1295,
	121,
	1295,
	121,
	4,
	89,
	3,
	23,
	23,
	32,
	1296,
	23,
	1297,
	14,
	1298,
	1299,
	89,
	31,
	826,
	1300,
	89,
	31,
	1301,
	14,
	26,
	9,
	28,
	1302,
	1303,
	1304,
	26,
	682,
	1305,
	32,
	831,
	1306,
	168,
	168,
	26,
	1307,
	1308,
	31,
	26,
	826,
	1300,
	1309,
	1310,
	1311,
	409,
	1312,
	1313,
	1312,
	1313,
	1314,
	409,
	1315,
	1316,
	1309,
	1310,
	1311,
	365,
	409,
	1312,
	1313,
	1312,
	1313,
	121,
	204,
	1317,
	1318,
	38,
	1319,
	1320,
	23,
	32,
	714,
	32,
	831,
	1306,
	31,
	7,
	23,
	26,
	35,
	23,
	218,
	987,
	123,
	37,
	28,
	168,
	115,
	46,
	46,
	3,
	3,
	23,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	26,
	23,
	26,
	23,
	26,
	177,
	89,
	23,
	23,
	3,
	14,
	26,
	14,
	32,
	10,
	32,
	32,
	10,
	32,
	14,
	26,
	26,
	26,
	23,
	23,
	31,
	23,
	32,
	23,
	26,
	15,
	23,
	123,
	123,
	10,
	23,
	23,
	23,
	31,
	32,
	102,
	26,
	26,
	137,
	3,
	23,
	26,
	102,
	14,
	31,
	89,
	131,
	1104,
	1105,
	9,
	131,
	132,
	1106,
	28,
	14,
	923,
	1321,
	1103,
	89,
	89,
	89,
	89,
	186,
	186,
	213,
	213,
	728,
	726,
	23,
	23,
	31,
	501,
	35,
	729,
	121,
	729,
	26,
	49,
	4,
	4,
	14,
	23,
	23,
	120,
	138,
	14,
	23,
	23,
	14,
	23,
	26,
	3,
	14,
	23,
	20,
	1322,
	4,
	4,
	4,
	4,
	14,
	23,
	4,
	89,
	23,
	3,
	23,
	28,
	27,
	14,
	23,
	10,
	89,
	14,
	27,
	9,
	137,
	14,
	14,
	23,
	26,
	28,
	27,
	10,
	89,
	14,
	27,
	9,
	137,
	14,
	14,
	26,
	14,
	684,
	14,
	14,
	89,
	23,
	23,
	23,
	26,
	62,
	32,
	26,
	120,
	120,
	26,
	23,
	32,
	28,
	89,
	27,
	28,
	27,
	34,
	34,
	14,
	10,
	137,
	14,
	89,
	14,
	3,
	27,
	26,
	89,
	23,
	14,
	27,
	90,
	121,
	14,
	14,
	4,
	4,
	23,
	32,
	62,
	26,
	120,
	23,
	0,
	0,
	27,
	28,
	28,
	27,
	28,
	27,
	34,
	34,
	34,
	14,
	34,
	62,
	10,
	89,
	89,
	121,
	23,
	9,
	137,
	121,
	62,
	89,
	26,
	32,
	14,
	34,
	62,
	121,
	9,
	121,
	62,
	26,
	137,
	14,
	23,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	94,
	23,
	23,
	23,
	14,
	23,
	14,
	26,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	14,
	23,
	23,
	218,
	3,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[4] = 
{
	{ 0x060000A8, 2,  (void**)&UnityTlsContext_WriteCallback_m5F0468BDEFF636D45C1C6F1C76704F11CDED387F_RuntimeMethod_var, 0 },
	{ 0x060000AA, 3,  (void**)&UnityTlsContext_ReadCallback_m0B14F0D383551A47EE106C1A94B86D951C20C8BB_RuntimeMethod_var, 0 },
	{ 0x060000AC, 4,  (void**)&UnityTlsContext_VerifyCallback_m13D57FD52BD264F536F4CA7E84BC54CCE5E01850_RuntimeMethod_var, 0 },
	{ 0x060000AE, 5,  (void**)&UnityTlsContext_CertificateCallback_m4CF8B88233EDA0609216D4F30A2C1F0966022347_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x02000194, { 0, 23 } },
	{ 0x02000195, { 23, 2 } },
	{ 0x02000197, { 25, 8 } },
	{ 0x02000198, { 33, 3 } },
	{ 0x0200019A, { 36, 6 } },
	{ 0x0200019B, { 42, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[45] = 
{
	{ (Il2CppRGCTXDataType)3, 50524 },
	{ (Il2CppRGCTXDataType)2, 41070 },
	{ (Il2CppRGCTXDataType)3, 50525 },
	{ (Il2CppRGCTXDataType)3, 50526 },
	{ (Il2CppRGCTXDataType)3, 50527 },
	{ (Il2CppRGCTXDataType)3, 50528 },
	{ (Il2CppRGCTXDataType)3, 50529 },
	{ (Il2CppRGCTXDataType)3, 50530 },
	{ (Il2CppRGCTXDataType)3, 50531 },
	{ (Il2CppRGCTXDataType)3, 50532 },
	{ (Il2CppRGCTXDataType)3, 50533 },
	{ (Il2CppRGCTXDataType)2, 51434 },
	{ (Il2CppRGCTXDataType)2, 41071 },
	{ (Il2CppRGCTXDataType)3, 50534 },
	{ (Il2CppRGCTXDataType)2, 41073 },
	{ (Il2CppRGCTXDataType)3, 50535 },
	{ (Il2CppRGCTXDataType)3, 50536 },
	{ (Il2CppRGCTXDataType)3, 50537 },
	{ (Il2CppRGCTXDataType)3, 50538 },
	{ (Il2CppRGCTXDataType)2, 41072 },
	{ (Il2CppRGCTXDataType)3, 50539 },
	{ (Il2CppRGCTXDataType)1, 41072 },
	{ (Il2CppRGCTXDataType)2, 41072 },
	{ (Il2CppRGCTXDataType)3, 50540 },
	{ (Il2CppRGCTXDataType)2, 41079 },
	{ (Il2CppRGCTXDataType)3, 50541 },
	{ (Il2CppRGCTXDataType)3, 50542 },
	{ (Il2CppRGCTXDataType)3, 50543 },
	{ (Il2CppRGCTXDataType)3, 50544 },
	{ (Il2CppRGCTXDataType)2, 41100 },
	{ (Il2CppRGCTXDataType)3, 50545 },
	{ (Il2CppRGCTXDataType)3, 50546 },
	{ (Il2CppRGCTXDataType)2, 51435 },
	{ (Il2CppRGCTXDataType)3, 50547 },
	{ (Il2CppRGCTXDataType)3, 50548 },
	{ (Il2CppRGCTXDataType)2, 41106 },
	{ (Il2CppRGCTXDataType)3, 50549 },
	{ (Il2CppRGCTXDataType)3, 50550 },
	{ (Il2CppRGCTXDataType)2, 51436 },
	{ (Il2CppRGCTXDataType)3, 50551 },
	{ (Il2CppRGCTXDataType)3, 50552 },
	{ (Il2CppRGCTXDataType)3, 50553 },
	{ (Il2CppRGCTXDataType)3, 50554 },
	{ (Il2CppRGCTXDataType)3, 50555 },
	{ (Il2CppRGCTXDataType)2, 41123 },
};
extern const Il2CppCodeGenModule g_SystemCodeGenModule;
const Il2CppCodeGenModule g_SystemCodeGenModule = 
{
	"System.dll",
	2368,
	s_methodPointers,
	23,
	s_adjustorThunks,
	s_InvokerIndices,
	4,
	s_reversePInvokeIndices,
	6,
	s_rgctxIndices,
	45,
	s_rgctxValues,
	NULL,
};
