/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject {

	NSDictionary* _itemResponseDictionary;
	BOOL _iTunesStoreStream;

}

@property (nonatomic,readonly) long long flavor; 
@property (nonatomic,readonly) long long streamProtocol; 
@property (nonatomic,copy,readonly) NSURL * streamURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize iTunesStoreStream=_iTunesStoreStream - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)flavor;
-(NSURL *)keyServerURL;
-(BOOL)isiTunesStoreStream;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(NSURL *)keyCertificateURL;
-(long long)ICStoreRadioStreamFlavorWithString:(id)arg1 ;
-(long long)ICStoreRadioStreamProtocolWithString:(id)arg1 ;
-(long long)streamProtocol;
-(NSURL *)streamURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
@end

