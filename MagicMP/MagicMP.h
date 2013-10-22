//
//  MagicMP.h
//  DemoProject
//
//  Created by Pedro Piñera Buendía on 11/10/13.
//  Copyright (c) 2013 PPinera. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

//Typedefs
typedef void(^errorBlock)(NSError *error);
typedef BOOL(^invitationBlock)(MCPeerID *peerID,NSData *context);
typedef void(^userFoundBlock)(MCPeerID *peerID,MCNearbyServiceBrowser *browser,NSDictionary* discoveryInfo);
typedef void(^userLostBlock)(MCPeerID *peerID,MCNearbyServiceBrowser *browser);

//Protocol
@protocol MagicMPDelegate <MCSessionDelegate>

@end

@interface MagicMP : NSObject <MCNearbyServiceAdvertiserDelegate,MCNearbyServiceBrowserDelegate>

+(id)sharedMP;
-(id)initWithSession:(MCSession*)session andDelegate:(id)delegate;
-(void)setDelegate:(id)delegate andSession:(MCSession*)session;

//Advertiser
-(BOOL)startAdvertisingWithDiscoveryInfo:(NSDictionary*)discoveryInfo serviceType:(NSString*)servicetype withInvitationBlock:(invitationBlock)invitationBlock andError:(errorBlock)errorBlock;
-(BOOL)stopAdvertisingPeer;

//Browser
-(BOOL)startBrowsingWithServiceType:(NSString*)serviceType withUserFound:(userFoundBlock)userFound UserLost:(userLostBlock)userLost andErrorBlock:(errorBlock)errorBlock;
-(BOOL)stopBrowsing;
-(BOOL)invitePeer:(MCPeerID*)peer withContext:(NSData*)context timeout:(NSTimeInterval)timeout;

// Properties
@property (nonatomic,strong) MCNearbyServiceAdvertiser *advertiserEntity;
@property (nonatomic,strong) MCNearbyServiceBrowser *browserEntity;
@property (nonatomic,strong) MCSession *session;
@property (nonatomic,readonly) NSMutableArray *foundAdvertisers;
@property (nonatomic,weak) id <MagicMPDelegate> delegate;

@end
