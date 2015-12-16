class Particle 
{	
	private:
		double X[3]; // Position
		double U[3]; // Velocity
		double Alpha[3]; // Vorticity
		double AlphaDot[3]; // Rate of change of Vorticity

	public:
		Particle ();
		void set_position(double[]);
		void set_velocity(double[]);
		void set_vorticity(double[]);
		void set_vorticityrate(double[]);
		void print_all(void);
};
Particle::Particle()
{
	double zeros[3] = {0.0,0.0,0.0}; 
	set_position(zeros);
	set_velocity(zeros);
	set_vorticity(zeros);
	set_vorticityrate(zeros);
}

void Particle::set_position(double Pos[])
{
	X[0] = Pos[0];
	X[1] = Pos[1];
	X[2] = Pos[2];
}
void Particle::set_velocity(double Vel[])
{
	U[0] = Vel[0];
	U[1] = Vel[1];
	U[2] = Vel[2];

}
void Particle::set_vorticity(double Vor[])
{
	Alpha[0] = Vor[0];
	Alpha[1] = Vor[1];
	Alpha[2] = Vor[2];
}
void Particle::set_vorticityrate(double Rat[])
{
	AlphaDot[0] = Rat[0];
	AlphaDot[1] = Rat[1];
	AlphaDot[2] = Rat[2];
}
void Particle::print_all(void)
{
	std::cout<<"\nPosition:\n"<<"("<<X[0]<<","<<X[1]<<","<<X[2]<<")";
	std::cout<<"\nVelocity:\n"<<"("<<U[0]<<","<<U[1]<<","<<U[2]<<")";
	std::cout<<"\nVorticity:\n"<<"("<<Alpha[0]<<","<<Alpha[1]<<","<<Alpha[2]<<")";
	std::cout<<"\nVorticity Rate:\n"<<"("<<AlphaDot[0]<<","<<AlphaDot[1]<<","<<AlphaDot[2]<<")";
	std::cout<<"\n\n";
}
