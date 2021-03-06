/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSeriesSample : HKSample {
    long long  _count;
    BOOL  _frozen;
}

@property (readonly) unsigned int count;
@property (getter=_isFrozen, setter=_setFrozen:, nonatomic) BOOL frozen;

+ (BOOL)supportsSecureCoding;

- (BOOL)_isFrozen;
- (void)_setCount:(unsigned int)arg1;
- (void)_setFrozen:(BOOL)arg1;
- (BOOL)_shouldNotifyOnInsert;
- (id)_validateConfiguration;
- (id)_validateSample;
- (id)_valueDescription;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
