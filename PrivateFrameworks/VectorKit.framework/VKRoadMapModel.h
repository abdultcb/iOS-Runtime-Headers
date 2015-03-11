/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, VKStyleManager;

@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver> {
    struct unique_ptr<vk::RoadManager, std::__1::default_delete<vk::RoadManager> > { 
        struct __compressed_pair<vk::RoadManager *, std::__1::default_delete<vk::RoadManager> > { 
            struct RoadManager {} *__first_; 
        } __ptr_; 
    struct unique_ptr<vk::PatternedManager, std::__1::default_delete<vk::PatternedManager> > { 
        struct __compressed_pair<vk::PatternedManager *, std::__1::default_delete<vk::PatternedManager> > { 
            struct PatternedManager {} *__first_; 
        } __ptr_; 
    unsigned long long _mapLayerPosition;
    } _patternedRibbonManager;
    } _roadManager;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property unsigned long long mapLayerPosition;
@property(readonly) VKStyleManager * styleManager;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)commandBufferId;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (void)setMapLayerPosition:(unsigned long long)arg1;
- (void)stylesheetDidChange;

@end