/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {
    NSMutableSet *_hrefs;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) NSMutableSet *hrefs;
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;

- (void)addHref:(id)arg1;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)hrefs;
- (id)hrefsAsFullURLs;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setHrefs:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end