/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject {

	MPUMutableFontDescriptor* _reusableMutableFontDescriptor;
	unsigned long long _maximumCapacity;
	NSMutableArray* _orderedCachedFontDescriptors;

}
+(id)sharedFontDescriptorCache;
-(id)init;
-(void)dealloc;
-(id)cachedImmutableFontDescriptorForConfigurationBlock:(/*^block*/id)arg1 ;
-(id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
@end
