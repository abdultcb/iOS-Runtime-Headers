/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;

@interface SUScriptActivityViewController : SUScriptViewController  {
    NSArray *_applicationActivities;
    NSArray *_providers;
}

@property(copy) id excludedActivityTypes;
@property(readonly) NSString * activityTypeAssignToContact;
@property(readonly) NSString * activityTypeCopyToPasteboard;
@property(readonly) NSString * activityTypeMail;
@property(readonly) NSString * activityTypeMessage;
@property(readonly) NSString * activityTypePostToFacebook;
@property(readonly) NSString * activityTypePostToTwitter;
@property(readonly) NSString * activityTypePostToWeibo;
@property(readonly) NSString * activityTypePrint;
@property(readonly) NSString * activityTypeSaveToCameraRoll;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)activityTypeSaveToCameraRoll;
- (id)activityTypePrint;
- (id)activityTypePostToWeibo;
- (id)activityTypePostToTwitter;
- (id)activityTypePostToFacebook;
- (id)activityTypeMessage;
- (id)activityTypeMail;
- (id)activityTypeCopyToPasteboard;
- (id)activityTypeAssignToContact;
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (id)newNativeViewController;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;
- (id)excludedActivityTypes;
- (void)setExcludedActivityTypes:(id)arg1;
- (id)attributeKeys;

@end