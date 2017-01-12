/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextInputViewElement : SKUIInputViewElement {
    int  _keyboardType;
    int  _maximumLength;
    NSString * _placeholderText;
    BOOL  _secure;
}

@property (nonatomic, readonly) SKUIAnimatorDOMFeature *animationInterface;
@property (nonatomic, readonly) int keyboardType;
@property (nonatomic, readonly) int maximumLength;
@property (nonatomic, readonly) NSString *placeholderText;
@property (getter=isSecure, nonatomic, readonly) BOOL secure;

+ (BOOL)isTextInputType:(id)arg1;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)animationInterface;
- (id)applyUpdatesWithElement:(id)arg1;
- (unsigned int)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isSecure;
- (int)keyboardType;
- (int)maximumLength;
- (id)placeholderText;

@end