/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TVPContentKeyRequestParams : NSObject {

	NSString* _keyIdentifier;
	NSArray* _keyFormatVersions;

}

@property (nonatomic,retain) NSString * keyIdentifier;                 //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * keyFormatVersions;              //@synthesize keyFormatVersions=_keyFormatVersions - In the implementation block
-(NSString *)keyIdentifier;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(NSArray *)keyFormatVersions;
-(void)setKeyFormatVersions:(NSArray *)arg1 ;
@end

