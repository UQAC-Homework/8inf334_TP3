#ifndef INC_8INF334_TP3_NOEUD_H
#define INC_8INF334_TP3_NOEUD_H

namespace nodes
{
	class Noeud
	{
	public:
		virtual ~Noeud() = default;

		/// Executes this node
		virtual void executer() = 0;
		
		/// Gets the next node to execute
		[[nodiscard]] virtual Noeud* prochain() const = 0;
	};
}

#endif //INC_8INF334_TP3_NOEUD_H
