/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSMutableDictionary;

@interface ISImageCache : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imageBagsByDescriptor;

}

@property (assign) os_unfair_lock_s lock;                                    //@synthesize lock=_lock - In the implementation block
@property (retain) NSMutableDictionary * imageBagsByDescriptor;              //@synthesize imageBagsByDescriptor=_imageBagsByDescriptor - In the implementation block
-(id)debugDescription;
-(id)init;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(void)setImage:(id)arg1 forDescriptor:(id)arg2 ;
-(id)allImages;
-(NSMutableDictionary *)imageBagsByDescriptor;
-(void)setImageBagsByDescriptor:(NSMutableDictionary *)arg1 ;
@end
