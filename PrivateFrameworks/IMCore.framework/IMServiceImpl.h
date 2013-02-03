/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMAccount, NSArray, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface IMServiceImpl : IMService {
    unsigned int _handlesChatInvites : 1;
    unsigned int _supportsSMS : 1;
    unsigned int _defaultBuddyImageDataChecked : 1;
    unsigned int _iconChecked : 1;
    NSArray *_abProperties;
    IMAccount *_bestAccount;
    NSMutableDictionary *_cardMap;
    NSArray *_defaultBuddyImageData;
    NSDictionary *_defaultSettings;
    NSArray *_emailDomains;
    id _icon;
    NSData *_imageData;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_name;
    NSDictionary *_personToIDMap;
    NSUInteger _screenNameSensitivity;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
}

+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;
+ (void)setServiceClass:(Class)arg1;
+ (id)supportedCountryCodes;
+ (BOOL)systemSupportsSMSSending;

- (NSUInteger)IDSensitivity;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_dumpCardMap;
- (void)_loadDefaultImageData;
- (id)_personToIDMap;
- (void)_syncWithRemoteBuddies;
- (Class)accountClass;
- (id)accountIDs;
- (void)accountInitialSyncPerformed:(id)arg1;
- (void)activeAccountsChanged:(id)arg1;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (BOOL)allowsMultipleConnections;
- (NSInteger)buddyNotesMaxByteLength;
- (id)canonicalFormOfID:(id)arg1;
- (id)cardMap;
- (void)clearIDToCardMap;
- (NSInteger)compareNames:(id)arg1;
- (void)dealloc;
- (id)defaultAccountSettings;
- (id)defaultImageDataForID:(id)arg1;
- (void)defaultsChanged:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)doneSetup;
- (NSUInteger)emailDomainOfID:(id)arg1;
- (id)emailDomains;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (BOOL)handlesChatInvites;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)initialSyncPerformed;
- (id)internalName;
- (BOOL)isEnabled;
- (BOOL)isPersistent;
- (BOOL)isPlugInService;
- (id)localizedName;
- (id)localizedShortName;
- (id)myScreenNames;
- (id)name;
- (id)newIDToCardMap;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)serviceDefaults;
- (id)serviceImageData;
- (id)serviceProperties;
- (void)setDefaultAccountSettings:(id)arg1;
- (void)setServiceDefaults:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (id)shortName;
- (NSUInteger)status;
- (void)statusChangedForAccount:(id)arg1 from:(NSUInteger)arg2 to:(NSUInteger)arg3;
- (id)subtypeInformationForAccount:(id)arg1;
- (BOOL)supportsAdding;
- (BOOL)supportsAuthorization;
- (BOOL)supportsRegistration;
- (void)updateIDToCardMapWithNotification:(id)arg1;

@end