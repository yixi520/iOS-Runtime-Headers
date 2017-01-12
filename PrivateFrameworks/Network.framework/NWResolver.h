/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWResolver : NSObject {
    NWEndpoint * _endpoint;
    NSArray * _internalResolvedEndpointArray;
    NSSet * _internalResolvedEndpoints;
    NSObject<OS_nw_resolver> * _internalResolver;
    int  _internalStatus;
    NWParameters * _parameters;
}

@property (readonly) NWEndpoint *endpoint;
@property (retain) NSArray *internalResolvedEndpointArray;
@property (retain) NSSet *internalResolvedEndpoints;
@property (readonly) NSObject<OS_nw_resolver> *internalResolver;
@property int internalStatus;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly) NSArray *resolvedEndpointArray;
@property (nonatomic, readonly) NSSet *resolvedEndpoints;
@property (nonatomic, readonly) int status;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)endpoint;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)internalResolvedEndpointArray;
- (id)internalResolvedEndpoints;
- (id)internalResolver;
- (int)internalStatus;
- (id)parameters;
- (id)resolvedEndpointArray;
- (id)resolvedEndpoints;
- (void)setInternalResolvedEndpointArray:(id)arg1;
- (void)setInternalResolvedEndpoints:(id)arg1;
- (void)setInternalStatus:(int)arg1;
- (int)status;

@end