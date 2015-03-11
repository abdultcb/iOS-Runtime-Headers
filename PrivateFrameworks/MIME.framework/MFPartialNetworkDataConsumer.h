/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <MFGuaranteedCollectingDataConsumer>, NSData, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    unsigned int _seenNetworkLineEndings : 1;
    unsigned long long _length;
    <MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    NSData *_strippedData;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (unsigned long long)length;
- (void)purge;

@end