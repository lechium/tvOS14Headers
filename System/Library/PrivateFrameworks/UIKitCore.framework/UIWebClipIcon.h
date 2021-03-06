/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSURL;

@interface UIWebClipIcon : NSObject {

	BOOL _precomposed;
	BOOL _siteWide;
	CGSize _bestSize;
	NSURL* _url;

}

@property (assign,getter=isPrecomposed,nonatomic) BOOL precomposed;              //@synthesize precomposed=_precomposed - In the implementation block
@property (assign,getter=isSiteWide,nonatomic) BOOL siteWide;                    //@synthesize siteWide=_siteWide - In the implementation block
@property (assign,nonatomic) CGSize bestSize;                                    //@synthesize bestSize=_bestSize - In the implementation block
@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setPrecomposed:(BOOL)arg1 ;
-(BOOL)isPrecomposed;
-(BOOL)isSiteWide;
-(CGSize)bestSize;
-(long long)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2 ;
-(void)setSiteWide:(BOOL)arg1 ;
-(void)setBestSize:(CGSize)arg1 ;
@end

