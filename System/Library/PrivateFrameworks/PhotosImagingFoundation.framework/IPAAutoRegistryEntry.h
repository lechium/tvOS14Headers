/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:58 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IPAAutoRegistryEntry : NSObject {

	BOOL _persistable;
	Class _autoSettingsClass;

}

@property (nonatomic,retain) Class autoSettingsClass;              //@synthesize autoSettingsClass=_autoSettingsClass - In the implementation block
@property (assign,nonatomic) BOOL persistable;                     //@synthesize persistable=_persistable - In the implementation block
-(Class)autoSettingsClass;
-(void)setAutoSettingsClass:(Class)arg1 ;
-(BOOL)persistable;
-(void)setPersistable:(BOOL)arg1 ;
@end

