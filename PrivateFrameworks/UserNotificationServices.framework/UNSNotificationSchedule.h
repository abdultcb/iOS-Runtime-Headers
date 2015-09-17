/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
 */

@interface UNSNotificationSchedule : NSObject <NSSecureCoding> {
    NSMutableDictionary *_fireDatesToNotifications;
}

+ (BOOL)supportsSecureCoding;

- (id)_initWithDictionary:(id)arg1;
- (void)addLocalNotification:(id)arg1 forFireDate:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDates;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localNotificationsForFireDate:(id)arg1;

@end