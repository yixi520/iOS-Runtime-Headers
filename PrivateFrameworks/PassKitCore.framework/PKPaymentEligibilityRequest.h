/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentEligibilityRequest : PKPaymentOverlayableRequest {
    NSData * _FPInfo;
    NSString * _cardholderName;
    int  _cardholderNameInputMethod;
    NSData * _encryptedCardData;
    NSString * _encryptionVersion;
    NSData * _ephemeralPublicKey;
    NSString * _expiration;
    int  _expirationInputMethod;
    NSString * _hostApplicationIdentifier;
    NSString * _hostApplicationVersion;
    NSString * _issuerIdentifier;
    NSString * _nonce;
    PKPaymentCredential * _paymentCredential;
    NSString * _primaryAccountNumber;
    int  _primaryAccountNumberInputMethod;
    NSString * _productIdentifier;
    NSData * _publicKeyHash;
    int  _source;
    NSData * _wrappedKey;
}

@property (nonatomic, copy) NSData *FPInfo;
@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic) int cardholderNameInputMethod;
@property (nonatomic, copy) NSData *encryptedCardData;
@property (nonatomic, copy) NSString *encryptionVersion;
@property (nonatomic, copy) NSData *ephemeralPublicKey;
@property (nonatomic, copy) NSString *expiration;
@property (nonatomic) int expirationInputMethod;
@property (nonatomic, copy) NSString *hostApplicationIdentifier;
@property (nonatomic, copy) NSString *hostApplicationVersion;
@property (nonatomic, copy) NSString *issuerIdentifier;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, retain) PKPaymentCredential *paymentCredential;
@property (nonatomic, copy) NSString *primaryAccountNumber;
@property (nonatomic) int primaryAccountNumberInputMethod;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, readonly) int source;
@property (nonatomic, copy) NSData *wrappedKey;

- (void).cxx_destruct;
- (id)FPInfo;
- (unsigned int)_requestHTTPMethod;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(id /* block */)arg8;
- (id)cardholderName;
- (int)cardholderNameInputMethod;
- (id)encryptedCardData;
- (id)encryptionVersion;
- (id)ephemeralPublicKey;
- (id)expiration;
- (int)expirationInputMethod;
- (id)hostApplicationIdentifier;
- (id)hostApplicationVersion;
- (id)init;
- (id)initWithPaymentCredential:(id)arg1;
- (id)initWithSource:(int)arg1;
- (id)issuerIdentifier;
- (id)nonce;
- (id)paymentCredential;
- (id)primaryAccountNumber;
- (int)primaryAccountNumberInputMethod;
- (id)productIdentifier;
- (id)publicKeyHash;
- (BOOL)requiresNonce;
- (void)setCardholderName:(id)arg1;
- (void)setCardholderNameInputMethod:(int)arg1;
- (void)setEncryptedCardData:(id)arg1;
- (void)setEncryptionVersion:(id)arg1;
- (void)setEphemeralPublicKey:(id)arg1;
- (void)setExpiration:(id)arg1;
- (void)setExpirationInputMethod:(int)arg1;
- (void)setFPInfo:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setHostApplicationVersion:(id)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setPrimaryAccountNumberInputMethod:(int)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setWrappedKey:(id)arg1;
- (int)source;
- (id)wrappedKey;

@end