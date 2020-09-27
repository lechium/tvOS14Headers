/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICPlayActivityEventContainerIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _adamID;
	NSString* _cloudAlbumID;
	unsigned long long _cloudPlaylistID;
	NSString* _globalPlaylistID;
	NSString* _playlistVersionHash;
	long long _stationID;
	NSString* _stationHash;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long adamID;                                 //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cloudAlbumID;                     //@synthesize cloudAlbumID=_cloudAlbumID - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudPlaylistID;               //@synthesize cloudPlaylistID=_cloudPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * globalPlaylistID;                 //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,copy,readonly) NSString * playlistVersionHash;              //@synthesize playlistVersionHash=_playlistVersionHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationHash;                      //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * stationStringID;                  //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,readonly) long long stationID;                              //@synthesize stationID=_stationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)stationID;
-(long long)adamID;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(NSString *)cloudAlbumID;
-(NSString *)globalPlaylistID;
-(NSString *)playlistVersionHash;
-(unsigned long long)cloudPlaylistID;
-(id)_copyWithClass:(Class)arg1 ;
@end
