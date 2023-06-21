using UnityEngine.Networking;
using System.Security.Cryptography.X509Certificates;
using UnityEngine;
// Based on https://www.owasp.org/index.php/Certificate_and_Public_Key_Pinning#.Net
class AcceptANGCertificate : CertificateHandler
{

    // Encoded RSAPublicKey
    private static string PUB_KEY = "9527c66b7fbcf2f208e00cdf286476e4";
    protected override bool ValidateCertificate(byte[] certificateData)
    {
        X509Certificate2 certificate = new X509Certificate2(certificateData);
        string pk = certificate.GetPublicKeyString();
        //Uncomment to find public key.
        //Debug.Log(pk);
        if (pk.ToLower().Equals(PUB_KEY.ToLower()))
            return true;
        return false;
    }
}