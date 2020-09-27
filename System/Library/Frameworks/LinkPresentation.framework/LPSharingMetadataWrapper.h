/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding> {

	BOOL _hasFetchedSubresources;
	BOOL _hasCompletedFetch;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedSubresources;              //@synthesize hasFetchedSubresources=_hasFetchedSubresources - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                   //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(LPLinkMetadata *)metadata;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(BOOL)hasFetchedSubresources;
-(void)setHasFetchedSubresources:(BOOL)arg1 ;
-(BOOL)hasCompletedFetch;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
@end
